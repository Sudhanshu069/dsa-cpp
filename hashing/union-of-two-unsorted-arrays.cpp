/*
we have to find the union of two unsorted arrays:

i/p: a[] = {15,20,5,15}
     b[] = {15,15,15,20,10}

o/p: 4
*/


#include <bits/stdc++.h>
using namespace std;

//naive solution
//TIME COMPLEXITY: o((m + n) * (m + n))

int findUnion(int a[], int b[], int m, int n){
    int c[m + n]; //creating a new array
    //inputting elements in the array
    for(int i = 0; i < m; i++){
        c[i] = a[i];
    }
    for(int i = 0; i < n; i++){
        c[m + i] = b[i];
    }
    //CHECKING FOR DISTINCT ELEMENTS
    int res = 0;
    for(int i = 0; i < m+n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(c[i] == c[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            res++;
        }
    }
    return res;
}

//efficient solution
//TIME COMPLEXITY: O(m + n)
int findUnion(int a[], int b[], int m, int n){
    unordered_set<int> s;
    for(int i = 0; i < m; i++){
        s.insert(a[i]);
    }

    for(int i = 0; i < n; i++){
        s.insert(b[i]);
    }

    return s.size();
}