#include <iostream>

using namespace std;


int whilemax (int tal) {
int input;
cout << "Ange ett heltal: " <<endl;
cin >> input;
while (input > tal) {
cout << "Ange ett heltal: " <<endl;
cin >> input;
}
}

int main(int argc, char** argv) {

int x = 33;
whilemax(x);


return 0;
}
