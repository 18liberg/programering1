#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main() {
	
	int x, y, answer;
	
	cout << "Det här programmet kommer att hjälpa dig välja din bilfärsökring" << endl;
	
	cout << "Ange nuvarande år: ";
	cin >> x;
	
	cout << "Ange året som bilen bygdes";
	cin >> y;
	
	answer = x - y;
	
	if(answer < 6) {
		cout << "Vi rekomenderar att du skaffar en helförsäkring";
		
	}
	
	
	if(answer > 5 ) {
		cout << "Vi rekomenderar att du skaffar en halvförsäkring";
	}
	
	
	
	return 0;
}
