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
	int getCount() {
		cout << count << endl;
	}
};

class Rectangle: public Shape
{
public:
	void set_data(int h, int w) {
		height = h;
		width = w;
	}
	int RectArea() {
		return width * height;
	}
};
class Circle: public Shape
{
private:
	int radius;
public:
	void set_radius(int r) {
		radius = r;
	}
	float CircleArea() {
		return 22 * radius * radius / (float)7;
	}
};

int main() {
	Rectangle r;
	Circle c;

	r.set_data(10, 20);
	c.set_radius(5);
	cout << r.RectArea() << endl;
	cout << c.CircleArea() << endl;

	return 0;
}