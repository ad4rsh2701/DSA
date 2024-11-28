// Selection Sort

#include <iostream>
#include <vector>

using namespace std;


/**
 * @brief      Selection Sort Algorithm
 *
 * @details    This program takes a vector as input and sorts it using the
 *             Selection Sort Algorithm. The algorithm works by repeatedly
 *             finding the minimum element from unsorted part and putting it
 *             at the beginning. The algorithm maintains two subarrays in a
 *             given array.
 *
 * @return     0 if the program is executed successfully.
 */

int main() {
    vector<int> arr = {33, 12, 5, 23, 11, 76, 2, 37};

    int size = arr.size();

    // Selection Sort
    for (int i=0; i<size-1; i++){
        int minIndex = i;
        // Find the minimum element in the unsorted array
        for (int j = i+1; j<size; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }   
        // Swap the minimum element with the first element of the unsorted array
        if (minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print the sorted array
    for (int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

