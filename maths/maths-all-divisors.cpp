// GIVEN A NUMBER, PRINT ALL DIVISORS OF THE NUMBER

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0){
            cout<<i;
        }
    }
}
//efficient solution; prints in sorted order;
/* logic: each pair before sqrt(n) */
void printDivisors2(int x){
    for (int i = 1; i * i < x; i++)
    {
        if(x%i == 0){
            cout<<i<<endl;
            if(x != x/i)/*if the number is same as the number itself we wont print that number as in case of 25*/{
                cout<<x/i<<endl;
            }
        }
    }
    
}

/*
efficient solution; prints in sorted order
time complexity: theta(sqrt(n));
*/

void printDivisors3(int p){
    int i;
    //in the first loop, we print all divisors of p from 1 to sqrt(n)
    for(i = 1; i * i < p; i++){
        if(p % i == 0){
            cout<<i;
        }
    }

    //in the second loop, we print all the divisors from sqrt(n) to n;
    for(; i >= 1; i--){ //no initialization of i because we begin from whatever is the value of i from the previous loop
        if(p % i == 0){
            cout<<p/i; //prints the greater half of the pair
        }
    }
}