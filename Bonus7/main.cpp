
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {

int b, z, k;


cout<<"skriv ett nummer mellan 1 - 10: " << endl;

cin>> b;

cout << "hur många rader ska det vara";
cin >> k ;

b = b - 2;



for(int a = 1; a <=k; a++ ){
z = 0;
b++;	
	
if( b == 10 ){
	
b = b - 10;	

}	
	
	
for(int x = 0; x <= 9; x++ ){



if( z > b or z < b ){
	
cout<<"*";	

z++;

} else{
	
	
cout<<"_";	

z++;
	
}
	
}

cout<<endl;
	
}


	return 0;
}

