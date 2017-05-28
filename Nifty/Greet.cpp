#include <iostream>
#include "Hello.h"
#include "Greet.h"

NIFTY_IMPL(nsGreet, CGreet, gGreet )

void nsGreet::CGreet::Greet()
{
	nsHello::gHello.SayHello();
}
