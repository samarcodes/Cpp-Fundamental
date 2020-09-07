#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream fout;
	fout.open("myfile.dat");
	cout << fout.tellp() << endl; //0 coz no character is written
	//writing
	fout << "Hello Samar";
	cout << fout.tellp() << endl; // 11 as 11 characters are written
	fout.seekp(-2, ios_base::end);
	cout << fout.tellp() << endl; //9 coz from 11 it will come 2 steps back
	//closing the file
	fout.close();

	return 0;
}