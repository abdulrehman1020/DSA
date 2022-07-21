#include <iostream>
using namespace std;

const int n = 5;

class stack
{
private:
   int arr[n];
   int top;
public:
    stack(){
        top = -1;
    }

    bool isFull(){
        if(top == n - 1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    void push(int val){
        if(isFull()){
            cout <<"Stack Overflow"<<endl;
        }else{
            top++;
            arr[top] = val;
        }
    }

    int pop(){
        int value;
        if (isEmpty())
        {
            cout <<"Stack is empty"<<endl;
        }else{
            value = arr[top];
            top --;
        }
        return value;
    }

    void top (){
        if (isEmpty())
        {
            cout <<"Stack is empty"<<endl;
        }
        else{
            cout << "TOP: " <<arr[top]<<endl;
        }
    }
    

    void display(){
        cout<<"Elements in stack"<<endl;
        if (isEmpty())
        {
            cout <<"Stack is empty"<<endl;
        }else{
            for (int i = 0; i < top; i++)
            {
                cout <<arr[i]<<endl;
            }
            
        }
        
    }

};


int main(){
    stack obj;
    obj.push(3);
    obj.push(4);
    obj.push(2);
    obj.push(6);

    obj.display();

    return 0;
}