#ifndef __foo_h__
#define __foo_h__

namespace fooNameSpace
{
	class CFoo
	{
	public:
		CFoo();
		~CFoo();
		void Greet();
	};

	extern CFoo		gFoo;
}

#endif
