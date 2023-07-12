//
//  reverseString.cpp
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/12/23.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    
    }
};
