#pragma once
class Liquid
{
public:
	//this pure virtual function makes this 
	//Base Class an abstract class
	//you cannot instantiate it in any way
	virtual void whoAmI()=0;
	Liquid(void);
	virtual ~Liquid(void);
};

