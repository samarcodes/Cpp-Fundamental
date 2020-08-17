#include<iostream>

using namespace std;

class Shape
{
private:
	int count;
protected:
	int height;
	int width;
public:
	void set_width(int w) {
		width = w;
	}
	void set_height(int h) {
		height = h;
	}
};

class Rectangle: public Shape
{
public:
	int getArea() {
		return height * width;
	}

};

int main() {
	Rectangle r;
	r.set_width(10);
	r.set_height(20);
	cout << r.getArea() << endl;
	return 0;
}