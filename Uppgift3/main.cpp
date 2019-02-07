#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	using namespace std;
	int main() {

	float tal1, tal2, pris1, pris2, summa;
	
	cout << "Hur manga kilogram vager produkt1:" ;
	cin >> tal1;

	cout << "Hur manga kilo vager produkt2:" ;
	cin >> tal2;
	
	cout << "Kilopris produkt 1:" ;
	cin >>pris1;
	
	cout << "Kilopris produkt 2:" ;
	cin >> pris2; 
	
	summa = tal1 * pris1 * 1.12 + tal2 * pris2 * 1.12;
	
	cout << "Toal belopp i kr:" <<summa;
	
	




	return 0;
}
