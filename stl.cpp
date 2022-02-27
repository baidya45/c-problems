#include<bits/stdc++.h>
#include<array>

using namespace std;

int main(){

    array<int,5> a;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    cout<<"the element at 3rd pos is "<<a.at(2)<<endl;
    cout<<a.back()<<" "<<a.front();
}