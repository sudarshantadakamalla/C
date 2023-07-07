//
//  sumOfAllNumbersInArray.c
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/7/23.
//  Finished

#include <stdio.h>
int sumOfElements(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        count = count + arr[i];
    }
    return count;
}
//int main(){
//    int arr[] = {1,2,3,4};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    int result = sumOfElements(arr, size);
//    printf("Sum of all elements in the array is %d\n", result);
//    return 0;
//}
