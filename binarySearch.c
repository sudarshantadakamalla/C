//
//  binarySearch.c
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/6/23.
//

#include <stdio.h>
int binarySearch(int arr[], int num, int low, int high){
    while(low<=high){
        int mid = low + (high-low) /2;
        if(arr[mid] == num){
            return mid;
        }
        if (num>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    return -1;
}
//int main(){
//
//    int arr[] = {1,3,4,5,6,8,9,10,12,17,18};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    int num = 18;
//    int index = binarySearch(arr, num, 0, size-1);
//    printf("Element found at index %d", index);
//    printf("\n");
//    return 0;
//}
