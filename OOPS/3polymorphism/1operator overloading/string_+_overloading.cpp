#include<iostream>
#include<cstring>

using namespace std;

class String
{
private:
	char name[100];
	int size;

public:
	String() {}

	String operator+(String &s) {
		String temp;
		temp.size = size + s.size;

		int i, j;
		for (i = 0; i < size; i++) {
			temp.name[i] = name[i];
		}

		for (j = 0; i < temp.size; i++, j++) {
			temp.name[i] = s.name[j];
		}
		temp.name[i] = '\0';

		return temp;
	}

	void get_data() {
		cout << "Enter Name : ";
		cin.getline(name, 100);
		size = strlen(name);
	}
	void show() {
		for (int i = 0; i < size; i++) {
			cout << name[i];
		}
		cout << endl;
		cout << size << endl;
	}
};

int main() {
	String s1;
	String s2;
	s1.get_data();
	s2.get_data();

	String s3 = s1 + s2;
	s3.show();

	return 0;
}