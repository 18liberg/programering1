#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int timmar, summainnanextra, extratimmar, summaefterextra;

cout << "Antal timmar du har arbetat under den senaste m�naden: " << endl;

cin >> timmar;

if(timmar < 161) {
 summainnanextra = timmar * 100;


cout << "Det h�r har du tj�nat den seanste m�naden" << endl;
cout << summainnanextra;
}


if(timmar > 160 and timmar < 241 ) {
	cout << "Antal extra timmar: " << endl;
	cin >> extratimmar;
	
	  summaefterextra = 160 * 100 + extratimmar * 150;
	
	cout << "S� h�r mycket har du tj�nat senastem�naden" << endl;
	cout << summaefterextra;
}



	return 0;
}
