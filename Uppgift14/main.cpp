#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int x, y, z;
	
	cout << "Skriv in något av de 12 första posetiva heltalen" << endl;
	cin >> x;
	
	while( x < 0 or x > 12){
		cout << "Skriv in något av de 12 första posetiva heltalen" << endl;
	cin >> x;
	}
	
	y = 0;
	
	while(y <= 12) {
		
	z = x * y;
	
	cout << x << "*"<< y << "=" << z << endl; 
		
	y = y + 1;
		
	}	



	
	
	
	return 0;
}
