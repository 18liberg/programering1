#include <iostream>

using namespace std;


float FahrenFunktion(float cels) {
float ans = cels * 1.8 + 32;
return ans;
}

float CelsiusFunktion(float fahren) {
float ans = (fahren - 32) / 1.8;
return ans;
}


float FormelVal(char val, float temp) {
if (val == 'F') {
float ans = FahrenFunktion(temp);
return ans;
}
else if (val == 'C') {
float ans = CelsiusFunktion(temp);
return ans;
}

}


int main(int argc, char** argv) {
char format;
float degrees;

cout << "Vill du omvandla till C eller F? " <<endl;
cin >> format;
cout << "Ange grader som ska bli omvandlat! " << endl;
cin >> degrees;

float ans = FormelVal(format, degrees);

cout << ans;

	return 0;
}
