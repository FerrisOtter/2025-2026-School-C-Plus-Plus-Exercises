#include <iostream>
using namespace std;

int quadrato (int x) {
	int z;
	z= x*x;
	
	return z;
}

int main () {
	int quad,num;
	
	cout <<"inserisci un numero" <<endl;
	cin >> num;
	quad=quadrato(num);
	cout << "il quadrato di " <<num <<" e' " <<quad <<endl;
	
	return 0;
}
