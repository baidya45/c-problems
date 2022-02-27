#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

int main(){

    node *head;
    node *newNode;
    node *temp;

    head = NULL;
    temp = NULL;


    newNode = new node();
    cout<<"entre the data";
    cin>>newNode->data;
    newNode->next=0;
    if(head==NULL){
        head=temp=newNode;

    }
    else{


    }


 return 0;   
}