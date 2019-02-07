#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int tim1, min1, sek1, tim2, min2, sek2, timmar, minuter, sekunder;

cout << "Förts varvet timmar, minuter,sekunder";
cin >> tim1 >> min1 >> sek1;
cout << "Andra varvet timmar, minuter, sekunder";
cin >> tim2 >> min2 >> sek2;


	timmar = tim1 + tim2;
	minuter = min1 + min2;
	sekunder = sek1 + sek2;
	
	if(sekunder >= 60) {
		minuter = minuter + 1;
		sekunder = sekunder - 60;
	}
	
	if(minuter >= 60) {
		timmar = timmar + 1;
		minuter = minuter - 60;
	}

cout << "Din totala tid är: " << timmar << "Timmar" << minuter << "Minuter" << sekunder << "Sekunder"; 


	return 0;
}
