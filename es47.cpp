#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void inizializzaPool(int pool[], int TOTALE) {
    for (int i = 0; i < TOTALE; i++) {
        pool[i] = i + 1;
    }
}

void mescolaPool(int pool[], int TOTALE) {
    for (int i = TOTALE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = pool[i];
        pool[i] = pool[j];	
        pool[j] = temp;
    }
}

void estraiNumeri(int pool[], int mioVettore[], int DA_ESTRARRE) {
    for (int i = 0; i < DA_ESTRARRE; i++) {
        mioVettore[i] = pool[i];
    }
}

void stampaRisultato(int mioVettore[], int DA_ESTRARRE) {
    cout << "Vettore di 10 numeri casuali (1-40) senza ripetizioni:" << endl;
    for (int i = 0; i < DA_ESTRARRE; i++) {
        cout << mioVettore[i] << " ";
    }
    cout << endl;
}

int main() {
    const int TOTALE = 40;
    const int DA_ESTRARRE = 10;
    int pool[TOTALE];
    int mioVettore[DA_ESTRARRE];

    srand(time(NULL));

    inizializzaPool(pool, TOTALE);
    mescolaPool(pool, TOTALE);
    estraiNumeri(pool, mioVettore, DA_ESTRARRE);
    stampaRisultato(mioVettore, DA_ESTRARRE);

    return 0;
}
