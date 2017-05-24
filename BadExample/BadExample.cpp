#include "foo.h"
#include "bar.h"

int main()
{
	barNameSpace::gBar.SayHello();
	fooNameSpace::gFoo.Greet();
	return 0;
}

