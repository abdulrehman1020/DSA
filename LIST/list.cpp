#include<iostream>
using namespace std;

int N=5,n=10;
int ar[10]={2,4,5,2,9};
bool isFull(){
    if(N==n){
        return true;
    }else{
        return false;
    }
}
bool isempty(){
	if(N==0){
		return true;
	}else{
		return false;
	}
}

void insertAtStart(int ar[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int value;
        cout<<"\nPlease Enter the value  ";
        cin>>value;
        for(int i=N;i>0;i--){
            ar[i]=ar[i-1];
        }
        ar[0]=value;
        N++;
}}
    void insertAtbetween(int ar[]){
    	if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int index,value;
        cout<<"\nPlease Enter the index: ";
        cin>>index;
        cout<<"\nPlease Enter the value: ";
        cin>>value;
        for(int i=N;i>index;i--){
            ar[i]=ar[i-1];
        }
        ar[index]=value;
        N++;
    }

}
void insertAtend(int ar[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int value;
        cout<<"\nPlease Enter the value: ";
        cin>>value;
        ar[N]=value;
        N++;
    }

}
void deleteAtend(int ar[]){
	if(isempty()){
	cout<<"array is empty"<<endl;
}else{
	ar[N-1]=0;
	N--;
	}
}

void deleteAtstart(int ar[]){
		if(isempty()){
	cout<<"array is empty"<<endl;
}else{
	for(int i=0;i<N;i++)
	ar[i]=ar[i+1];
	ar[N-1]=0;
	N--;
}
}
	
void deleteAtbetween(int ar[]){
		if(isempty()){
	cout<<"array is empty"<<endl;
}else{
	int index;
	cout<<"Enter the index: ";
	cin>>index;
	if(index!=0 && index!=N-1){
		for(int i=index;i<N;i++){
			ar[i]=ar[i+1];
	        ar[N-1]=0;
	        N--;
		}
	}
}
}
void SearchOnce(int ar[]){
	int k;
	if(!isempty()){
		cout<<"Enter the value to search "<<endl;
		cin>>k;
		for(int i=0;i<N;i++){
			if(k==ar[i]){ 
				cout<<"value found at index"<<i<<endl;
		}
			if (i==N){
				cout<<"value not found! "<<endl;
			}
		}
		
	}
}

void SearchMultiple(int ar[]){
	int k,a=0;
	if(!isempty()){
		cout<<"enter the value :"<<endl;
		cin>>k;
		for(int i=0;i<N;i++){
		if(k==ar[i]){
		a++;
	}
}	 if(a==0){
		cout<<"value not found"<<endl;
		}
		else{
			cout<<"value found "<<a<< " times"<<endl;
		}
		
	    }
    }
void SearchAndUpdate(int ar[]){
	int k,R;
	if(!isempty()){
		cout<<"Enter value to find"<<endl;
		cin>>k;
		for(int i=0;i<N;i++){
			if(k==ar[i]){
				cout<<"enter value to replace"<<endl;
				cin>>R;
				ar[i]=R;
				break;
			}
		}
	             int i;	
				if (i==N){
					cout<<"value not found"<<endl;
				}
				else{
					cout<<"value found and replace at index"<<ar[i]<<endl;
				}
			}
}



 int main(){
 	int i=0;
  	int get;
 	do{
        cout<<endl<<"\n\t***Menu**";
            cout<<"\n\t*                                 *";
            cout<<"\n\t*  1)Enter 0 if Exit              *";
            cout<<"\n\t*  2)Enter 1 if insert value      *";
            cout<<"\n\t*  3)Enter 2 if delete value      *";
            cout<<"\n\t*  4)Enter 3 if search value at once     *";
            cout<<"\n\t*  5)Enter 4 if search value multiple times    *";
            cout<<"\n\t*  5)Enter 5 if search and update value    *";

            cout<<"\n\t*                                 *";
            cout<<"\n\t*****";
            cout<<endl;
            cout<<"Please Select the option: ";
            cin>>get;
            switch(get){
            	case 0:
            		exit(0);
            		break;
            	case 1:
            		do{
                cout<<endl<<"\n\t***Menu***";
                cout<<"\n\t*                                  *";
                cout<<"\n\t*  1.Enter 0 if Exit               *";
                cout<<"\n\t*  2.Enter 1 if insert at First    *";
                cout<<"\n\t*  3.Enter 2 if insert at Between  *";
                cout<<"\n\t*  4.Enter 3 if insert at End      *";
                cout<<"\n\t*                                  *";
                cout<<"\n\t******";
                cout<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                      }
                      insertAtStart(ar);
                      cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                      for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                      }
                    }else if(getter==2){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                        }
                        insertAtbetween(ar);
                        cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<ar[i]<<",";
                        }
                    }else if(getter==3){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                        }
                        insertAtend(ar);
                        cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<ar[i]<<",";
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                   
			}
			 while(i<2);
			 
		        case 2:
            		do{
                cout<<endl<<"\n\t***Menu***";
                cout<<"\n\t*                                  *";
                cout<<"\n\t*  1.Enter 0 if Exit               *";
                cout<<"\n\t*  2.Enter 1 if delete at First    *";
                cout<<"\n\t*  3.Enter 2 if delete at Between  *";
                cout<<"\n\t*  4.Enter 3 if delete at End      *";
                cout<<"\n\t*                                  *";
                cout<<"\n\t******";
                cout<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                      }
                    deleteAtstart(ar);
                      cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                      for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                      }
                    }else if(getter==2){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                        }
                        deleteAtbetween(ar);
                        cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<ar[i]<<",";
                        }
                    }else if(getter==3){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                        }
                        deleteAtend(ar);
                        cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<ar[i]<<",";
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                   }
			 while(i<2);
			   case 3:
                SearchOnce(ar);
            break;
            case 4:
                SearchMultiple(ar);
            break;
            case 5:
                SearchAndUpdate(ar);

                cout<<"\tArray after updating"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<ar[i]<<",";
                        }
                        break;
            	
            default:
                cout<<"please Enter the valid number"<<endl;
        }
			 
		}
		while(i<2);
	 return 0;
}