#include <stdio.h>

int linearSearch(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}

//int main(int argc, const char * argv[]) {
//    printf("Hello, World!\n");
//    int arr[] = {1, 3, 5, 6, 9};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int result = linearSearch(arr, size, 9);
//    return result;
//}
