// drifting queue using front and back
#include<iostream>
using namespace std;
int n=10, N=5;
int front=0, back=N-1;
bool isEmpty()
{
	if(front==0 && back==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	if(back==(n-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enQueue(int m[])
{
	if(isFull())
	 cout<<"Queue is already full"<<endl;
	else 
	{
		int value;
		cout<<"Enter the value to enqueue: "<<endl;
		cin>>value;
		back++;
		m[back]=value;
		N++;
	}

}

void deQueue(int m[])
{
	if(isEmpty())
	{ 
	  front=0;
	  cout<<"Queue is already empty"<<endl;	
	}
	else {
		if (front==back)
		 {
		 	m[front]= 0;
		 	front=0;
		 }
		else {
			m[front]= 0;
			front++;
		} 
	}
	
}
int main(){
	int position;
	int arr[n]= {2,4,1,5,6,0,0,0,0,0};
	
	do {
		cout<<"Choose an option to perform a function"<<endl;
		cout<<"0. To exit the function"<<endl;
		cout<<"1. isFull()"<<endl;
		cout<<"2. isEmpty()"<<endl;
		cout<<"3. EnQueue()"<<endl;
		cout<<"4. DeQueue()"<<endl;
		cout<<"5. display()"<<endl;
		cin>>position;
	switch(position){
	
		case 0:
	 	{
	       cout<<"Program eliminated";
	       break;	
		}
		case 1:
	 	{
	       cout<<"isFull() is called"<<endl;
	       isFull();
		   break; 
	  	}
	 	case 2:
	  	{
	  		cout<<"isEmpty() is called"<<endl;
	  		isEmpty();
	  		break;
		}
		case 3:
			{
				cout<<"Enqueue() is called"<<endl;
				enQueue(arr);
				cout<<"New Value entered in the Queue !"<<endl;
				break;
			}
		case 4:
			{
				cout<<"Dequeue() is called"<<endl;
				deQueue(arr);
				break;
			}
		case 5:
			{
				cout<<"Queue after changings is:"<<endl;
				for(int i=0;i<10;i++)	
				cout<<arr[i]<<endl;
				break;
			}
		default:
			{
				cout<<"You have entered inapropriate input"<<endl;	
				break;
			}
		}
	}while(position!=0);
	
	return 0;
}