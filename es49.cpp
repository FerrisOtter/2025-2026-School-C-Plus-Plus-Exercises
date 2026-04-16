#include <iostream>
using namespace std;

int ric_sentinella(int vet[], int cerc, int Num) {
    int i = 0;
    
    vet[Num] = cerc;

    while (vet[i] != cerc) {
        i++;
    }

    if (i < Num) {
    } else {
        i=-1;
    }
    
    return i;
    
}

int main() {
    int const N = 8;
    int V[N + 1]; 
    int cerca, pos;

    for (int i = 0; i < N; i++) {
        cout << "Inserire un numero: ";
        cin >> V[i];
    }

    cout << "Inserire il numero da cercare: ";
    cin >> cerca;

    pos = ric_sentinella(V, cerca, N);

    if (pos == -1) {
        cout << "Il numero non e' stato trovato." << endl;
    } else {
        cout << "Il numero e' stato trovato in posizione: " << pos << endl;
    }

    return 0;
}
