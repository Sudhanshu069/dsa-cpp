/*
PROBLEM: Given a number, Check for prime:
*/

/*
LOGIC: IF we write all divisors of a number, we can see that these divisors always occur in pairs.

if(x,y) is a pair:
x*y = n;
and if x <= y:
    x*x <= n;
    x <= sqrt(n)

question: why do we need to go to sqrt(n) only?
answer: if there is a divisor which is greater than sqrt(n),it will have a pair with x which is smaller than sqrt(n);
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1){return false;}

    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

}

/*
MORE EFFICIENT SOLUTION:
by checking n%2 == 0 and n%3 == 0, we can save many iterations for large n;
*/

bool isPrime(int n){
    if(n == 1){return false;}
    if(n == 2 || n == 3){return false;}
    if(n%2 == 0 || n%3 == 0){return true;}
    for(int i = 5; i*i <n; i += 6){
        if(n%i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}