#include <iostream>

using namespace std;

int nummerminiraknare(int summa) {
	if(summa != 0) {
		summa = summa + nummerminiraknare(summa-1);
	}
	
	return summa;
}

int main(int argc, char** argv) {
	int anvnum;
	
	cout << "Sätt in ett nummer. OBS endast ett nummer, inget annat tecken!" <<endl;
	cin >> anvnum;
	
	cout << nummerminiraknare(anvnum);
	
	return 0;
}
