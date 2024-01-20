#include <stdbool.h>
#include <stdlib.h>

#include "duplicates.h"

// O(n^2)
// bool has_duplicates00(int *a, size_t n) 
// {
//     for (each element a[i]) {
//         for (each element a[j] from i+1 to the end) {
//             if (a[i] == a[j]) {
//                 return true
//             }
//         }
//     }
//     return false
// }

bool has_duplicates00(int *a, size_t n) 
{
    for (int i = 0; i < n;  i++) {
        for (int j = i+1;  j < n;  j++)
    }
}

// O(n)
// bool has_duplicates01(int *a, size_t n)
// {
//     allocate "seen" table
//     for (each element a[i]) {
//         if (a[i] already marked as seen in table) {
//             return true
//         }
//     }
//     return false
// }