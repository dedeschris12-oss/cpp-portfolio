//
//  main.cpp
//  equiv array
//
//  Created by CHRISTOPHER on 5/3/26.
//

#include <iostream>
#include <string>

using namespace std;

// --- Function Prototypes ---
bool areEquivalent(int a[], int sizeA, int b[], int sizeB);
int countOccurrences(int data[], int sizeData, int item);
void showArray(int a[], int sizeA, string msg = "");
void getArray(int data[], int &n, string arrayName);

int main() {
    const int MAX_CAPACITY = 100;
    int arrayA[MAX_CAPACITY];
    int arrayB[MAX_CAPACITY];
    int sizeA, sizeB;

    // Populate arrays with validation
    getArray(arrayA, sizeA, "Array A");
    getArray(arrayB, sizeB, "Array B");

    // Display arrays
    showArray(arrayA, sizeA, "Array A");
    showArray(arrayB, sizeB, "Array B");

    // Perform Equivalency Test
    if (areEquivalent(arrayA, sizeA, arrayB, sizeB)) {
        cout << "\nThe arrays are: Equivalent" << endl;
    } else {
        cout << "\nThe arrays are: NOT Equivalent" << endl;
    }

    return 0;
}

// --- Function Definitions ---

// Returns true if both arrays contain the same items with the same frequencies
bool areEquivalent(int a[], int sizeA, int b[], int sizeB) {
    // Protocol 1: Check if sizes are different
    if (sizeA != sizeB) {
        return false;
    }

    // Protocol 2 & 3: Compare occurrences for each element
    for (int i = 0; i < sizeA; i++) {
        int x = a[i];
        int timesXA = countOccurrences(a, sizeA, x);
        int timesXB = countOccurrences(b, sizeB, x);

        if (timesXA != timesXB) {
            return false;
        }
    }

    return true;
}

// Returns the number of times 'item' occurs in the array
int countOccurrences(int data[], int sizeData, int item) {
    int count = 0;
    for (int i = 0; i < sizeData; i++) {
        if (data[i] == item) {
            count++;
        }
    }
    return count;
}

// Displays a message and the array elements
void showArray(int a[], int sizeA, string msg) {
    if (msg != "") {
        cout << endl << msg << endl;
    }
    for (int i = 0; i < sizeA; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Asks user for logical size and populates the array with validation
void getArray(int data[], int &n, string arrayName) {
    cout << "How many items will be there in " << arrayName << " [at most 100]: ";
    cin >> n;

    // Validation loop for physical capacity
    while (n > 100 || n < 0) {
        cout << "Error - too many cells - try again" << endl << endl;
        cout << "How many items will be there in " << arrayName << " [at most 100]: ";
        cin >> n;
    }

    cout << "Enter items [use space to separate]: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    cout << endl;
}
