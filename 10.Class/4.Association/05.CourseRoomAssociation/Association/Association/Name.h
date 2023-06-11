
#pragma once
#ifndef NAME_H
#define NAME_H
// Composition - Name
// Name.h

class Name {
	char* name{ nullptr };
public:
	Name(const char*);
	Name(const Name&);
	Name& operator=(const Name&);
	~Name();
	const char* get() const;
	void set(const char*);
};
#endif