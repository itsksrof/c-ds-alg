#include <stdio.h>

// 1. Mid is equal to 4 (16)
//     1. Target is higher than 4 (16)
//     2. Low is equal to mid plus 1
// 2. Mid is equal to 7 (56)
//     1. Target is higher than 7 (56)
//     2. Low is equal to mid plus 1
// 3. Mid is equal to 8 (72)
//     1. Target is equal to mid

int main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 72;

    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int mid = 0;

    while (low != high) {
        mid = (low + high) / 2;
        if (target == arr[mid]) {
            printf("target: %d\n", arr[mid]);
            return 0;
        } else if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
}
