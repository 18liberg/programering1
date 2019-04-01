#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

char ord[189819];

cout << "Skriv in valfritt ord" << endl;
cin >> ord;

for(int i = 0; i < 189818; i++)
{
	if(ord[i] == 'Z')
	ord[i] = 'a';
}

cout << ord;

	return 0;
}
