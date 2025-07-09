# Dynamic Memory Allocation in C – `malloc()` Explained

Dynamic memory allocation in C allows you to request memory at runtime from the heap. This is useful when the size of data structures (like arrays) cannot be determined at compile-time.

C provides **four standard library functions** defined in `<stdlib.h>` for dynamic memory allocation:

1. `malloc()` – Memory Allocation  
2. `calloc()` – Contiguous Allocation  
3. `realloc()` – Reallocation  
4. `free()` – Deallocation

## 📌 malloc()

The `malloc()` function (short for **memory allocation**) is used to **allocate a single contiguous block of memory** of a specified size (in bytes) on the **heap** during runtime.

> The memory allocated by `malloc()` is **uninitialized** (i.e., it contains **garbage values**).

### Syntax
```c
void *malloc(size_t size);
```
- size: Number of bytes to allocate
- Returns: void * pointer to the allocated memory block
- If allocation fails: returns NULL

## Sample Code 1: Basic Usage

Array that stores 5 interger and the size becomes 5*4 bytes = 20 bytes (for 5 integers) which is given at size at malloc function as argument.
``` c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(20);
    
    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    return 0;
}
```

## Output
```
1
2
3
4
5
```

## Sample code 2: With Safety Check and sizeof

Using sizeof(int) makes the code portable and safer:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    // Checking if failed or pass
    if (ptr == NULL) {
        printf("Allocation Failed");
        exit(0);
    }
    
    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    return 0;
}
```

## Output
```
1
2
3
4
5
```

## Best Practices

- Always use sizeof(type) when calculating memory size
- Always check if the pointer returned by malloc() is NULL
- Free dynamically allocated memory when no longer needed
- Prefer calloc() if you want zero-initialized memory

## License

This example is open-source under the MIT License.
Feel free to use and modify it for learning and teaching.
