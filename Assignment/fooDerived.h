#pragma once
#include "foo.h"
#include "foo2.h"

class fooDerived : public foo, public foo2
{
public:
	fooDerived();
	~fooDerived();
	void get_ab();
};

