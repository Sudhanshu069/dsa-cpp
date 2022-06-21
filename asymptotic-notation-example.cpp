#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x) 
{
    for (int i = 0;  i < n; i++)
    {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,5,30,40,80};
    cout<<search(arr,5, 5);
    return 0;
}

//time complexity = O(n) as the worst case scenario is the searching through entire array and not finding the index of the element specified.