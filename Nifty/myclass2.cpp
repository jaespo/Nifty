#include <iostream>
#include "myclass1.h"
#include "myclass2.h"

NIFTY_IMPL(myNameSpace2, CMyClass2, gMyGlobal2)

void myNameSpace2::CMyClass2::Greet()
{
	myNameSpace1::gMyGlobal1.SayHello();
}
