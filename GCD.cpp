// Write a program with a function to compute gcd(or hcf) for two integers.

#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    int temp;         // here a variable (temp) is created to temporarily storre the remainder
    while (b != 0)    // the while loop wll continue as long as b is not = 0
    {                 // In each iteration of the while loop, hcf calculates the remainder temp when a is
        temp = a % b; // divided by b using the modulus operator (%).Then, it updates the value of a to be b and b to
        a = b;        // temp. This step effectively swaps the values of a and b untill becomes zero and the looop
        b = temp;     // stops. At this point the value of a is the HCF henced returned
    }                 // Euclids GCD algorith is being used i.e a = b(q) + r, where q is the quotient and r is the remainder.
    return a;         // This is formula is used recursively where a and b are switched with new values.
}

int main()
{
    int x, y;
    cout << "enter two integers " << endl;
    if (!(cin >> x >> y))
    {
        cout << "please enter only integers values";
    }
    else
    {
        cout << "HCF of " << x << " and " << y << " is " << hcf(x, y) << endl;
    }

    return 0;
}
