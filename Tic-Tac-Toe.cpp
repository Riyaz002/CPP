#include<bits/stdc++.h>
using namespace std;
int check(string , int);
void play(string arr){
    int flag=0;
    int x;
    int turns=5;
    while(turns--){
        cout<<"Play Your Turn\n\n";
        cin>>x;
        if(x<1||x>9||arr[x]=='X'||arr[x]=='O'){
            cout<<"Choose valid position!\n\n";
            cout<<"Again, ";
            turns++;
            continue;
        }
        else{
            arr[x]='X';
            flag=check(arr,x);
            if(flag==1){
                cout<<"You Are The Winner!!!\n\n";
                break;
            }
        }
        cout<<"    |     |   \n "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<" \n____|_____|____\n    |     |   \n "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<" \n____|_____|____\n    |     |   \n "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<" \n    |     |   \n\n";
        if(turns==0){
            cout<<"Oops, It Is A Draw!!\n\n";
            break;
        }
        else
        cout<<"Computer's Turn\n\n";
        srand(time(0));
        do{
        x=rand()%10;
        }while(x<1||x>9||arr[x]=='X'||arr[x]=='O');
        if(x>=1&&x<=9&&arr[x]!='X'&&arr[x]!='O'){
            arr[x]='O';
            flag=check(arr,x);
            if(flag==1){
                cout<<"Computer Is The Winner!!!\n\n";
                break;
            }
        }
        cout<<"    |     |   \n "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<" \n____|_____|____\n    |     |   \n "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<" \n____|_____|____\n    |     |   \n "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<" \n    |     |   \n\n";
    }
    cout<<"    |     |   \n "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<" \n____|_____|____\n    |     |   \n "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<" \n____|_____|____\n    |     |   \n "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<" \n    |     |   \n\n";
}
int check(string arr, int n){
    switch(n){
    case 1: if(arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X'||arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O'||arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X'||arr[1]==arr[5]==arr[9]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 2: if(arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X'||arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O'||arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X'||arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 3: if(arr[1]=='X'&&arr[2]=='X'&&arr[3]=='X'||arr[1]=='O'&&arr[2]=='O'&&arr[3]=='O'||arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'||arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'||arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'||arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 4: if(arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X'||arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O'||arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X'||arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 5: if(arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X'||arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O'||arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X'||arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O'||arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X'||arr[1]=='O'&&arr[5]=='O'&&arr[9]=='O'||arr[3]==arr[5]==arr[7]=='X'||arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 6: if(arr[4]=='X'&&arr[5]=='X'&&arr[6]=='X'||arr[4]=='O'&&arr[5]=='O'&&arr[6]=='O'||arr[3]=='X'&&arr[6]=='X'&&arr[9]=='X'||arr[3]=='O'&&arr[6]=='O'&&arr[9]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 7: if(arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X'||arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O'||arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X'||arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O'||arr[3]=='X'&&arr[5]=='X'&&arr[7]=='X'||arr[3]=='O'&&arr[5]=='O'&&arr[7]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 8: if(arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X'||arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O'||arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X'||arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O'){
               return 1;
             }
            else{
                return 0;
             }
    case 9: if(arr[7]=='X'&&arr[8]=='X'&&arr[9]=='X'||arr[7]=='O'&&arr[8]=='O'&&arr[9]=='O'||arr[1]=='X'&&arr[5]=='X'&&arr[9]=='X'||arr[1]=='O'&&arr[5]=='O'&&arr[9]=='O'||arr[3]=='X'&&arr[6]=='X'&&arr[9]=='X'||arr[3]=='O'&&arr[6]=='O'&&arr[9]=='O'){
               return 1;
             }
            else{
                return 0;
            }
}
}

int main() {
    string arr="0123456789";
    cout<<"    |     |   \n "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<" \n____|_____|____\n    |     |   \n "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<" \n____|_____|____\n    |     |   \n "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<" \n    |     |   \n\n";
    cout<<"The numbers are depicting positions!"<<"\nEntering each number will place your mark to its coressponding position.\n\n";
    arr="          ";
    play(arr);
    return 0;
}