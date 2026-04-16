#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void riempimento(int vett[], int N) {
    for (int i = 0; i < N; i++) {
        vett[i] = rand() % 101;
    }
    
    cout << "Vettore originale (non ordinato): ";
    for (int b = 0; b < N; b++) {
        cout << vett[b] << " ";
    }
    cout << endl;
}

void insertionSort(int vett[], int N) {
    int p, j;
    
    for (int i = 1; i < N; i++) {
        p = vett[i];
        j = i - 1;

        while (j >= 0 && vett[j] > p) {
            vett[j + 1] = vett[j];
            j = j - 1;
        }
        vett[j + 1] = p;
    }

    cout << "Vettore ordinato (Insertion Sort): ";
    for (int a = 0; a < N; a++) {
        cout << vett[a] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    const int N = 10;
    int Num[N];

    riempimento(Num, N);
    insertionSort(Num, N);

    return 0;
}