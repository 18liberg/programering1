#include <iostream>
#include <cstdlib> 
#include <ctime> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(){


	int tiden = time(0);
	
	int nummer1, nummer2;
	
	srand(tiden);
	
	nummer1 = rand()%10+1;
	nummer2 = rand()%10+1;
	
	if(nummer1 < nummer2)
	{
		cout << nummer1 << endl;
		cout << nummer2;
	}
	else 
	{
		cout << nummer2 << endl;
		cout << nummer1;
	}
	
	
	
	


	return 0;
}
