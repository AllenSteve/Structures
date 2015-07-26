#include<iostream>
#include <assert.h> 
#include "HelloWorld.h"

using namespace std;

int main()
{
	//arrange
	Hello hey = Hello();

	//action
	hey.Say();
	
	//assert
	assert(hey.Name().compare("Hello World")==0);

	system("pause");
	return 0;
}