#pragma once
#include "Liquid.h"
class Oil :
	public Liquid
{
public:
	virtual void whoAmI();
	Oil(void);
	virtual ~Oil(void);
};

