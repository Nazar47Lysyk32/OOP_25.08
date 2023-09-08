
#include <iostream>
#include "Book.h"

	using namespace std;

	int main()
	{
		Book book1("The art of programming", 1968);
		Book book2("Kobzar", 1840);

		cout << "Book 1: \n";
		cout << book1 << endl;


		cout << "\nBook 2: \n";
		cout << book2 << endl;


		if (book1.Getname_avtor() == book2.Getname_avtor()
			&& book1.Getyear_book() == book2.Getyear_book())
		{
			cout << "\nBooks are the same." << endl;
		}
		else { cout << "\nBooks are not the same.\n"; };
	}


