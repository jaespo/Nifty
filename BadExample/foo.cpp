#include <iostream>
#include "foo.h"
#include "bar.h"

fooNameSpace::CFoo fooNameSpace::gFoo;

fooNameSpace::CFoo::CFoo()
{
	std::cout << "CFoo ctor" << std::endl;
}

fooNameSpace::CFoo::~CFoo()
{
	std::cout << "CFoo dtor" << std::endl;
}

void fooNameSpace::CFoo::Greet()
{
	barNameSpace::gBar.SayHello();
}
