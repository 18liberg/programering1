#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main() {
	
	int x, y, answer;
	
	cout << "Det h�r programmet kommer att hj�lpa dig v�lja din bilf�rs�kring" << endl;
	
	cout << "Ange nuvarande �r: ";
	cin >> x;
	
	cout << "Ange �ret som bilen bygdes";
	cin >> y;
	
	answer = x - y;
	
	if(answer < 6) {
		cout << "Vi rekomenderar att du skaffar en helf�rs�kring";
		
	}
	
	
	if(answer > 5 ) {
		cout << "Vi rekomenderar att du skaffar en halvf�rs�kring";
	}
	
	
	
	return 0;
}
