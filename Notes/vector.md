## Vectors

A vector is a dynamic array that can grow or shrink in size as elements are added or removed. It's a template class in the C++ Standard Template Library (STL), which means it can be used to store elements of any data type.

You can initialize a vector using the following syntax:
```cpp
#include <vector>

int main() {
    // Initialize a vector with a list of elements
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Initializes a vector with 5 elements, all initialized to 10
    std::vector<int> myVector(5, 10); // {10, 10, 10, 10, 10}

    // Initialize an empty vector
    std::vector<int> myVector;
}
```
**NOTE :** Vector is a template class in C++ library. Hence to use it, we initalize an object (`myVector` in this case).

## Vector Methods (not an exhaustive list)
1. `push_back(element)`: Adds an element to the end of the vector.
2. `pop_back()`: Removes the last element from the vector.
3. `insert(index, element)`: Inserts an element at a specific index.
4. `erase(index)`: Removes an element at a specific index.
5. `size()`: Returns the number of elements in the vector.
6. `empty()`: Checks if the vector is empty.
7. `clear()`: Removes all elements from the vector.
8. `at(index)`: Returns the element at a specific index.
9. `front()`: Returns the first element.
10. `back()`: Returns the last element.
11. `begin()`: Returns an iterator pointing to the first element.
12. `end()`: Returns an iterator pointing to the element after the last element.
13. `resize(size)`: Changes the size of the vector to the specified size.
14. `swap(other)`: Swaps the contents of the vector with another vector.
15. `data()`: It returns a pointer to the first element of the array.