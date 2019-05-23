#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int slump, anv, ai = 0;
	char om = 'Y';
	
	srand(time(0));
	
	while(om == 'Y') {
	
	
	int ai_mem_max = 100, ai_mem_min = 1;
		
	
	while(slump > 100 or slump < 1) {
		slump = (rand() % 100) + 1;
	}
	
	

	for(int i = 0; i < 5 and anv != slump and ai != slump; i++) {
		

		cout << "Guess a number inbetween 1-100: ";
		cin >> anv;
		
	
		if(anv == slump) {
			cout << "Correct! You win!";
		} else if(anv < slump) {
			cout << "The hidden number is greater than " << anv << endl;
			if(ai_mem_min < anv) {
				ai_mem_min = anv;
			}
		} else if(anv > slump) {
			cout << "The hidden number is less than " << anv << endl;
			if(ai_mem_max > anv) {
				ai_mem_max = anv;
			}	
		}
		
		while(ai < ai_mem_min and ai != anv or ai > ai_mem_max and ai != anv) {
			ai = rand() % (ai_mem_max -1) + (ai_mem_min +1);
		}
		
		
		if(anv == slump) {
		
		} else if(ai == slump) {
			cout << "AI wins! The number was: " << slump;
			i = 5;
		} else if(ai < slump) {
			cout << "AI guessed " << ai << " the hidden number is greater" << endl;
			ai_mem_min = ai;
		} else if(ai > slump) {
			cout << "AI guessed " << ai << " the hidden number is lesser" << endl;
			ai_mem_max = ai;
		}
		ai = 0;
	}
	
	om = 'd';
	while(om != 'Y' and om != 'N') {
		cout << endl << "Do you want to play again? Y/N: ";
		cin >> om;
	}
	}
	
	return 0;
}
