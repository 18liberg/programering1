#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	string x;
	
cout << "Skriv in det namn, f�rsta bokstaven i ditt namn kommer att bytas ut till ett z" << endl;
cin >> x;

x[0] =  'Z';

cout << x;



	return 0;
}
