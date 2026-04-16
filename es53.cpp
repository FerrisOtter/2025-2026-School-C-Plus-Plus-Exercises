#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubble(int vett[], int N) {
    int temp;
    int i = 0;
    bool scambiato = true;

    while (i < N - 1 && scambiato) {
        scambiato = false;
        for (int j = 0; j < N - 1 - i; j++) {
            if (vett[j] > vett[j + 1]) {
                temp = vett[j];
                vett[j] = vett[j + 1];
                vett[j + 1] = temp;
                scambiato = true;
            }
        }
        i++;
    }
}

int main() {
    srand(time(0));
    const int N = 10;
    int Num[N];

    for (int p = 0; p < N; p++) {
        Num[p] = rand() % 100;
    }
    
	cout <<"il vettore non ordinato e': ";
	
	 for (int b = 0; b < N; b++) {
        cout << Num[b] << " ";
    }
    cout <<endl;
    
    bubble(Num, N);
    
	cout <<"il vettore ordinato e': ";
    for (int a = 0; a < N; a++) {
        cout << Num[a] << " ";
    }
    
    return 0;
}