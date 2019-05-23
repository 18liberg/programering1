#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int kasta[5], nummer;
	string val, om;
	
	for(int i = 0; i < 5; i++) {
		kasta[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << kasta[i];
		cout << endl;
	}
	
	while(val != "Ja" and val != "Nej") {
		cout << "Vill du kasta om en tarning?" << endl;
		cout << "Ja eller Nej, sedan Enter! " << endl;
		cin >> val;
	}
	
	if(val == "Ja") {
		cout << "Vilken tarning vill du kasta om? OBS SVARA ENDAST NUMMER! 1,2,3,4 eller 5, sedan Enter!";
		cin >> om;
		
		for(int i = 0; i < 5; i++) {
			if(om[i] == '1') {
				kasta[0] = rand() % 6 + 1;
			}
			if(om[i] == '2') {
				kasta[1] = rand() % 6 + 1;
			}
			if(om[i] == '3') {
				kasta[2] = rand() % 6 + 1;
			}
			if(om[i] == '4') {
				kasta[3] = rand() % 6 + 1;
			}
			if(om[i] == '5') {
				kasta[4] = rand() % 6 + 1;
			}
		}
		
		
		for(int i = 0; i < 5; i++) {
			cout << kasta[i];
			cout << endl;
		}
	}
	
	return 0;
}
