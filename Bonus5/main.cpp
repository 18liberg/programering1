#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int x;
	int y;
	int vaxel = 0; 
	int tusenkr = 0;
	int hundrakr = 0; 
	int femtiokr = 0; 
	int tiokr = 0; 
	int enkr = 0;


	
	cout << "Skriv in hur mycket priset för alla produkter (max 10 000 kr)" << endl;
	cin >> x;
	
	while( x < 1 or x > 10000)
	{
		cout << "Skriv in priset mellan 1 - 10000 kr" << endl;
		cin >> x;	

	}
	
	cout << "Skriv in hur mycket du betalar" << endl;
	cin >> y;
	
	while(y < x) {
		cout << "Pengarna du betalar med måste var mer än sjalva priset" << endl;
		cin >> y; 
		}
	
	vaxel = y - x;
	
	
	while(vaxel > 999) {
		vaxel = vaxel - 1000;
		tusenkr = tusenkr + 1;
	}
	
	while(vaxel > 99) {
		vaxel = vaxel - 100;
		hundrakr = hundrakr + 1;
	}
	
	while(vaxel > 49) {
		vaxel = vaxel - 50;
		femtiokr = femtiokr + 1;
	}
	
	while(vaxel > 9) {
		vaxel = vaxel - 10;
		tiokr = tiokr + 1;
	}
	
	while(vaxel > 0) {
		vaxel = vaxel - 1;
		enkr = enkr + 1;
	}
	
	cout << "Tusenlappar: " << tusenkr << endl;
	cout << "Hundrakr: " << hundrakr << endl;
	cout << "Femtiolappar: " << femtiokr << endl;
	cout << "Tiokr: " << tiokr << endl;
	cout << "Enkr: " << enkr << endl;
	
	return 0;
}
