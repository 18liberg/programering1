#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Randomiser(int Hogsta, int Minsta) {
	int resultat;
	srand(time(NULL));
	
	while(resultat > Hogsta or resultat < Minsta) {
	resultat = (rand() % Hogsta) + Minsta;
	}
	return resultat;
}

int main(int argc, char** argv) {
	int Hogsta, Minsta;
	
	cout << "Minsta nummeret som ska anv�ndas: ";
	cin >> Minsta;
	cout << "H�sta nummeret som ska anv�ndas: ";
	cin >> Hogsta;
	
	cout << Randomiser(Hogsta, Minsta);
	
	return 0;
}
