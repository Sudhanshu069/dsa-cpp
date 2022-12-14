/*
Given an array, find the number of distinct elements in the array

i/p: arr[] = {15,12,13,12,13,13,18}
o/p: 4

i/p: arr[] = {10,10,10}
o/p: 1
*/

#include <bits/stdc++.h>
using namespace std;
//time complexity: o(n^2)
int countDist(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }

        }
        if(flag == false){
            res++;
        }
    }
}

//efficient solution in cpp
//time complexity: o(n)
int countDistinct(int arr[], int n){
    unordered_set<int>s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]); //only insert if the element is not already present
    }
    return s.size();
}

//improved efficient solution:
//time complexity: o(n)
int countDistinctImp(int arr[], int n){
    unordered_set<int> s(arr, arr + n); //creating a unordered set from array elements
    return s.size();
}