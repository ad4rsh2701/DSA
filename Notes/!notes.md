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

## Decay of C type Arrays to Pointers
In C++, when you use the name of a C-style array in an expression, it "decays" to a pointer to its first element. This is a fundamental property of C-style arrays in C++.

## Pointer (not an exhaustive list)

### Pointer Basics
1. Pointer declaration: `int* ptr;` declares a pointer to an integer.
2. Pointer assignment: `ptr = &x;` assigns the address of x to ptr.
3. Dereferencing: `*ptr` returns the value stored at the address pointed to by ptr.
### Pointer Operators
1. Address-of operator: `&x` returns the address of x.
2. Dereference operator: `*ptr` returns the value stored at the address pointed to by ptr.
3. Increment operator: `ptr++` increments the pointer to point to the next element.
4. Decrement operator: `ptr--` decrements the pointer to point to the previous element.
5. Arithmetic operators: `ptr + x`, `ptr - x`, `ptr += x`, `ptr -= x` perform arithmetic operations on the pointer.
### Pointer Types
1. Null pointer: `int* ptr = nullptr`; declares a null pointer.
2. Void pointer: `void* ptr`; declares a void pointer that can point to any type.
3. Constant pointer: `int* const ptr`; declares a constant pointer that cannot be changed.
4. Pointer to constant: `const int* ptr`; declares a pointer to a constant value.
### Pointer Uses
1. Dynamic memory allocation: `int* ptr = new int;` allocates memory on the heap.
2. Array indexing: `arr[0]` is equivalent to `*(arr + 0)`.
3. Function pointers: `int (*func)(int);` declares a pointer to a function.
4. Callback functions: `void (*callback)(int);` declares a pointer to a callback function.