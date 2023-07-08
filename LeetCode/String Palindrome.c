//
//  String Palindrome.c
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/8/23.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool stringPalindrome(char str[], int size){
    int left = 0;
    int right = size-1;
    while(left<right){
        if(str[left]!=str[right])
            return false;
        left = left+1;
        right = right-1;
    }
    return true;
}
int main(){
    char str[] = "racecar";
    int size = strlen(str);
    bool isPalindrome = stringPalindrome(str, size);
    if(isPalindrome)
        printf("is Palindrome\n");
    else
        printf("is not Palindrome\n");

}
