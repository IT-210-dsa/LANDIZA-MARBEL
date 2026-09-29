#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];


    cout << "Enter 5 numbers:" << endl << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    
    cout << endl << "Original:" << endl << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i < SIZE - 1) {
            cout << ",";
        }
    }
    cout << endl << endl;


    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
            
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    
    cout << "Sorted:" << endl << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i < SIZE - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}
