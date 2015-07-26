#include "HelloWorld.h"

void Hello::Say()
{
	cout <<"Hello World!!!"<< endl;
}

string Hello::Name()
{
	return this->name;
}