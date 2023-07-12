//
//  stringSubsequence.cpp
//  C Lang Codes
//
//  Created by Sudarshan Rao Tadakamalla on 7/11/23.
//

#include <iostream>
#include <string>
using namespace std;
bool stringSubsequence(string s , string t){
    int i = 0;
    int j = 0;
    while(i < s.size() && j < t.size()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    return i = s.size();
    
}

//int main(){
//    string s = "ace";
//    string t = "abcde";
//    bool result = stringSubsequence(s, t);
//    cout<<"The result is "<<result<<endl;
//}
