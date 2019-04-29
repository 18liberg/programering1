#include <iostream>

using namespace std;


float Calculator(float celsiuss){
	float fahrenheit, Nytemp;
	
	fahrenheit = 9 * (celsiuss / 5) + 32;
	return fahrenheit;
	
}

float Temp(){
	
	float celsius, Fahrentemp;
	
	cout << "Skriv in hur många drader (celsius)" << endl;
	cin >> celsius;
	
	Fahrentemp = Calculator(celsius);
	
	cout << Fahrentemp;
}

int main(){


Temp();



	
	return 0;
}
