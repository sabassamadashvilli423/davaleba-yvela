#include "book.h"
#include<string>
#include<iostream>
using namespace std;
book::book() {
	/*name = "math";
	cout << endl;
	author = "wilosani";
	cout << endl;
	price = 15;
	cout << endl;
	grade = 9;
	cout << endl;*/
}
/*book::book(string name, string author, int grade, int price) {
	this->name = name;
	this->author = author;
	this->grade = grade;
	this->price = price;
}*/
void book::printBook() {
	cout << name << " " << grade << " " << price << " " << author << endl;
}

