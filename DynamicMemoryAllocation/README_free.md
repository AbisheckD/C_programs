# Dynamic Memory Deallocation – `free()` in C

After dynamically allocating memory using `malloc()`, `calloc()`, or `realloc()`, it's essential to **release** that memory when it's no longer needed. In C, the `free()` function is used to deallocate memory and prevent **memory leaks**.

---

## 📂 Location

This file is part of the [DynamicMemoryAllocation](https://github.com/AbisheckD/C_programs/tree/main/DynamicMemoryAllocation) directory in the [`C_programs`](https://github.com/AbisheckD/C_programs) repository.

📄 File: [`free_example.c`](https://github.com/AbisheckD/C_programs/blob/main/DynamicMemoryAllocation/free_example.c)

---

## 📌 About `free()`

The `free()` function is used to deallocate memory previously allocated by `malloc()`, `calloc()`, or `realloc()`.

### 🔧 Syntax

```c
void free(void *ptr);
```

- ptr: A pointer to the memory block to be freed
- If ptr is NULL, no action occurs
- After freeing, the pointer becomes dangling unless set to NULL

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
    printf("\n");

    /* deallocating ptr */
    free(ptr);
    printf("Memory deallocated successfully\n");

    return 0;
}
```

## Output
```c
Memory allocation successful
1 2 3 4 5 
memory deallocated successful
```

## ⚠️ Best Practices When Using free()

- Always free() memory once you're done using it
- Set pointer to NULL after free() to avoid dangling pointer
- Never call free() on memory that was not dynamically allocated
- Avoid double free errors (calling free() twice on the same pointer)

## 📝 License

- This project is open-source under the MIT License.

## 🔗 Repository

- Explore more C examples in the full repo:
👉 https://github.com/AbisheckD/C_programs
