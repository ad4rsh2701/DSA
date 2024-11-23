// Linear Search Algortihm

#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief      Finds the index of the target element in a vector.
 *
 * @param      array   The array to be searched.
 * @param      target  The target element.
 *
 * @return     The index of the target element if found, -1 otherwise.
 * 
 * @see        DSA\Notes\vector.md for more information on vectors.
 */

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    
    int target = 0;
    cin >> target;
    
    for (int index = 0; index < array.size(); index++) {
        if (array[index] == target) {
            cout << index;
            return 0;
        }
    }
    cout << -1;
}