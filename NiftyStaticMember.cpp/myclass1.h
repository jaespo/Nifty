#ifndef __myclass1_h__
#define __myclass1_h__

#include "../Nifty/nifty.h"

namespace myNameSpace1
{
	class CMyClass1
	{
	public:
		void SayHello();
		static CMyClass1& Inst() { return mgInst; }
	private:
		NIFTY_STATIC_DCL(CMyClass1, mgInst)
	};

}
#endif
