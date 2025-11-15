#include<iostream>
using namespace std;
class node {
    public:
    int data;
    public:
    node* link;
    public:
    node(int a) {
        data=a;
        link=NULL;
    }
};
class stack {
    int capacity;
    int currentsize;
    node* top;
    public:
    stack(int c) {
        capacity=c;
        currentsize=0;
        top=NULL;
    }
    void push(int a) {
        if(currentsize==capacity) cout<<"Overflow"<<endl;
        else {
        node* temp=new node(a);
        temp->link=top;
        top=temp;
        currentsize++;
    }
    }
    void isempty() {
        if(top==NULL) cout<<"yes empty"<<endl;
        else cout<<"Not empty"<<endl;
    }
    void isfull() {
        if(currentsize==capacity) cout<<"yes full"<<endl;
        else cout<<"not full"<<endl;
    }
    void pop() {
        node* temp=top;
        top=top->link;
        delete temp;
    }
    void printstack() {
        node* ptr=top;
        while(ptr!=NULL) {
            cout<<ptr->data<<" ";
            ptr=ptr->link;
        }
        cout<<endl;
    }
};
int main() {
    stack s1(5);
    s1.isempty();
    s1.isfull();
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.isfull();
    s1.push(60);
    s1.printstack();
    s1.pop();
    s1.printstack();
}
