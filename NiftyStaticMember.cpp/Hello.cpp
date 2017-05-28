#include <iostream>
#include "Hello.h"
NIFTY_STATIC_IMPL(nsHello, CHello, nsHello, CHello, mgInst )
void nsHello::CHello::SayHello()
{
	std::cout << "Hello World" << std::endl;
}
