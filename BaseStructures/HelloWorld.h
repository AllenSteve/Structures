#include<iostream>
using namespace std;

class Hello
{
private:
	int id;
	string name;

public:
	Hello::Hello()
	{
		this->id = -1;
		this->name = "Hello World";
	}

	void Say();
	string Name();
};