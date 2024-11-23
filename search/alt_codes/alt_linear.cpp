// Alternate Linear Search Algortihm (using pointers)

// NOTE: This isn't a perfect implementation, but rather a working example.


#include <iostream>
#include <array>
using namespace std;

/**
 * @brief      Find the index of the target element in two arrays.
 *
 * @param      arr std::array type
 * @param      array2 C type array
 * @param      target1 User target for arr
 * @param      target2 User target for array2
 * 
 * @details    This program searches for two targets in two arrays using pointers.
 *             The arrays are of type std::array and C type array respectively.
 *             The targets are entered by the user.
 *             The program prints the index of the target if found, otherwise
 *             prints a message saying that the target is not found.
 *
 * @return     Indexes of the target if found.
 * 
 * @see        DSA\Notes\pointers.md for more information on pointers
 * @see        DSA\Notes\array_decay_to_pointers.md for more information on decay of C type arrays to pointers
 * 
 */

int main() {
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // array 1 using C++ type array
    int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // array 2 using C type array

    int* ptr = arr.data(); // int* ptr = arr; doesn't work as arr is an object of std::array template class
    int* ptr2 = array2; // here pointer to the first element of arr2 is returned as in C type array, an array decays to a pointer

    // initializing targets
    int target1;
    cout << "Enter taget 1: ";
    cin >> target1;
    int target2;
    cout << "Enter taget 2: ";
    cin >> target2;

    // searching for target 1 in arr
    for (int index = 0; index < 10 ; index++) {
        if (*ptr == target1) {
            cout << "Target 1 found at index: " << index << endl;
            *ptr = 0;
            break;
        }
        ptr++;
    }
    // if target 1 is not found
    if (*ptr != 0) {
        cout << "Target 1 not found." << endl;
    }

    // searching for target 2 in arr2
    for (int index = 0; index < 10 ; index++) {
        if (*ptr2 == target2) {
            cout << "Target 2 found at index: " << index << endl;
            *ptr2 = 0;
            break;;
        }
        ptr2++;
    }
    // if target 2 is not found
    if (*ptr2 != 0) {
        cout << "Target 2 not found." << endl;
    }

    return 0;
}