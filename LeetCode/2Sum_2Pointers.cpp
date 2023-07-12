//
//  2Sum_2Pointers.cpp
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/10/23.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoPointers(vector<int>& arr, int target){
    vector<int> values;
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            values.push_back(arr[i]);
            values.push_back(arr[j]);
            break;
        }
        else if (arr[i]+arr[j]>target){
            j--;
        }
        else if (arr[i]+arr[j]<target){
            i++;
        }
    }
    return values;
}
//int main(){
//    vector<int> arr = {0,1,2,3,4,5,6,7,8,9,10};
//    vector<int> values = twoPointers(arr, 10);
//    for(int i: values){
//        cout<<i<<endl;
//    }
//    return 0;
//}
