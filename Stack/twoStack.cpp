#include <iostream>
using namespace std;

const int n = 10;

class twoStack
{
private:
    int top1, top2;
    int arr[n];
public:
    twoStack(){
        top1 = -1;
        top2 = n;
    };

    bool isFull(){
        if (top1 == top2 - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if (top1 == -1 && top2 == n)
        {
            return true;
        }
        return false;
    }

    void push1(int val){
        if (isFull()){
            cout << "Stack Overflow"<<endl;
        }else{
            top1++;
            arr[top1] = val;
        }
    }

    void push2(int val){
        if (isFull()){
            cout<<"Stack Overflow"<<endl;
        }else{
            top2--;
            arr[top2] = val;
        }
    }

    int pop1(){
        int x;
        if (isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }else{
            x = arr[top1];
            top1--;
            return x;
        }
    }

    int pop2(){
        int x;
        if (isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }else{
            x = arr[top2];
            top2 ++;
            return x;
        }
        
    }

    void display(){
        cout<<"Elements in the queue:"<<endl;
        if (isEmpty())
        {
            cout<<"Queue is empty";
            
        }else{
            for (int i = 0; i < n - 1; i++){
            cout << i << " element is" << arr[i] << endl;
        }
        }
    }
    
};

int main(){
    twoStack obj;
    obj.push1(3);
    obj.push1(9);
    obj.push1(5);

    obj.push2(6);
    obj.push2(8);
    obj.push2(1);

    obj.display();


    return 0;
}


