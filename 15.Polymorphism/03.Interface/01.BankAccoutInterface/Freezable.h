#pragma once
// Pure virtual class just contain pure virtual functions
class freezable
{
public:	
	virtual void freeze() = 0;
	virtual void unfreeze() = 0;

};
