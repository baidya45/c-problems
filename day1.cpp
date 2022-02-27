// C++ program to demonstrate static
// member function in a class
#include<iostream>
using namespace std;

// class com{
//     int a,b;
//     public:

//     void setData(int n1,int n2){
//         a=n1;
//         b=n2;
//     }

//     friend com Sum(com ,com);
//     void print(){
//         cout<<"your complex number is "<<a<<" "<<"+"<<" "<<b<<"i"<<endl;
//     }

// };

class test{
    public:
    
    int a;

    test(){
        a=34;
    }

    // test(test &x){
    //     a=x.a;
    //     cout<<"copy cons called "<<a;
    // } 
    
};

// com Sum(com c1,com c2){
//     com c3;
//     c3.setData((c1.a+c2.a),(c1.b+c2.b));
//     return c3;
// }

int main()
{
   test obj1;
   test obj2(obj1);
   cout<<obj2.a;
     return 0;
    
}
