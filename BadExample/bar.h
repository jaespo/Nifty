#ifndef __bar_h__
#define __bar_h__

namespace barNameSpace
{
	class CBar
	{
	public:
		CBar();
		~CBar();
		void SayHello();
	};

	extern CBar			gBar;
}
#endif
