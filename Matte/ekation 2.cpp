#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int a, b, c, p, q, xsym;
	
	cout << "Skriv in en variabel för A: ";
	cin >> a;
	cout << "Skriv in en variabel för B: ";
	cin >> b;
	cout << "Skriv in en variabel för C: ";
	cin >> c;
	
	p=b/a;
	q=c/a;
	
	cout << "Symetrilinjen är:" << - p/2;
	
	
	return 0;
}
