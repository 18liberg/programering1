#include <iostream>

using namespace std;

int main() {
	
	char hej[100];
	
	cout << "Skriv in ett ord" << endl;
	cin >> hej;
	
	for(int i = 0; i < 99; i++){
		if(hej[i] == 'm' or hej[i] == 'a' or hej[i] == 't' or hej[i] == 'M' or hej[i] == 'A' or hej[i] == 'T'){
			cout << "MAT" << endl;
			break;
		} else {
			hej[i] = hej[i];
		}
		
	}
	
	return 0;
}
