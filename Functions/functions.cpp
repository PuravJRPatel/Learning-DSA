#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

// A function to check if a number is Prime

// bool isPrime(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// A function to return all the prime numbers before the number n
vector<int> findPrimes(int n)
{
    vector<int> prime(n + 1, 1);

    prime[0] = prime[1] = 0;

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    vector<int> ans;
    for (int i = 2; i<=n; ++i)
    {
        if (prime[i] == 1)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    // int n = 27;
    // if (isPrime(n) == true)
    // {
    //     cout << "The number is a prime";
    // }
    // else
    // {
    //     cout << "The number is not a prime";
    // }
    int n = 100;
    vector<int> primes = findPrimes(n);
    for (int prime: primes)
    {
        cout << prime << " , ";
    }
    cout << endl;
    return 0;
}