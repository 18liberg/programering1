#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int slump, anv, ai = 0;
	char om = 'Y';
	
	srand(time(0));
	
	while(om == 'Y') {
		
		
	
	while(slump > 100 or slump < 1) {
		slump = (rand() % 100) + 1;
	}
	
	
	
	for(int i = 0; i < 5 and anv != slump and ai != slump; i++) {
		
		cout << "Gissa numret mellan 1 - 100: ";
		cin >> anv;
		
		if(anv == slump) {
			cout << "Correct! You win!";
		} else if(anv < slump) {
			cout << "De g�mde numret �r st�rre  " << anv << endl;
		} else if(anv > slump) {
			cout << "de g�mde numret �r mindre " << anv << endl;
		}
		
	
		while(ai > 100 or ai < 1) {
			ai = rand() % 100 + 1;
		}
		
		if(anv == slump) {
		
		} else if(ai == slump) {
			cout << "AI vinner, de g�mda numret var: " << slump;
		} else if(ai < anv) {
			cout << "AI gissade " << ai << ", de g�mde numret �r st�rre" << endl;
		} else if(ai > slump) {
			cout << "AI gissade " << ai << ", de g�mde numret �r mindre" << endl;
		}
		ai = 0;
	}
	
	
	
	cout << "Vill du spela igen? Isf tryck 1: ";
	cin >> om;
	}
	
	return 0;
}
