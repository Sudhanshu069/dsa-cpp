/*
PROBLEM: Given a number n, we have to find number of trailing zeroes in the factorial of this number n;

I/P: n = 5; 
O/P: 1 {1*2*3*4*5 = 120}

I/P: n = 10;
O/P: 2 {1*2*3*4*5*6*7*8*9*10 = 3628800}
*/

/*
LOGIC: we need to track 2 and 5 in the prime factorization of the given number to figure out how many trailing zeroes the factorial will have cause 2*5 = 10

the number of 5 are going to be less than number of 2 so just track 5
use floor function

but there are numbers like 25 and so on
floor(n/5) + floor(n/25) + floor(n/125) + ...



*/

#include <bits/stdc++.h>
using namespace std;

int trailingZeroesInFactorial(int x){
    int res =0;
    for (int i = 5; i <= x; i *= 5)
    {
        res = res + x/i;
    }
    return res;
    
}
