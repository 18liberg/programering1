#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int kasta[5], nummer;
	string val;
	
	for(int i = 0; i < 5; i++) {
		kasta[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << kasta[i];
		cout << endl;
	}
	
	while(val != "Ja" and val != "Nej") {
		cout << "Vill du kasta om en tärning? Skriv Ja eller Nej!:  ";
		cin >> val;
	}
	
	if(val == "Ja") {
		while(nummer < 1 or nummer > 5) {
			cout << "Vilken tärning? (1,2,3,4 eller 5) ";
			cin >> nummer;
		}
		nummer--;
		kasta[nummer] = rand() % 6 + 1;
		
		for(int i = 0; i < 5; i++) {
			cout << kasta[i];
			cout << endl;
		}
	}
	
	return 0;
}
