#include <iostream>

using namespace std;
int main() {
	
	float tal1, tal2, tal3, summa;
	
	cout << "Nuvarande m�tarst�llning:" << endl;
	cin >> tal1;
	cout << "Antal liter bensin" << endl;
	cin >> tal2;
	
	summa = tal2 / tal1;
	
	cout << "F�rbrukning per mil i genomsnitt" << summa;
	
	
	return 0; }

