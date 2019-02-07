#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float x, y, z;
	
	cout << "Skriv in ett heltal" << endl;
	
	cin >> x;
	
	while(x > 0) {
		
		x--;
				
		cout << x << endl;
		
	}
	
	return 0;
}
