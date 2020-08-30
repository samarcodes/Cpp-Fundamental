#include<fstream>
#include<iostream>

using namespace std;

int main() {
	//object of ostream class
	//ofstream fout;
	//file will get inked to output stream represented by fout
	//fout.open("myfile.dat");

	//fout << "hello Samar";

	ifstream fin;
	char ch;
	fin.open("myfile.dat");
	fin.get(ch);
	while (!fin.eof()) {
		cout << ch;
		fin.get(ch);
	}
	cout << endl;
	fin.close();
	return 0;
}