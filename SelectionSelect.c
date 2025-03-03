/* ========================================================================= *
 * SelectionSelect
 * Implementation of the SelectionSelect algorithm
 * ========================================================================= */

 #include <stddef.h>
 #include "Select.h"

size_t select(void *array, size_t length, size_t k,
              int (*compare)(const void *, size_t i, size_t j),
              void (*swap)(void *array, size_t i, size_t j))
{
    for (size_t i = 0; i <= k; i++){ 
        int key = i;
        for (size_t j = i + 1; j < length; j++){
            if (compare(array, key, j) >= 1)
                key = j;
        }            
        swap(array, i, key);
    }
    return k;
}
