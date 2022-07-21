//Priority Queue
#include<iostream>
using namespace std;
int n=20,N;
bool isFull(){
    if(N==n){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(N==0){
        return true;
    }else{
        return false;
    }
}

void LowEnQueuePriority(int ar[]){
    if(isFull()){
        cout<<"array is full not performing enqueue operation"<<endl;
    }else{
        int val;
        cout<<"please Enter the value for enQueue operation:";
        cin>>val;
        ar[N]=val;
        N++;

    }
}
void HighEnQueuePriority(int ar[]){
    if(isFull()){
        cout<<"array is full not performing enqueue operation"<<endl;
    }else{
        int val;
        cout<<"please Enter the value for enQueue operation: ";
        cin>>val;
        for(int i=N;i>0;i--){
            ar[i]=ar[i-1];
        }
        ar[0]=val;
        N++;

    }
}
void deQueue(int ar[]){
    for(int i=0;i<N;i++){
        ar[i]=ar[i+1];
    }
    ar[N-1]=0;
    N--;

}
int main(){
    int arr[n] ={1,2,3,4,5,67,8,9};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            N++;
        }
    }

    int i=0,getVal;
    do{
        cout<<endl<<"\n\t********Menu********";
            cout<<"\n\t*                                              *";
            cout<<"\n\t*    1.Enter 0 if Exit                         *";
            cout<<"\n\t*    2.Enter 1 if perform top at head EnQueue  *";
            cout<<"\n\t*    3.Enter 2 if perform top at head DeQueue  *";
            cout<<"\n\t*                                              *";
            cout<<"\n\t******************";
            cout<<endl;
            cout<<"Please select the option which your perform: ";
            cin>>getVal;
            switch(getVal){
            case 0:
                exit(0);
                break;
            case 1:
                {
                    int i=0,getValue;
                do{
                    cout<<endl<<"\n\t********Menu********";
                cout<<"\n\t*                                              *";
                cout<<"\n\t*  1.Enter 0 if Exit                           *";
                cout<<"\n\t*  2.Enter 1 if perform high priority enQueue  *";
                cout<<"\n\t*  3.Enter 2 if perform low priority enQueue   *";
                cout<<"\n\t*                                              *";
                cout<<"\n\t******************";
                cout<<endl;
                cout<<"Please select the option which your perform: ";
                cin>>getValue;
                if(getValue==0){
                    break;
                }else if(getValue==1){
                    cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        cout<<endl;
                    HighEnQueuePriority(arr);
                    cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }

                }else if(getValue==2){
                    cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        cout<<endl;
                    LowEnQueuePriority(arr);
                    cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                }else{
                    cout<<"Please Enter the valid number for EnQueue"<<endl;
                }
                }while(i<1);
                }

                break;
            case 2:
                cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        cout<<endl;
                deQueue(arr);
                cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                break;
            default:
                cout<<"Please Enter the valid number";
                break;
            }
    }while(i<1);
}