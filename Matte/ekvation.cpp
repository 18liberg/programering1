#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int a, b, c, p, q, x1, x2, check;
	
	cout << "Skriv in en variabel f�r A: ";
	cin >> a;
	cout << "Skriv in en variabel f�r B: ";
	cin >> b;
	cout << "Skriv in en variabel f�r C: ";
	cin >> c;
	
	p=b/a;
	q=c/a;
	
	
	x1 = -(p/2) + sqrt((p/2) * (p/2) - q);
	x2 = -(p/2) - sqrt((p/2) * (p/2) - q);
	
	check = (p/2) * (p/2) - q;

	if(check > 0)
	{
		cout << "2 reella l�sningar";
	}
	else if (check == 0)
	{
		cout << "1 reell l�sning";
	}
	else if (check < 0)
	{
		cout << "Ingen reell l�sning";
	}
	
	










	return 0;
}
