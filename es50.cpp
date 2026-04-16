#include <iostream>
using namespace std;

int ricercaBinaria(int arr[], int n, int target) {
    int inizio = 0;
    int fine = n - 1
    int risp;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        if (arr[medio] == target) {
         risp = medio;
        } else {
            risp = -1
        }

        if (arr[medio] < target) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }
    return risp;
}

int main() {
    int numeri[] = {10, 20, 30, 40, 50};
    int dimensione = 5;
    int cerca = 40;

    int indice = ricercaBinaria(numeri, dimensione, cerca);

    if (indice != -1)
        cout << indice << endl;
    else
        cout << -1 << endl;

    return 0;
}
