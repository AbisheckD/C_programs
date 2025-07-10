# Dynamic Memory Allocation – `calloc()` in C

This example demonstrates how to use the `calloc()` function to dynamically allocate memory for an array of integers at runtime. Unlike `malloc()`, `calloc()` automatically initializes all allocated memory to **zero**.

---

## 📂 Location

This file is part of the [DynamicMemoryAllocation](https://github.com/AbisheckD/C_programs/tree/main/DynamicMemoryAllocation) directory in the [`C_programs`](https://github.com/AbisheckD/C_programs) repository.

📄 File: [`calloc_code.c`](https://github.com/AbisheckD/C_programs/blob/main/DynamicMemoryAllocation/calloc_code.c)

---

## 📌 About `calloc()`

The `calloc()` function stands for **contiguous allocation**. It allocates memory for an array and initializes every byte to `0`.

### 📜 Syntax

```c
void *calloc(size_t num_elements, size_t element_size);
```

- num_elements: Number of elements to allocate
- element_size: Size of each element in bytes
- Returns a void* pointer to the allocated memory block
- Returns NULL on allocation failure

## Code
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* creating values for 5 integer values */
    int *ptr = (int*)calloc(5, sizeof(int));

    /* condition to check memory allocation */
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");
    }

    /* assign values to ptr */
    for(int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    /* print values of ptr */
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Deallocate memory
    return 0;
}
```

## Output
```c
Memory allocation successful
1 2 3 4 5
```

## Difference between malloc and calloc

## ✅ Difference between `malloc()` and `calloc()`

| Feature                 | `malloc()`                | `calloc()`                            |
|------------------------|---------------------------|----------------------------------------|
| Initialization         | No (contains garbage)     | Yes (all values initialized to 0)     |
| Parameters             | Total bytes               | Number of elements × size             |
| Arguments              | Single block, 1 argument  | Contiguous block, 2 arguments         |
| Ideal Use Case         | Fixed memory blocks       | Arrays, zero-initialized memory       |



## Note

- Always check if memory allocation was successful by verifying the pointer is not NULL.
- Use free(ptr) to release dynamically allocated memory to avoid memory leaks.
- calloc() ensures clean, predictable memory before use.

## 📝 License

- This project is open-source under the MIT License.

## 🔗 Repository

- You can explore this and other C programs in the full repository:
👉 https://github.com/AbisheckD/C_programs
