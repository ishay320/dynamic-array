#include <stdio.h>

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
        printf("my_array[%d]\t= %f\n", i, my_array.data[i]);
    }

    da_free(my_array);
    return 0;
}
