#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int x;

bool run = true;



while(run == true)
{
	cout << "Vill du fortsätta programmet? 1 = JA 2 = Nej" << endl;
	cin >> x;
	
	if(x ==1)
	{
		run = true;
	}
	else
	{
		run = false;
	}
}




	return 0;
}
