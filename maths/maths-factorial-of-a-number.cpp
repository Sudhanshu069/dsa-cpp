/*
PROBLEM: Given a number, find its factorial.
I/P: n = 4;
O/P: 24
*/

//TIME COMPLEXITY: Theta(N)
//AUXILARY SPACE: O(1)

#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

//Recursive Solution

int recursiveFactorial(int n){
    if(n == 0){
        return 1;
    }
    return n * recursiveFactorial(n - 1);
}