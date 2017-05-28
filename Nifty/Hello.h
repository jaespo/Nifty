#ifndef __Hello_h__
#define __Hello_h__
#include "nifty.h"
namespace nsHello
{
	class CHello
	{
	public:
		CHello(const char* pzMsg);
		void SayHello();
	private:
		const char* 	mpzMsg;
	};
	NIFTY_DCL( CHello, gHello )
}
#endif
