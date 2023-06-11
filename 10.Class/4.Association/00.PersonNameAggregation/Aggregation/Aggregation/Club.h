#pragma once
// Aggregation
// Club.h

class Name;
constexpr int M{ 50 };

class Club {
	const Name* name[M]{};
	int m{ 0 };
public:
	Club& operator+=(const Name&);
	Club& operator-=(const Name&);
	void display() const;
	//...
};