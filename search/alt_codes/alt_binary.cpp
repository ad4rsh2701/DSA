// Binary Search Algorithm

#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief      Performs binary search on a sorted vector to find the target element.
 *
 * @details    This program takes a sorted vector and a target element as input.
 *             It uses binary search with pointers to find the index of the target
 *             element. If found, it prints the index; otherwise, it indicates that
 *             the target is not found.
 *
 * @return     0 if the target is found, otherwise indicates not found.
 */
int main() {
    vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15}; // Sorted vector for binary search

    int* low = array.data(); // Pointer to the first element of the vector
    int* high = array.data() + array.size() - 1; // Pointer to the last element of the vector

    int target;
    cout << "Enter target element: ";
    cin >> target; // Input target element from user

    // Perform binary search
    while (*low <= *high) {
        int* mid = low + (high - low) / 2; // Calculate mid pointer

        if (*mid == target) {
            // Target found, print the index
            cout << "Target found at index: " << (mid - array.data());
            return 0;
        }

        // Adjust search range
        if (*mid < target) {
            low = mid + 1; // Move low pointer to the right of mid
        } else if (*mid > target) {
            high = mid - 1; // Move high pointer to the left of mid
        }
    }

    // If target is not found
    cout << "Target not found :(";
    return 0;
}
