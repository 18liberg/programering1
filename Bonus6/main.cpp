#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int x, z;

cout << "Skriv in ett nummer mellan 1 - 10" << endl;
cin >> x;



for(int a = 1; a <=6; a++){
z=0;
x++;		
	



for(int i = 1; i < 12; i++ ) {
	
	if(i > x or i < x) {
		cout << "*";
	}
	
	else 
	{
		cout << "_" ;
	}
	
if(x > 12){
	x = x - 10;
}
}

cout << endl;

}



	return 0;
}































