#include <iostream>
#include "Hello.h"
#include "Greet.h"
NIFTY_STATIC_IMPL( nsGreet, CGreet, nsGreet, CGreet, mgInst )

void nsGreet::CGreet::IssueGreeting()
{
	nsHello::CHello::Inst().SayHello();
}
