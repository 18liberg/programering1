#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	string huvudperson, fara, djur, hus, attack, polare, sport, stad, buss, laskigt;
	
	cout << "1. Vad heter huvudpersonen i denna ber�ttelse" << endl;
	cin >> huvudperson;
	cout << "2. Skriv in ett f�rem�l som huvudpersonen ska skyddas sig med." << endl;
	cin >> fara;
	cout << "3. Skriv in ett farligt djur som ska attakera huvudpersonen"<< endl;
	cin >> djur;
	cout << "4. Skriv in var personen ska sova n�gonstans"<< endl;
	cin >> hus;
	cout << "5. Vad kommer att h�nda med djuret som attakerar m�nnsikan"<< endl;
	cin >> attack;
	cout << "6. Vad heter huvudpersonens b�sta kommpis?"<< endl;
	cin >> polare;
	cout << "7. Vilken sport tycker de tv� v�nnerna b�st om?" << endl;
	cin >> sport;
	cout << "8. Vilken stad or de tv� kommpisarna i? "<< endl;
	cin >> stad;
	cout << "9. Vilken buss ska dem ta f�r att komma hem (nummer)? "<< endl;
	cin >> buss;
	cout << "10. vid vilken tid ber�knades de tv� b�stisara att komma hem? (xx:xx) "<< endl;
	cin >> laskigt;
	
	
	
	cout << huvudperson << " blev utvald att �ka till det speciella l�gret till Brazilien den h�r sommaren men blev det verkligen som han och alla andra hade �nkt sig? " 
	<< huvudperson << " rakade komma bort sig mitt ute den farliga skogen. Han var tvungen att tillerka en " << fara << 
	" f�r att kunna f�rsvara sig sj�lv mot finder som en " << djur << ". Det var en l�ng dag f�r " << huvudperson <<
	" men inget gjorde honom gladre �n ett �vergivet " << hus << " dar han kunde l�gga sig och vila. Dagen efter kom " 
	<< huvudperson << "s b�sta v�n " << polare << " som p� n�ot sett hade f�tt reda p� att han hade kommit bort fr�n grupen p� l�gret. N�r de tv� b�sta kommpisarna var p�v�g mot bussstationen hem s� gick det f�rbi en sportanl�ggning d� "
	<< huvudperson << " genast fr�gade om de ville spela lite " << sport <<
	" dock tyckte " << polare << " att det var b�ttre att komma hem f�r att ett ov�der var p�v�g. De skulle s�tta sig p� buss "
	<< buss << " f�r att komma hem till " << stad << ". Klockan var " << laskigt <<
	" vilket var tv� timmer tidigare �n vad de egentligen skulle kommit hem.";


	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
