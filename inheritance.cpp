#include<bits/stdc++.h>

using namespace std;

class base{
    int a,b,c;

    protected:
    int f;
    
    public:

    int d;
    int sum(int m,int n){
      a=m;
      b=n;
      return a+b;  
    }
};

class val:public base{
    public:
     
};

int main(){
    // val obj;
    // obj.value(5,6);
    
    val obj;
    // obj.f=10;
    cout<<obj.sum(6,7);
}