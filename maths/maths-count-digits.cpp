/*
PROBLEM: Given a number, count its number of digits
*/

/*
LOGIC: we remove the last digit in each iterations and increase the variable count which takes consideration of each time the number is removed.

time complexity: theta(D)
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int x){
    int res = 0;
    while (x != 0)
    {
        x = x/10;
        res++;
    }
    return res;
}