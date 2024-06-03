#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Recursive selection sort function
void selectionSortRecursive(int arr[], int n, int min_idx) {
  // Base case: When only one element remains (already sorted)
  if (n == 1) {
    return;
  }

    // Find the minimum element in the unsorted subarray (n elements)
    int j;
    for (j = 1; j < n; j++) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }

  // Find the minimum element in the unsorted subarray (n-1 elements)
  if (j < n - 1 && arr[j + 1] < arr[min_idx]) {
    min_idx = j + 1;
  }

  // Conquer (recursively sort the remaining subarray excluding the minimum)
  selectionSortRecursive(arr, n - 1, min_idx);

  // Combine (swap the minimum element with the first element)
  if (min_idx != 0) {
    swap(&arr[min_idx], &arr[0]);
  }
}

int main() {
    int n;
    cout << "Masukkan batas Array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data array ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array yang dimasukkan: ";
    printArray(arr, n);
    cout << endl;

    // Start recursive selection sort with initial min_idx as 0
    selectionSortRecursive(arr, n, 0);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
