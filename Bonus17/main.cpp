#include <iostream>
#include <math.h>
using namespace std;

katetfunktion(int hypo,int katet) {
	float ans;
	ans = sqrt( (hypo * hypo) - (katet * katet) );
return ans;
}

hypofunktion(int katet1, int katet2) {
	float ans;
	ans = sqrt( (katet1 * katet1) + (katet2 * katet2) );
	return ans;
}

int main(int argc, char** argv) {
	string svar;
	float ans;
	int hypotenusa, katet1, katet2;
	cout << "Vill du räkna med Katetern eller Hypotenusan? Svara Kateter eller Hypotenusa :" <<endl;
	cin >> svar;

	if (svar == "Kateter") {
			cout << "Skriv nu in vad hypotenusans langd ar : " <<endl;
	cin >> hypotenusa;
	cout << "Skriv nu in vad den kanda katetens langd ar: " <<endl;
	cin >> katet1;
	ans = katetfunktion(hypotenusa, katet1);
	cout <<"Katetens langd ar: "<<ans;

}

else {
	cout << "Skriv nu in längden för katet 1: " <<endl;
	cin >> katet1;
	cout << "Skriv nu in längden för katet 2" <<endl;
	cin >> katet2;
	ans = hypofunktion(katet1, katet2);
	cout <<"Hypotenusans langd ar: " << ans;
}


	return 0;
}
