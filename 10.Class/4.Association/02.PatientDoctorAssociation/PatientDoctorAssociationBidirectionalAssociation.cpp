/*In this example, we’ll implement a bi-directional Doctor/Patient relationship,
 since it makes sense for the Doctors to know who their Patients are, and vice-versa.
In general, you should avoid bidirectional associations if a unidirectional one will do,
as they add complexity and tend to be harder to write without making errors.*/

#include "stdafx.h"
#include <functional> // reference_wrapper
#include <iostream>
#include <string>
#include <vector>

// Since Doctor and Patient have a circular dependency, we're going to forward declare Patient
class Patient;

class Doctor
{
private:
	std::string _m_name{};
	std::vector<std::reference_wrapper<const Patient>> m_patient{};

public:
	Doctor(const std::string& name) :
		_m_name{ name }
	{
	}

	void addPatient(Patient& patient);

	void print_doctor();

	const std::string& getName() const { return _m_name; }
};

class Patient
{
private:
	std::string _m_name{};
	std::vector<std::reference_wrapper<const Doctor>> _m_doctor{}; // so that we can use it here

																  // We're going to make addDoctor private because we don't want the public to use it.
																  // They should use Doctor::addPatient() instead, which is publicly exposed
	void addDoctor(const Doctor& doctor)
	{
		_m_doctor.push_back(doctor);
	}

public:
	Patient(const std::string& name)
		: _m_name{ name }
	{
	}

	void print_patient();

	const std::string& getName() const { return _m_name; }

	// We'll friend Doctor::addPatient() so it can access the private function Patient::addDoctor()
	friend void Doctor::addPatient(Patient& patient);
};

void Doctor::addPatient(Patient& patient)
{
	// Our doctor will add this patient
	m_patient.push_back(patient);

	// and the patient will also add this doctor
	patient.addDoctor(*this);
}

void Doctor::print_doctor()
{
	if (m_patient.empty())
	{
		std::cout << _m_name << " has no patients right now" << std::endl;
		return;
	}
	std::cout << _m_name << " is seeing patients: ";
	for (const auto& patient : m_patient)
		std::cout << patient.get().getName() << ' ';
	std::cout << std::endl;
}

void Patient::print_patient()
{
	if (_m_doctor.empty())
	{
		std::cout << _m_name << " has no doctors right now" << std::endl;
		return;
	}

	std::cout << _m_name << " is seeing doctors: ";
	for (const auto& doctor : _m_doctor)
		std::cout << doctor.get().getName() << ' ';
	std::cout << std::endl;
}

int main()
{
	// Create a Patient outside the scope of the Doctor
	Patient dave{ "Dave" };
	Patient frank{ "Frank" };
	Patient betsy{ "Betsy" };

	Doctor james{ "James" };
	Doctor scott{ "Scott" };

	james.addPatient(dave);

	scott.addPatient(dave);
	scott.addPatient(betsy);

	james.print_doctor();
	scott.print_doctor();
	dave.print_patient();
	frank.print_patient();
	betsy.print_patient();

	return 0;
}