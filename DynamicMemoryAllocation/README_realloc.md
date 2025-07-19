# 🔁 Dynamic Memory Reallocation in C – `realloc()` Examples

This repository demonstrates how to use the `realloc()` function in C to **resize dynamically allocated memory** using two common approaches.

Reallocation is useful when:
- You initially allocate memory using `malloc()` or `calloc()`
- Later, you need more (or less) memory
- You want to avoid memory leaks and handle allocation errors properly

---

## Syntax
```c
void *realloc(void *ptr, size_t new_size);
```

- ptr: Pointer to the previously allocated memory block (can be NULL)
- new_size: New size in bytes to allocate
- Returns:
  - void * pointer to the reallocated memory block
  - NULL if the reallocation fails (original memory remains unchanged if assigned to a temp pointer)
- If ptr is NULL, realloc() behaves like malloc().
- If new_size is 0 and ptr is not NULL, the memory is freed and NULL is returned.

## 📁 Files

| File Name         | Description                                  |
|------------------ |----------------------------------------------|
| `realloc_code1.c` | Reallocation directly with base pointer      |
| `realloc_code2.c` | Safer reallocation using a temporary pointer |

---

## 🔧 Code 1 – Direct `realloc()` Assignment

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Check for allocation failure
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }
    printf("Memory Reallocation Successful");
    return 0;
}
```

## Output
```c
Memory Reallocation Successful
```

## ⚠️ Important Note:

- If realloc() fails, it returns NULL and original memory is lost, which may cause memory leaks.

## 🔧 Code 2 – safe `realloc()` using temporary pointer 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Reallocation using temporary pointer
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    
    if (temp == NULL)
        printf("Memory Reallocation Failed\n");
    else
        ptr = temp;
    printf("Memory Reallocation Successful\n");
    return 0;
}
```

## Output
```c
Memory Reallocation Successful
```

## ✅ Best Practice:

- Using a temporary pointer helps preserve the original memory in case realloc() fails, making it safer for robust applications.

| Feature                     | Code 1            | Code 2                            |
| --------------------------- | ----------------- | --------------------------------- |
| Reallocation Method         | Direct assignment | Temporary pointer used for safety |
| Memory Leak Risk on Failure | Possible          | Avoided                           |
| Use Case                    | Simple and quick  | Safer and recommended             |

## 📖 Summary

- realloc() helps to resize dynamically allocated memory blocks.
- Always check if realloc() was successful before using the new pointer.
- Code 2 is the safer approach when writing reliable and error-resistant C programs.

## 📚 Related Functions (check other readme files in DMA)

- malloc() – Allocates memory
- calloc() – Allocates and zero-initializes memory
- free() – Frees dynamically allocated memory
- realloc() – Resizes previously allocated memory

## 📝 License

- This project is licensed under the MIT License.
