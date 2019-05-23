#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int slump, anv,x;
	srand(time(0));
	
	
	
	while(slump > 100 or slump < 1) {
	slump = (rand() % 100) + 1;
	}
	
	
	
	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa numret mellan 1 - 100: ";
		cin >> anv;
		
		if(anv == slump) {
			cout << "Grattis, det var rätt nummer, du vinner!";
			return 0;
		} else if(anv < slump) {
			cout << "De gömde talet är större än " << anv << endl;
		} else if(anv > slump) {
			cout << "De gömde talet är mindre än " << anv << endl;
		}
	}
	
	cout << "Du gissade inte rätt nummer!" << endl;
	
	cout << "Vill du börja om? Isf skriv 1: ";
	cin >> x;
	
	if(x = 1)
{
		while(slump > 100 or slump < 1) {
	slump = (rand() % 100) + 1;
	}
	
	
	
	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa numret mellan 1 - 100: ";
		cin >> anv;
		
		if(anv == slump) {
			cout << "Grattis, det var rätt nummer, du vinner!";
			return 0;
		} else if(anv < slump) {
			cout << "De gömde talet är större än " << anv << endl;
		} else if(anv > slump) {
			cout << "De gömde talet är mindre än " << anv << endl;
		}
	}
	
	cout << "Du gissade inte rätt nummer!";
	
	cout << "Vill du börja om? Isf skriv 1: ";
	cin >> x;
}
	
	return 0;
}
