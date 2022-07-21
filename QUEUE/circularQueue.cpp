#include <iostream>
using namespace std;
const int n = 5;
class circularQueue
{
private:
    int front, back;
    int arr[n];
public:
    circularQueue(){
        front = -1;
        back = -1;
    };

    bool isFull(){
        if ((front ==0 && back == n - 1) && (back == front - 1))
        {
            return true;
        }
        else{
            return false;
        }
        
    }

    bool isEmpty(){
        if (front == -1 && back == -1)
        {
            return true;
        }else{
            return false;
        }
    }

    void enQueue(int val){
        if(isFull()){
            cout << "Queue Overflow"<<endl;
        }else{
            if (front == -1) front = 0;
            back = (back + 1) % n;
            arr[back] = val;
        }
    }

    void deQueue(){
        int value;
        if(isEmpty()){
            cout<<"Queue is empty";
        }else{
            value = arr[front];
            if(front == back){
                front =-1;
                back =-1;
            }else{
                front = (front + 1) % n;
            }
        }
    }

    void display(){
        cout<<"Elements in the queue:"<<endl;
        if (isEmpty())
        {
            cout<<"Queue is empty";
            exit;
        }
        
        for (int i = 0; i != back; i = (i + 1) % n)
        {
            cout << i << " element is" << arr[i] << endl;
        }
        
    }   
};


int main(){
    circularQueue obj;
    obj.enQueue(3);
    obj.enQueue(8);
    obj.enQueue(6);
    obj.enQueue(2);

    obj.display();
    obj.deQueue();
    // obj.display();
    return 0;
}