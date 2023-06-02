
#include <iostream>

using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArray[] = { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Before sorting:" << endl;
    displayArray(myArray, size);

    selectionSort(myArray, size);

    cout << "After sorting:" << endl;
    displayArray(myArray, size);

    return 0;
}


// #include <iostream>
// using namespace std;


// int selectionSort(int A[] , int size, int type ){
//   int i,j, minMax;
//   for(j=0; j< size; j++){
//     minMax = j;
//     for(i=j+1; i < size; i++){
//       if(A[i] < A[minMax]){
//         minMax = i;
//       }
//     }
//     // 1 for MAX value
//     if(type == 1){
//       swap(A[j] , A[minMax]);
//     } else {
//       // 0 for MIN value
//       swap(A[i] , A[minMax]);
//     }
    
//   }
//   return A[minMax];
// }

// int main() {
//     int students[] = { 10, 20, 30, 40,5,8,2,2};
//     cout << selectionSort(students, 8, 0);
//     return 0;
// }
