#include<iostream>
using namespace std;
class stack{
    public:
    int size=-1;
    int* ptr=NULL;
    stack(int n)
    {
       ptr= new int[n];
    }
    int push(int n);
    int pop();
    int display();
    int peak();

};
int stack::push(int n){
    if(size==n){
        cout<<"Stack is full, Overflow!"<<endl;
        return 0;
    }
    else{
        size++;
        ptr[size]=n; 
    }
    return 0;
}
int stack::pop(){
    if(size==-1){
        cout<<"Stack is empty, Underflow!"<<endl;
        return 0;
    }
    else{
        cout<<ptr[size]<<" has been deleted"<<endl;
        size--;
    }
    return 0;
}
int stack::display(){
    if(size==-1){
        cout<<"There is no item in the stack to display."<<endl;
        return 0;
    }
    else{
       for(int i=0;i<=size;i++){
           cout<<ptr[i]<<endl;
 
       }
    }
    return 0;
}
int stack::peak(){
    if(size==-1){
        cout<<"There is no item in the stack to peak at."<<endl;
        return 0;
    }
    else{
         cout<<ptr[size];
       }
    
    return 0;
}

int main(){
    stack s(5);
    s.push(3);
    s.push(6);
    s.push(32);
    s.push(1);
    s.display();
    s.peak();
}