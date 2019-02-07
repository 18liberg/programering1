#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


	float x, y, z;
	
	cout << "Skriv in valfritt nummer" << endl;
	
	cin >> x;
	
	cout << "Skiv in valfritt nummer igen" << endl;
	
	cin >> y;
	
	z = x - y;
	
	if(x == y) {
		cout << "Grattis!";
	}
	
	else
		
	if(z >= -10 and z <= 10) {
		
		cout << "Close but no cigar!";
		
		}
		
		
		else {
			
			cout << "Not even close!";
		}
	
	
	
	
	
	
	
	
	
	




	return 0;
}
