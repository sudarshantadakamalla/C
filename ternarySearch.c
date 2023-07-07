//
//  ternarySearch.c
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/7/23.
//

#include <stdio.h>
int ternarySearch(int arr[], int num, int left, int right){
    while(left<=right){
        
        int mid1 = left+(right-left)/3;
        int mid2 = right+(left-right)/3;
        
        if(arr[mid1]==num)
            return mid1;
        if(arr[mid2]==num)
            return mid2;
        if(num<arr[mid1])
            right = mid1-1;
        else if(num>arr[mid2])
            left = mid2+1;
        else{
            left=mid1+1;
            right=mid2-1;
        }
        
    }
    return -1;
}
//int main(){
//    int arr[] = {1,3,4,5,6,8,9,10,12,17,18};
//    int length = sizeof(arr)/sizeof(arr[0]);
//    int left = 0;
//    int right = length-1;
//    int result = ternarySearch(arr, 17, left, right);
//    printf("The index of the number is %d", result);
//    printf("\n");
//    return 0;
//}
