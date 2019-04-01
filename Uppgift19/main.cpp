#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {


int kontroll;

bool is_ten;

cout << "Skriv in ett heltal: " << endl;
cin >> kontroll;

if(kontroll == 10) 
{
	is_ten = true;
}
else 
{
	is_ten = false;
}


if(is_ten == true){
	cout << "Du skrev 10";
}
else
{
	cout << "Du skrev inte 10";
}















return 0;
}
