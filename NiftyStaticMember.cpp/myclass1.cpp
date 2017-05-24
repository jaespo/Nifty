#include <iostream>
#include "myclass1.h"

NIFTY_STATIC_IMPL(myNameSpace1, CMyClass1, mgInst )

void myNameSpace1::CMyClass1::SayHello()
{
	std::cout << "Hello World" << std::endl;
}
