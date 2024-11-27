// Binary Search Algorithm

#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief      Binary Search Algorithm
 *
 * @details    This program takes a sorted vector and a target element as input.
 *             It uses binary search to find the index of the target element.
 *             If found, it prints the index; otherwise, it indicates that
 *             the target is not found.
 *
 * @return     0 if the target is found, -1 otherwise.
 */

int main() {

    vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15};

    int high = array.size()-1; // index of the last element of the vector
    int low = 0; // index of the first element of the vector

    int target;
    cin >> target; // Input target element from user

    // Binary Search
    while (low <= high) {
        int mid = (high + low)/2; // Calculate mid; standard method uses "int mid = low + (high-low)/2;" to adjust for overflow

        if (array[mid] == target){
            // Target found, print the index
            cout<<"Target found at index: "<< mid;
            return 0;
        }

        // Adjust search range
        if (array[mid] > target){
            high = mid - 1; // high moves to the left of mid
        } 
        else if (array[mid] < target){
            low = mid + 1; // low moves to the right of mid
        }

    }
    
    // If target is not found
    cout<<"Target not found!";
    return 0;

}
