#include <iostream>


using namespace std;
int main() {
	
	int tal1, tal2, summa;
	
	cout << "Nuvarande mätarställning:" << endl;
	cin >> tal1;
	cout << "Mätarställning för ett år sedan" << endl;
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	cout << "Summan är " << summa;
	
	
	return 0;
}

