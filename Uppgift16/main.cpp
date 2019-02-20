#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int a, y, z;
	
	cout << "Skriv in ett heltal mellan 10 och 20: ";
	cin >> a;
	
	
	cout << "Skriv in ett heltal vilket menas med hur lång ner talet ska gå: ";
	cin >> y;
	
	cout << "Hur stort steg ska det vara efter varje tal: ";
	cin >> z;
	
	
	for(int x = a; a > y; a =  a - z )
	
	cout << a << endl;
	
	return 0;
}
