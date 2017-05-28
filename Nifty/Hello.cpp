#include <iostream>
#include "Hello.h"
NIFTY_IMPL( nsHello, CHello, gHello, "Hello World" )
nsHello::CHello::CHello(const char* pzMsg)
{
	mpzMsg = pzMsg;
}
void nsHello::CHello::SayHello()
{
	std::cout << mpzMsg<< std::endl;
}
