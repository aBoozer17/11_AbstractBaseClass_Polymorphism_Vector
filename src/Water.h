#pragma once
#include "Liquid.h"
class Water: public Liquid
{
public:
	virtual void whoAmI();
	Water(void);
	virtual ~Water(void);
};

