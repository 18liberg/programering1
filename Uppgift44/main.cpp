#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int kasta[5];
	
	for(int i = 0; i < 5; i++) {
		kasta[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << kasta[i];
		cout << endl;
	}
	return 0;
}
