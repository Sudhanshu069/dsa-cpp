/*
PROBLEM: given a number, find its prime factors

I/P: n = 315
O/P: 3 3 5 7 
*/

#include <bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n){
    if(n <= 1){return;}
    for (int i = 2; i * i< n; i++)
    {
        while(n % i == 0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n > 1){
        cout<<n;
    }
    
}

/*
EVEN MORE OPTIMISED CODE;:
LOGIC: just check for 2 and 3 explicitely
*/

void printPrimeFactors(int n){
    if(n <= 1){return;}
    while (n % 2 == 0)
    {
        cout<<2;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout<<3;
        n /= 3;
    }
    for (int i = 5; i*i < n; i += 6)
    {
        while (n % i == 0)
        {
            cout<<i;
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout<<(i + 2);
            n /= (i + 2);
        }
    }
    if(n > 3){cout<<n;}
}

