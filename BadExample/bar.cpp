#include <iostream>
#include "bar.h"

barNameSpace::CBar			barNameSpace::gBar;

barNameSpace::CBar::CBar()
{
	std::cout << "CBar ctor" << std::endl;
}

barNameSpace::CBar::~CBar()
{
	std::cout << "CBar dtor" << std::endl;
}

void barNameSpace::CBar::SayHello()
{
	std::cout << "Hello World" << std::endl;
}

