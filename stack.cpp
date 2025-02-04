#include<bits/stdc++.h>
using namespace std;

int stack[8];
int mxStack =8;
int top =-1;

void push(){
    if(top == mxStack-1){
        cout<<"Overflow\n";
    }else{
        int x;
        cin>>x;
        top=top+1;
        stack[top]=x;
    }
}


int main(){
    while (1)
    {
        cout<<"1->Push"<<endl;
        cout<<"2->Pop"<<endl;
        cout<<"3->Display"<<endl;
        cout<<"4->Exit"<<endl;

        int n;
        cin>>n;
        switch (n)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
        
        case 4:
            exit(0);
            break;
        
        default:
            break;
        }
    }
    

}