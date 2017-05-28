#ifndef __Hello_h__
#define __Hello_h__
#include "../Nifty/nifty.h"
namespace nsHello
{
	class CHello
	{
	public:
		void SayHello();
		static CHello& Inst() { return mgInst; }
	private:
		NIFTY_STATIC_DCL(CHello, mgInst)
	};
}
#endif
