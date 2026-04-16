#include <iostream>
using namespace std;

int Ingresso(int a[]) {
    int i = 0;
    int numero;
    bool continua = true;

    while (i < 50 && continua) {
        cout << "Inserire un numero positivo (0 per terminare): ";
        cin >> numero;

        if (numero < 0) {
            cout << "Errore: inserire un numero positivo!" << endl;
        } else if (numero == 0) {
            continua = false;
        } else {
            a[i] = numero;
            i++;
        }
    }
    return i;
}

void inverso(int a[], int b[], int n) {
    int i_orig = n - 1;
    int i_rov = 0;

    while (i_orig >= 0) {
        b[i_rov] = a[i_orig];
        i_orig--;
        i_rov++;
    }
}

int main() {
    int vet_1[50];
    int vet_2[50];
    
    int quanti = Ingresso(vet_1);

    inverso(vet_1, vet_2, quanti);

    cout << "\nRisultato: ";
    for (int i = 0; i < quanti; i++) {
        cout << vet_2[i] << " ";
    }
    cout << endl;

    return 0;
}