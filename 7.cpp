// question:
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


// solution:
//     first thing we need to check is the sign of the integer. if its negative we need to have a boolean variable to store the sign. after that we can use the math formula to reverse each digit, by using the remainder operater. this remainder operater gives each and every digits in a loop. that can be multiplied in the answer variable.

//     time complexity: O(log₁₀(|x|))
//     space complexity: O(1)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = -123;                       // example number
    bool neg = false;                   // to check sign
    if (x < 0) neg = true;
    int ans = 0;
    while (x)
    {
        ans = ans*10 + (x % 10);        // logic behind the solution
        x = x / 10;
    }
    if (!neg) ans = ans * -1;           // asigning the sign.
    cout << ans;
    return 0;
}