#include <iostream>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

int main(int argc, char** argv) {
int tid = time(0);
int tal1, tal2,x;
srand(tid);

cout << "Ange numret som slumpen ska börja :" <<endl;
cin >> tal1;
cout << "Ange talet där slumpen ska sluta: " <<endl;
cin >> tal2;
tal2 = tal2 - tal1;
int slump = rand()% tal2 + tal1;

cout << slump << endl;

cout << "Vill du köra igen tryck 1: ";
cin >> x;
if(x = 1){
cout << "Ange numret som slumpen ska börja :" <<endl;
cin >> tal1;
cout << "Ange talet där slumpen ska sluta: " <<endl;
cin >> tal2;
tal2 = tal2 - tal1;
int slump = rand()% tal2 + tal1;

cout << slump;
}
	return 0;
}
