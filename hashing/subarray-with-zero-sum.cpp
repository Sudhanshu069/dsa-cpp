/*
Given an array, check whether the sum of the elements is 0 or 0 is present in the array
*/

#include <bits/stdc++.h>
using namespace std;

//naive solution:
bool isOSubarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        int curr_sum = 0;
        for(int j = i; j < n; j++){
            curr_sum += arr[j];
            if(curr_sum == 0){
                return true;
            }
        }
    }
    return false;
}

bool isOSubarrayImproved(int arr[], int n){
    unordered_set<int> h;
    int pre_sum = 0;
    for(int i = 0; i < n; i++){
        pre_sum += arr[i];
        if(h.find(pre_sum) != h.end()){ //checking whether the element is already present in the hashset or not
            return true;
        }
        if(pre_sum == 0){
            return true;
        }
        h.insert(pre_sum);
    }
    return false;
}