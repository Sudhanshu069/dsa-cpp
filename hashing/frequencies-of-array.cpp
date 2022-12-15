/*
given an array, print the frequencies of each element in the array

i/p: arr[] = {10,12,10,15,10,20,12,12}
o/p:10 3
    12 3
    15 1
    20 1
*/

#include <bits/stdc++.h>
using namespace std;
//time complexity: o(n ^ 2)
void printFreq(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == true){
            continue;
        }

        int freq = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                freq++;
            }
        }
        cout<<arr[i]<<" "<<freq<<"\n";
    }
}

//efficient solution
//time complexity: o(n)
//using hashmap and taking frequency as its value and element as its key
int countFreq(int arr[], int n){
    unordered_map<int , int> h;
    for(int i = 0; i < n; i++){
        h[arr[i]]++; //if the key is not present and increases its value
    }
    for(auto e : h){
        cout<<e.first<<" "<<e.second<<"\n";
    }
}