#include <iostream>

using namespace std;
int main() {
	
	float tal1, tal2, tal3, summa;
	
	cout << "Nuvarande mätarställning:" << endl;
	cin >> tal1;
	cout << "Antal liter bensin" << endl;
	cin >> tal2;
	
	summa = tal2 / tal1;
	
	cout << "Förbrukning per mil i genomsnitt" << summa;
	
	
	return 0; }

