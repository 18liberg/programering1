#include <iostream>

using namespace std;

struct position{
	int x;
	int y;
};
position kord(position pos){
	
	cout << "Skriv in vardet for X! (Obs borde endast vara mellan 0 och 10)" << endl;
	cin >> pos.x;
	cout << "Skriv in vardet for Y! (Obs borde endast vara mellan 0 och 10)" << endl;
	cin >> pos.y;

	return pos;	
}

int plan(char boll, position pos){
	
	system("cls");
	
	cout << "---------------------------------------------";
	
	for(int n = 0; n < pos.y; n++){
		cout << endl;
	}
	
	for(int i = 0; i < pos.x; i++){
		
		cout << " ";
	}	
	cout << boll << endl;	
		cout << "---------------------------------------------" << endl << endl;
}

int main() {
	
	char svar = 'A';
	char boll;
	position pos;
	
	while(svar == 'A'){
		boll = 'O';
		
	system("cls");

pos = kord(pos);

svar = plan(boll, pos);

cout << "Om du vill kora igen skriver du A annars skriver du exakt vad du vill för att programmet ska avsluta!" << endl;
	cin >> svar;

}
	
	return 0;
}
