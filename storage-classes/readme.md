Functions for decalaring dynamic memory
---

There are basically four functions used to allocate
memory in heap.

1. malloc

2. calloc

3. realloc

4. free

### malloc

for storing n elements:

```
  (void *)malloc(n)
```

- garbage value is present in each space
- space is allocated in contiguos manner

### calloc

for storing n elements each of size m (in bytes):

```
  (void *)calloc(n, m)
```

- initializes all space to 0
- space is allocated in contiguos manner

### realloc

augment existing space (at address ptr) to n bytes

```
  (void *)realloc(void *ptr, n)
```

### free

free the allocated space at address (ptr)

```
  void free(void *ptr)
```
