/*
given two numbers, x and n, find x raised to the power n: pow(x, n)
*/

/*
LOGIC: 

power(x,n) = if(n%2 == 0){
                power(x, n/2) * power(x, n/2)
}
            else{
                power(x, n - 1) * x
            }

*/

#include <bits/stdc++.h>
using namespace std;

long int power(int x, int n){
    if(n == 0){
        return 1;
    }

    int temp = power(x,n/2);
    temp = temp*temp;

    if(n % 2 == 0){
        return temp;
    }
    else{
        return temp * x;
    }
    
}