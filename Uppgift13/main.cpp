#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int x, y, z;
	
	
	while(x > 20 or x < 10) {	
	cout << "Skriv in ett heltal mellan 10 och 20: ";
	cin >> x;
	}	
	
	cout << "Skriv in ett heltal vilket menas med hur lång ner talet ska gå: ";
	cin >> y;
	
	cout << "Hur stort steg ska det vara efter varje tal: ";
	cin >> z;
	
	while(x > y) {

	cout << x << endl;	
	
	x = x-z;
		
	
	}
	

	
	
	return 0;
}
