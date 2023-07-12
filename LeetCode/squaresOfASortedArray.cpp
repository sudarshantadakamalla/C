//
//  squaresOfASortedArray.cpp
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/12/23.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int square;
        vector<int> result(nums.size());
        for(int i=nums.size()-1; i>=0; i--){
            if(abs(nums[left])<abs(nums[right])){
                square=nums[right];
                right--;
            }else{
                square=nums[left];
                left++;
            }
        result[i]=(square*square);
            
        }
        return result;
    }
};
