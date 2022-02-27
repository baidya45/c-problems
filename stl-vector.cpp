#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(0);
    a.push_back(8);
    a.push_back(5);

    cout<<a.capacity()<<endl<<a.size()<<endl;
 vector<int>::iterator i = a.begin();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(i;i!=a.end();i++){
        cout<<(*i)<<" ";
    }
}