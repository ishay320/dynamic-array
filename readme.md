# dynamic array in `C`

This header file provides a simple dynamic array implementation in `C`.

## Usage

To use the dynamic array:

- include the `da.h` header file in your `C` code.
- Initialize a dynamic array using `da_init`.
- Push elements into the dynamic array using `da_push`.
- Use the elements by accessing their location `array.data[i]`.
- Free memory associated with the dynamic array using `da_free`.

## Example:

```c
#include "da.h"

struct dynamic_array {
    float* data;
    size_t len;
    size_t size;
};

int main()
{
    struct dynamic_array my_array;
    da_init(my_array, 10);

    for (int i = 0; i < 20; i++) {
        da_push(my_array, (float)i / 3);
    }

    // use the data
    for (int i = 0; i < 20; i++) {
        printf("my_array[%d] = %f\n", i, my_array.data[i]);
    }

    da_free(my_array);
    return 0;
}
```

> Make sure to create your own struct with the needed data type according to your requirements.
