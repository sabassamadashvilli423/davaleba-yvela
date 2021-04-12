#pragma once
#include<iostream>
#include<string>
using namespace std;
class book
{
public:
	int grade,price;
	string name, author;
	book();
	book(string name, string author, int grade, int price);
	void printBook();
};

