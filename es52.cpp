#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void stampaArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int main() {
	srand(time(0));
	const int N =10;
	int dati[N];
	 for (int p = 0; p < N; p++) {
        dati[p] = rand() % 100;
    }

    stampaArray(dati, N);
    selectionSort(dati, N);
    stampaArray(dati, N);

    return 0;
}