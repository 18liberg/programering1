#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {


int husnum[10];

for(int y = 0; y < 10; y++ ) 
{
	cout << "Skriv husnummer: ";
	cin >> husnum[y];
}

for(int x = 0; x < 10; x++)
{
	cout << husnum[x] << endl;
}


	return 0;
}
