#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	string huvudperson, fara, djur, hus, attack, polare, sport, stad, buss, laskigt;
	
	cout << "1. Vad heter huvudpersonen i denna berättelse" << endl;
	cin >> huvudperson;
	cout << "2. Skriv in ett föremål som huvudpersonen ska skyddas sig med." << endl;
	cin >> fara;
	cout << "3. Skriv in ett farligt djur som ska attakera huvudpersonen"<< endl;
	cin >> djur;
	cout << "4. Skriv in var personen ska sova någonstans"<< endl;
	cin >> hus;
	cout << "5. Vad kommer att hända med djuret som attakerar männsikan"<< endl;
	cin >> attack;
	cout << "6. Vad heter huvudpersonens bästa kommpis?"<< endl;
	cin >> polare;
	cout << "7. Vilken sport tycker de två vännerna bäst om?" << endl;
	cin >> sport;
	cout << "8. Vilken stad or de två kommpisarna i? "<< endl;
	cin >> stad;
	cout << "9. Vilken buss ska dem ta för att komma hem (nummer)? "<< endl;
	cin >> buss;
	cout << "10. vid vilken tid beräknades de två bästisara att komma hem? (xx:xx) "<< endl;
	cin >> laskigt;
	
	
	
	cout << huvudperson << " blev utvald att åka till det speciella lägret till Brazilien den här sommaren men blev det verkligen som han och alla andra hade änkt sig? " 
	<< huvudperson << " rakade komma bort sig mitt ute den farliga skogen. Han var tvungen att tillerka en " << fara << 
	" för att kunna försvara sig själv mot finder som en " << djur << ". Det var en lång dag för " << huvudperson <<
	" men inget gjorde honom gladre än ett övergivet " << hus << " dar han kunde lägga sig och vila. Dagen efter kom " 
	<< huvudperson << "s bästa vän " << polare << " som på nåot sett hade fått reda på att han hade kommit bort från grupen på lägret. När de två bästa kommpisarna var påväg mot bussstationen hem så gick det förbi en sportanläggning då "
	<< huvudperson << " genast frågade om de ville spela lite " << sport <<
	" dock tyckte " << polare << " att det var bättre att komma hem för att ett oväder var påväg. De skulle sätta sig på buss "
	<< buss << " för att komma hem till " << stad << ". Klockan var " << laskigt <<
	" vilket var två timmer tidigare än vad de egentligen skulle kommit hem.";


	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
