#include <bits/stdc++.h>

using namespace std;

// find prime numbers in a given range
void sieveOfEratosthenes(int low,int high)
{
    int n = high;
    bool isPrime[n + 1] = {false};

    int i, j=2;
    for (i = 2; i * i <= high; i++)
    {
        while (i*j<=n)
        {
            isPrime[i * j] = true;
            j++;
        }
        j = 2;
    }

    for(i=low;i<=high;i++){
        if(isPrime[i]==false){
            cout<<i<<" ";
        }
    }
}


//GCD

int main()
{
    sieveOfEratosthenes(40,50);
}