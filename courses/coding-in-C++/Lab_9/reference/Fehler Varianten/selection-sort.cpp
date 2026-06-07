#include <iostream>
using namespace std;

// Gibt das Array aus
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[4] = {7, 3, 9, 4};
    int n = 4;

    // Äußere Schleife: geht jedes Element durch,
    // und bestimmt, welches Element an Position i gehört.
    for (int i = 0; i < n - 1; i++) {

        // Wir nehmen an, dass das kleinste Element an Position i steht.
        int minIndex = i;

        // Innere Schleife: sucht das kleinste Element im restlichen Array.
        for (int j = i + 1; j < n; j++) {

            // Wenn wir ein kleineres Element finden, merken wir uns dessen Index.
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tauscht das gefundene Minimum mit dem Element an Position i.
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        // Ausgabe nach jedem Durchlauf, um den Fortschritt zu sehen.
        printArray(arr, n);
    }

    return 0;
}
