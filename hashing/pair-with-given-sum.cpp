/*
given sum, check whether the pair that makes that sum exists in the array or not
*/

#include <bits/stdc++.h>
using namespace std;

//naive solution: 
//O(n ^ 2)
bool isPair(int arr[], int n, int sum){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[2] == sum){
                return true;
            }
        }
    }
}

//improved solution
//time complexity: O(n)
bool isPair2(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
