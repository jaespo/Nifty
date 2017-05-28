#ifndef __Greet_h__
#define __Greet_h__
#include "../Nifty/nifty.h"
#include "Hello.h"
namespace nsGreet
{
	class CGreet
	{
	public:
		void IssueGreeting();
		static CGreet& Inst() { return mgInst; }
	private:
		NIFTY_STATIC_DCL( CGreet, mgInst )
	};
}

#endif
