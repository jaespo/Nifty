#include <iostream>
#include "Hello.h"
#include "Greet.h"

NIFTY_STATIC_IMPL( nsHello, CHello, nsGreet, CGreet, mgHello )
void nsGreet::CGreet::Greet()
{
	mgHello.SayHello();
}
