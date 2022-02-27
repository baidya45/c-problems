#include <bits/stdc++.h>
using namespace std;

// swap without 3rd variable
void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;
}


// get the bit of  a desired position
void getBit(int n, int pos)
{
    n = (n & (1 << pos));
    // cout<<n;
    if (n == 0)
        cout << "bit is 0";
    else
        cout << "bit is 1";
}

// bit required to change to convert a into b
void reqBit(int &a, int &b)
{
    int cont = 0;
    int temp = a ^ b;
    int x;
    while(temp!=0)
    {
         x=temp&1;
         if(x==1){
             cont++;
         }
         temp=temp>>1;
    }
   cout << "number of bits required to change is = " << cont;
}

// fisrt set bit
int firstSetBit(int n){
     return log2(n&-n)+1;
}

// single repeat element
 int singleRepeatEle(int arr[],int n)
 {
     int res=0;
     for(int i =0;i<n;i++){
         res=res^arr[i];
     }

     return res;
 }

 unsigned int fun(int n){
     return n;
 }

 // find the only non repeating element where other element repeats thrice...

int singleFromThrice(vector<int> &nums){

}

int main()
{
    
    return 0;
}