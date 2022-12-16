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
