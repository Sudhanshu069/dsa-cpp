/*
problem: given two numbers, find their gcd
*/

/*
EUCLIDEAN ALGO:
let b be smaller than a;
gcd(a,b) = gcd(a-b, b)

WHY??
Let 'g' be GCD of 'a' and 'b'

a = gx, b = gy and gcd(x, y) = 1

(a - b) = g(x - y)
*/

#include<iostream>
using namespace std;

int gcd(int x, int y){
    if (y == 0)
    {
        return x;
    }
    else{
        return gcd(y, x%y);
    }
    
}