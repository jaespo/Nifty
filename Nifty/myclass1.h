#ifndef __myclass1_h__
#define __myclass1_h__

#include "nifty.h"

namespace myNameSpace1
{
	class CMyClass1
	{
	public:
		void SayHello();
	};

	NIFTY_DCL( CMyClass1, gMyGlobal1 )
}
#endif
