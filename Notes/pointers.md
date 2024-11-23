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