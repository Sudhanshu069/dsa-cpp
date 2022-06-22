/*
PROBLEM: Given a number, find if it is palindrome or not.
A palindrome is a number which is same read  from either sides aka from front and the back.

EX: n = 78987
O/P: YES

EX: n = 8
O/P: YES

I/p: 21
O/P: NO

*/

/*
LOGIC: traverse digits from right to left to find reverse of given number.
if reverse if same as the original number, the number is a palindrome.

TIME COMPLEXITY: theta(D);
*/

#include <bits/stdc++.h>
using namespace std;

bool palindromeNumber(int x){
    int rev = 0;
    int temp = x;
    while (temp != 0)
    {
        int ld = temp%10;
        rev = rev*10 + ld;
        temp = temp/10;
    }
    return (rev == x);
}