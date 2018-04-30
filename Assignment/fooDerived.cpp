#include "fooDerived.h"
#include "foo.h"
#include "foo2.h"
#include <iostream>


fooDerived::fooDerived() : foo2(), foo()
{
}


fooDerived::~fooDerived()
{
}

void fooDerived::get_ab()
{
	std::cout << "a: " << a << " b:" << b << std::endl;
}
