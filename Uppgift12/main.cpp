#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

	int x, y;
	
	cout << "Skriv in din pinkod, du har tre f�rs�k" << endl;
	
	cin >> x;

	
	y = 9999;
	
	if(x == y) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	}
	
	else
	
	cin >> x;
	
		if(x == y) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	}
	
	cin >> x;
	
	
		if(x == y) {
		cout << "Grattis du kan nu ta ut dina pengar";
		return 0;
	
	}
	
	else
	
	cout << "Ditt kort �r nu sp�rrat";

	return 0;
}


