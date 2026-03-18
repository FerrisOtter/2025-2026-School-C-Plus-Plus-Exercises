#include <iostream>

using namespace std;

int somma (int a, int b) {
	int s;
	s=a+b;
	
	return s;
}

int main () {
	int num1,num2,som;
	cout << "inserire un numero" <<endl;
	cin >> num1;
	cout << "inserire un altro numero" <<endl;
	cin >> num2;
	som=somma(num1,num2);
	cout << "la somma tra " <<num1 <<" e " <<num2 << " e' " <<som <<endl;
}
