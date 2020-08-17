//(this) is a keyword
//this is a local object pointer
//every instance member function contains this pointer
//contains the address of caller object
//cannot be modified
//it is used to refer caller object in member function

#include<iostream>

using namespace std;

class Box
{
	int l, b, h;
public:
	Box(): l(0), b(0), h(0) {}
	void set_data(int l, int b, int h) {
		//to prevent name conflicts
		this->l = l;
		this->b = b;
		this->h = h;
	}
};

int main() {

	return 0;
}