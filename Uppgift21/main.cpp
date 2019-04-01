#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main() {
	
	bool increase = true;
	
	int tal = 0;
	
	while(tal < 7) {
		increase = true;
		cout << tal << endl;
		tal = tal + 1;
		if(tal == 7){
			
			increase = false;
			
		}
		
		while(increase == false){
			cout << tal << endl;
			tal = tal - 1;
		
		
		if(tal < 0) {
			
			return 0;
		}
		}
		}

		


}
