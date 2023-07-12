//
//  mergeTwoSortedArrays.cpp
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/9/23.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> finalArray;
    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            finalArray.push_back(arr1[i]);
            i++;
        } else {
            finalArray.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        finalArray.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        finalArray.push_back(arr2[j]);
        j++;
    }

    return finalArray;
}

//int main() {
//    vector<int> arr1 = {1, 3, 5};
//    vector<int> arr2 = {2, 4, 8};
//
//    vector<int> mergedArray = mergeTwoSortedArrays(arr1, arr2);
//
//    cout << "Merged Array: ";
//    for (int i = 0; i < mergedArray.size(); i++) {
//        cout << mergedArray[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

