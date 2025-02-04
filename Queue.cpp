#include<bits/stdc++.h>
using namespace std;

int queu[5];
int front =-1,rear=-1;

void enqueue(int x){
    if((rear+1)%5==front){
        cout<<"Overflow\n";
    }
    else if(front == -1 && rear==-1){
        front=rear=0;
        queu[rear]=x;
    }
}

void dequeue(){
    //krn eikane knw valuei nei
    if(front==-1&& rear==-1){
        cout<<"Underflow\n";
    }
    //front r rear ek jaigay ba value nei
    else if(front==rear){
        front = rear =-1;
    }
    //jehetu samne theke pop ba delete hbe tai..
    else{
        front = (front+1)%5;
    }
}

void display(){
    int i=front;
    if(front ==-1&& rear==-1){
        cout<<"Queue is empty\n";
    }
    else{
        //jotokkhn nh front r rear soman hoi 
        while (i!=rear)
        {
            cout<<queu[i]<<" ";
            i=(i+1)%5;
        }
        cout<<queu[rear]<<endl;
        
    }

}

int main(){
    while (1)
    {
        cout<<"1->Enqueue\n";
        cout<<"2->Dequeue\n";
        cout<<"1->Display\n";
        cout<<"1->Exit\n";

        int a;
        cin>>a;
        switch (a)
        {
        case 1:
            enqueue(a);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        
        default:
        cout<<"not valid\n";
            break;
        }

    }
    
}