#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int x, y, z;


	
	cout << "Skriv in hur mycket priset för alla produkter (max 10 000 kr): " ;
	cin >> x;
	
	while( x < 0 or x > 10001)
	{
		cout << "Skriv in priset mellan 1 - 10000 kr" << endl;
		cin >> x;	
	}
	
	
	
	return 0;
}
