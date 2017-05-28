#ifndef __Greet_h__
#define __Greet_h__
#include "nifty.h"
namespace nsGreet
{
	class CGreet
	{
	public:
		void Greet();
	};
	NIFTY_DCL( CGreet, gGreet )
}
#endif
