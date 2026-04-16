#include <iostream>
using namespace std;


int ric(int vet[], int cerc, int Num) {
    int i = 0;
    while (i < Num && vet[i] != cerc) {
        i = i + 1;
    }
    if (i < Num) {
    } else {
        i=-1;
    }
    return i;
}

int main () {
	int const N=8;
	int V[N];
	int i,cerca,pos;
	i=0;
	while (i<N) {
	cout << "inserire un numero" <<endl;
	cin >> V[i];
	i=i+1;
	}
	cout << "inserire il numero da cercare" <<endl;
	cin >> cerca;
	pos=ric(V,cerca,N);
	if (pos==-1) {
		cout << "il numero non e' stato trovato" <<endl;	
	} else {
		cout <<"il numero e' stato trovato in posizione " <<pos <<endl;
	}
	return 0;
} 
