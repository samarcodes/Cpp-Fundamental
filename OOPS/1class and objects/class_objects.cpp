//instance member (object level)
//class member    (class level)

#include<iostream>
#include<string>

using namespace std;

class Student
{

private:
	string name;          //instance member variable
	int age;
	int roll_no;
	static string school; //class member variable

public:
	void set_data(string n, int a, int r) {   //instance member function
		name = n;
		age = a;
		roll_no = r;
	}
	void show_data() {
		cout << name << endl;
		cout << age << endl;
		cout << roll_no << endl;
	}
	static void show_school() {              //class member function
		cout << school << endl;
	}
};
string Student:: school = "DAV Public School";

int main() {
	Student s1; //object of Student class
	s1.set_data("samar", 21, 108);
	s1.show_data();

	Student::show_school();

	return 0;
}