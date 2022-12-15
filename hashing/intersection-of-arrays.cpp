/*

we have to find intersection of arrays elements

a[] = {10,15,20,15,30,30,5}
b[] = {30,5,30,80}

*/

#include <bits/stdc++.h>
using namespace std;

int intersection(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    { // insert all the elements of the first array in first set
        s.insert(a[i]);
    }

    int res = 0; // count variable
    for (int j = 0; j < n; j++)
    { // we check if the element is already present in the set, if it is,
        // we increament the count variable and delete that element from the set
        if (s.find(b[j]) != s.end())
        {
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}
