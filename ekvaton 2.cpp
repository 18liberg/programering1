#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int a, b, c, p, q, xsym, extrem, x1, x2;
	
	cout << "Skriv in en variabel för A: ";
	cin >> a;
	cout << "Skriv in en variabel för B: ";
	cin >> b;
	cout << "Skriv in en variabel för C: ";
	cin >> c;
	
	p=b/a;
	q=c/a;
	
	x1 = -(p/2) + sqrt((p/2) * (p/2) - q);
	x2 = -(p/2) - sqrt((p/2) * (p/2) - q);
	
	xsym = (x1+x2)/2;	
	
	cout << "Symetrilinjen är: " << (x1+x2)/2 << endl;
	
	
	extrem = a * xsym * xsym + b * xsym + c;
	cout << "Extrempunkten är: " << extrem << endl;  
	
	if( a > 0)
	{
		cout << "Det är en minimipunkt";
	} 	
	
	else
	{
		cout << "Det är en maximipunkt";
	}
	
	
	return 0;
}
