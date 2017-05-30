#ifndef __Greet_h__
#define __Greet_h__

#include "../Nifty/nifty.h"
#include "Hello.h"

namespace nsGreet
{
	class CGreet
	{
	public:
		void Greet();
	private:
		NIFTY_STATIC_DCL(CGreet, nsHello::CHello, mgHello)
	};
	NIFTY_STATIC_IMPL( )
}

#endif

