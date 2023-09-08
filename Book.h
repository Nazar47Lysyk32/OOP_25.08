#pragma once
#include <iostream>

using namespace std;

class Book
{
private:
	string name_avtor;
	int year_book;
public:
	
	Book();
	Book(string name_avtor, int year_book);
	
	void Setname_avtor(string name_book);
	void Setyear_book(int year_book);
	
	string Getname_avtor();
	int Getyear_book();
	
	friend bool operator==(Book& book1, Book& book2);
	friend bool operator!=(Book& book1, Book& book2);

	friend ostream& operator<<(ostream& out, Book& book);
	friend istream& operator>>(istream& in, Book& book);


};