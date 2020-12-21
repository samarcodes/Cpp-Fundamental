#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h> //remove and rename
#include<conio.h>

using namespace std;

class Book
{
	int bookid;
	char title[20];
	float price;
public:
	Book(): bookid(0), title("no title"), price(0) {}

	void getBookData() {
		cout << "Enter bookid : ";
		cin >> bookid;
		cin.ignore();
		cout << "Enter title : ";
		cin.getline(title, 19);
		cout << "Enter price : ";
		cin >> price;
	}
	void showBookData() {
		cout << bookid << "\t\t" << title << "\t\t" << price << endl;
	}

	int storeBook();
	int viewAllBooks();
	void searchBook(char *);
	void deleteBook(char *);
	void updateBook(char *);
};

int Book::storeBook() {
	if (bookid == 0 && price == 0) {
		cout << "Book not initialized" << endl;
		return 0;
	}
	ofstream fout;
	fout.open("Book_Data.dat", ios::out | ios::binary | ios::app);
	fout.write((char*)this, sizeof(*this));
	cout << "Record inserted successfully" << endl;
	fout.close();
	return 1;
}

int Book::viewAllBooks() {
	ifstream fin;
	fin.open("Book_Data.dat", ios::in | ios::binary);
	if (!fin.is_open()) {
		cout << "File not Found!!!" << endl;
		return 0;
	}

	fin.read((char*)this, sizeof(*this));
	//if file is empty
	if (fin.eof()) {
		cout << "No Records Found!!!" << endl;
		return 1;
	}

	while (!fin.eof()) {
		showBookData();
		fin.read((char*)this, sizeof(*this));
	}

	fin.close();
	return 1;
}

void Book::searchBook(char* t) {
	ifstream fin;
	fin.open("Book_Data.dat", ios::in | ios::binary);
	if (!fin.is_open()) {
		cout << "File not Found!!!" << endl;
	}
	else {
		bool BookFound = false;
		fin.read((char*)this, sizeof(*this));
		while (!fin.eof()) {
			if (!strcmp(title, t)) {
				showBookData();
				BookFound = true;
			}
			fin.read((char*)this, sizeof(*this));
		}
		if (!BookFound) {
			cout << "Book not Found!!!" << endl;
		}

		fin.close();
	}
}

void Book::deleteBook(char *t) {
	ifstream fin;
	ofstream fout;

	fin.open("Book_Data.dat", ios::in | ios::binary);
	if (!fin.is_open()) {
		cout << "File not Found!!!" << endl;
	}
	else {
		fout.open("temp.dat", ios::out | ios::binary);
		fin.read((char*)this, sizeof(*this));
		while (!fin.eof()) {
			if (strcmp(title, t)) {
				fout.write((char*)this, sizeof(*this));
			}
			fin.read((char*)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("Book_Data.dat");
		rename("temp.dat", "Book_Data.dat");
	}
}

void Book::updateBook(char *t) {
	fstream file;
	file.open("Book_Data.dat", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char*)this, sizeof(*this));
	bool BookFound = false;
	while (!file.eof()) {
		if (!strcmp(title, t)) {
			BookFound = true;
			getBookData();
			file.seekp(file.tellp() - (streampos)sizeof(*this));
			file.write((char*)this, sizeof(*this));
		}
		file.read((char*)this, sizeof(*this));
	}
	if (BookFound == false) {
		cout << "Record not Found!!!" << endl;
	}
	file.close();
}

int menu() {
	char choice;
	cout << "Book Management" << endl;
	cout << "1. Insert Book" << endl;
	cout << "2. View All Books" << endl;
	cout << "3. Search Book" << endl;
	cout << "4. Delete Book" << endl;
	cout << "5. Update Book" << endl;
	cout << "6. Exit" << endl;
	cout << "\nEnter your choice : ";
	cin >> choice;
	cout << "\n";
	return choice;
}

int main() {
	Book b1;
	char title[20];
	while (1) {
		system("cls");
		switch (menu()) {
		case '1':
			b1.getBookData();
			b1.storeBook();
			break;
		case '2':
			cout << "Book ID" << "\t\t" << "TITLE" << "\t\t" << "PRICE" << endl;
			b1.viewAllBooks();
			break;
		case '3':
			cout << "Enter Book Title to Search : ";
			cin.ignore();
			cin.getline(title, 19);
			cout << "\n";
			cout << "Book ID" << "\t\t" << "TITLE" << "\t\t" << "PRICE" << endl;
			b1.searchBook(title);
			break;
		case '4':
			cout << "Enter Book Title to Delete : ";
			cin.ignore();
			cin.getline(title, 19);
			b1.deleteBook(title);
			break;
		case '5':
			cout << "Enter Book Title to Update : ";
			cin.ignore();
			cin.getline(title, 19);
			b1.updateBook(title);
			break;
		case '6':
			exit(0);
		default:
			cout << "Invalid Choice!!!" << endl;
			break;
		}
		getch();
	}

	return 0;
}