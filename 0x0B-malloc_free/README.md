MEMORY ALLOCATION

When you declare variables or when you use strings within double quotes, the
program is taking care of all the memory allocation. You do not have to think about
it.
Dynamic allocation
So far we have used variables, arrays with fixed size. But what happens if you do
not know the size of the array you have to declare and / or if this size depends on
another variable?
The malloc() function allocates size bytes and returns a pointer to the allocated
memory

#include <stdlib.h>
void *malloc(size_t size);
