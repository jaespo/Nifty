#include <iostream>
#include "myclass1.h"
#include "myclass2.h"

NIFTY_STATIC_IMPL(myNameSpace2, CMyClass2, mgInst )

void myNameSpace2::CMyClass2::Greet()
{
	myNameSpace1::CMyClass1::Inst().SayHello();
}
