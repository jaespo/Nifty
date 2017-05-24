#ifndef __myclass2_h__
#define __myclass2_h__

#include "../Nifty/nifty.h"
#include "myclass1.h"

namespace myNameSpace2
{
	class CMyClass2
	{
	public:
		void Greet();
		static CMyClass2& Inst() { return mgInst; }
	private:
		NIFTY_STATIC_DCL(CMyClass2, mgInst)
	};
}

#endif
