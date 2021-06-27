#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node(int n ): data(n){

    }
};
class stack{
    public:
    node* head=NULL;
    node* ptr=NULL;
    int size=-1;
    void push(int x);
    int pop();
    int display();
    int peak();
};
void stack::push(int x){
    if(size==-1){
        head= new node(x);
        ptr=head;
        size++;
    }  
    else{
        ptr->next= new node(x);
        ptr=ptr->next;
        size++;
    }
}
int stack::pop(){
    if(size==-1){
        cout<<"Stack is empty, underflow";
        return 0;
    }
    else{
        ptr=head;
        for(int i=0 ; i<size-1 ; i++){
              ptr=ptr->next;
              size--;
        }
        ptr->next=NULL;
    }
    return 0;
}
int stack::display(){
    if(size==-1){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        ptr=head;
        for(int i=0 ; i<=size ; i++){
              cout<<ptr->data<<endl;
              ptr=ptr->next;
        }
        
    }
    return 0;
}
int stack::peak(){
    if(size==-1){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        
        cout<<ptr->data<<endl;

    }
    return 0;
}
int main(){

    int n,x,e=0;
    stack s;
    while(e!=1){

        cout<<"1. Push an element to the stack"<<endl<<"2. Pop and element from the stack"<<endl<<"3. Display all the elements"<<endl<<"4. Exit"<<endl;
        cout<<"Choose an option"<<endl;
        cin>>n;
        switch(n){
            case 1: cout<<"Enter the element you want to push: ";
                    cin>>x;
                    s.push(x);
                    break;

            case 2: s.pop();
                    cout<<"Element has been popped"<<endl;
                    break;

            case 3: cout<<"================================="<<endl<<endl;;
                    s.display();
                    cout<<endl<<"================================="<<endl;
                    break;

            case 4: cout<<"__"<<endl;
                    cout<<"|_";
                    s.peak();
                    cout<<"_|"<<endl;
                    break;
                
                case 5: e=1;
                        break;

                default: cout<<"Choose a valid option"<<endl;
        }
    }
    return 0;
}