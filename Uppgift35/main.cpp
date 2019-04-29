#include <iostream>

using namespace std;

int AddFunction(int tal, int annattal) {
	
	tal = tal + annattal;
	
	return tal;
}


int main(int argc, char** argv) {
	int tal, tal1, summan;
	
	cout << "Skriv in ett valfritt tal!" << endl;
	cin >> tal;
	cout << "Skriv in ett valfritt tal!" << endl;
	cin >> tal1;
	
	summan = AddFunction(tal, tal1);
	
	cout << summan;
	
	return 0;
}
