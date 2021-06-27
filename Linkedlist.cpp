#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node(int x)
    :data(x){}
};
class linkedlist{
    public:
    node* head;
    node* tail;
    int size=0;
    node* ptr;
    void append(int n);
    int insert(int n, int k);
    void remove(int r);
    void output();
};
void linkedlist::remove(int r){
    if(size==0){
        cout<<"There is no element in the list to remove"<<endl;
    }
    else if(r<1||r>size){
        cout<<"Choose a valid position of the element you want to be removed"<<endl;
    }
    else if(r==1){
        head=head->next;
        size--;
    }
    else{
        ptr=head;
        for(int i=0;i<r-2;i++){
           ptr=ptr->next;
        }
            if(ptr->next->next==NULL){
                ptr->next=NULL;
            }
            else{
            ptr->next=ptr->next->next;
            }
        size--;
    }
}
int linkedlist::insert(int n, int k){
  if(size==0){
      cout<<"The list is empty."<<endl;
  }
  else if(k<1||k>size){
      cout<<"Choose a valid position."<<endl;
  }
  else{
      node* u= new node(n);
      ptr=head;
      for(int i=0;i<k-1;i++){
          ptr=ptr->next;
      }
      if(ptr==head){
          u->next=head;
          head = u;
      }
      else{
          swap(u->data,ptr->data);
          u->next=ptr->next;
          ptr->next=u;
      }
      size++;
      return 1;
  }
  return 0;
}
void linkedlist::append(int n){
    if(size==0){
        ptr = new node(n);
        head = ptr;
        tail= ptr;
    }
    else{
        ptr = new node(n);
        tail->next = ptr;
        tail=ptr;
    }
    size++;
    
}
void linkedlist::output(){
    if(size==0){
        cout<<"The list is empty"<<endl;
    }
    else{
    ptr=head;
    for(int i=0; i<size; i++){
        cout<<ptr->data<<"->"<<endl;
        ptr=ptr->next;
    }
}
}

int main() {
    linkedlist l;
    int e=0,n,a,p;
    while(e!=1){
        cout<<"1. Append element to the list."<<endl<<"2. Remove an element form the list."<<endl<<"3. Insert an element in the list."<<endl<<"4. Display the list."<<endl<<"5. Exit"<<endl;
        cout<<"choose an option"<<endl;
        cin>>n;
        switch(n){
            case 1: {
                cout<<"Enter the element you want to append."<<endl;
                cin>>a;
                l.append(a);
                cout<<"New list: "<<endl;
                l.output();
                break;
            }
            
            case 2: {
                cout<<"Enter the position of the element you want to be removed."<<endl;
                cin>>a;
                l.remove(a);
                l.output();
                break;
            }
            case 3: {
                cout<<"Enter the element and its position you want it to be inserted at."<<endl;
                cin>>a>>p;
                p=l.insert(a,p);
                if(p==0){
                    cout<<"try again."<<endl;
                }
                else{
                cout<<"New list: "<<endl;
                l.output();
                }
                break;
            }
            case 4:{
                l.output();
                break;
            }
            case 5: {
                cout<<"Exit??";
                e=1;
                break;
            }
            default :{
                cout<<"Enter a valid option."<<endl;
            }
        }
    }
    return 0;
}
     
