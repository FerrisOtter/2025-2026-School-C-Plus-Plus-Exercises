#include <iostream>

using namespace std;

const int MAX = 100;

int sommaArray(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}

void raddoppiaArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int n, numeri[MAX];

    cout << "Quanti numeri? ";
    cin >> n;

    if (n > MAX) n = MAX;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> numeri[i];
    }

    cout << "Somma: " << sommaArray(numeri, n) << endl;

    raddoppiaArray(numeri, n);

    cout << "Array raddoppiato: ";
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    return 0;
}