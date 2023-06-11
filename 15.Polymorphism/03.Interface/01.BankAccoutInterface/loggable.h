#pragma once 

#include <string>
// we can use abstract keywords for abstract classes as well
class loggable abstract{
public: 
	virtual void log(const std::string & message) const = 0;

};