#include <iostream>
#include "myclass1.h"

NIFTY_IMPL( myNameSpace1, CMyClass1, gMyGlobal1 )

void myNameSpace1::CMyClass1::SayHello()
{
	std::cout << "Hello World" << std::endl;
}
