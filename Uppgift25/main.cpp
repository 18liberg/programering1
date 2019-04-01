#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {


int x[7];
int a;

for(int y = 0; y < 7; y++ ) 
{
	cout << "Skriv totalt 7 nummer: ";
	cin >> x[y];
}

for(int e = 0; e < 7; e++)
{
	a = a + x[e];
}

if( a > 50)
{
	cout << "Summan är över 50";
}
else 
{
	cout << "Summan är under 50";
}






	return 0;
}
