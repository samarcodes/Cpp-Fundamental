#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin;
	fin.open("myfile.dat");
	//reading
	char ch;
	cout << fin.tellg() << endl; //0 coz no character is read till now
	fin.get(ch);
	cout << fin.tellg() << endl; //1 coz one character is read
	while (fin) {
		cout << ch;
		fin.get(ch);
	}
	cout << endl;
	cout << fin.tellg() << endl; //-1 as all character are read

	fin.close();

	return 0;
}