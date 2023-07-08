//
//  MinMaxInArray.c
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/7/23.
//  Finished

#include <stdio.h>
int minMaxArray(int arr[], int size){
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
    }
    printf("Max in the array is %d\n", max);
    printf("Min in the array is %d\n", min);
    return 0;
}
//int main(){
//        int arr[] = {1,3,5,2,6,8,0};
//        int arr2[] = {1,2,3,4};
//        int size = sizeof(arr)/sizeof(arr[0]);
//        int result = minMaxArray(arr, size);
//}
