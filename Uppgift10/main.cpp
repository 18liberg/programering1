#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int timmar, summainnanextra, extratimmar, summaefterextra;

cout << "Antal timmar du har arbetat under den senaste månaden: " << endl;

cin >> timmar;

if(timmar < 161) {
 summainnanextra = timmar * 100;


cout << "Det här har du tjänat den seanste månaden" << endl;
cout << summainnanextra;
}


if(timmar > 160 and timmar < 241 ) {
	cout << "Antal extra timmar: " << endl;
	cin >> extratimmar;
	
	  summaefterextra = 160 * 100 + extratimmar * 150;
	
	cout << "Så här mycket har du tjänat senastemånaden" << endl;
	cout << summaefterextra;
}



	return 0;
}
