#include <iostream>
#include <string>

using namespace std;

struct Boll {
	
	int radie; 
	int vikt;
	string farg;
	
};

Boll multiplicerare(Boll anv) {
	int radie = anv.radie, vikt = anv.vikt;
	
	radie = radie * 8;
	vikt = vikt * 2;
	
	Boll kopia = { radie, vikt, anv.farg };
	
	return kopia;
}


int main(int argc, char** argv) {
	
	int user_radie, user_vikt;
	string user_farg;
	
	cout << "Skriv in Radie, Vikt, Farg, tryck in ett enter mellan Radie, Vikt och Färg, OBS inga andra tecken än det du ska skriva!" << endl;
	cin >> user_radie >> user_vikt >> user_farg;
	
	Boll anv = { user_radie, user_vikt, user_farg };
	
	Boll kopia = multiplicerare(anv);
	
	cout << kopia.radie << endl << kopia.vikt << endl << kopia.farg;
	
	return 0;
}


