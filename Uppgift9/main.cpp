#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int x, y, z;
	
	cout << "Skriv in tre stycken heltal" << endl;
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	if(x > y and x > z)
	cout << x;
	
	if(y > x and y > z)
	cout << y;
	
	if(z > x and z > y)
	cout << z;

	
	
	
	
	
	return 0;
}
