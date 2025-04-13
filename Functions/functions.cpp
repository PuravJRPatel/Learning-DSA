#include<iostream>
#include<cmath>

using namespace std;

// A function to check if a number is Prime

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 27;
    if (isPrime(n) == true)
    {
        cout << "The number is a prime";
    }
    else
    {
        cout << "The number is not a prime";
    }

    return 0;
}