#include <iostream>
using namespace std;

class Queue
{
private:
    int arr[6];
    int front, back;
public:
    Queue(){
        front = -1;
        back = -1;
    };

    bool isFull(){
        if(front == 0 && back == 9){
            return true;
        }else{
            return false;
        }
    }

    bool isEmpty(){
        if (front == back){
            return true;
        }else{
            return false;
        }
        
    }

    void enQueue(int x){
        if (isFull())
        {
            cout<<"Queue is already full";
        }else{
            if (front == -1)
            {
                front = 0;
            }
            back ++;
            arr[back] = x;
            cout << x << " " <<endl;
            
        }
    }

    void deQueue(){
        int value;
        if (isEmpty())
        {
            cout<<"Queue is empty";
        }else{
            value = arr[front];
            front++;
        }
    }
    
    void display(){
        cout<<"Elements in the queue:"<<endl;
        if (isEmpty())
        {
            cout<<"Queue is empty";
            exit;
    
        }
        
        for (int i = 0; i < back + 1; i++)
        {
            cout << i << " element is" << arr[i] << endl;
        }
        
    }
};

int main(){
    Queue obj1;
    obj1.deQueue();
    obj1.enQueue(3);
    obj1.enQueue(5);
    obj1.enQueue(7);
    obj1.enQueue(1);
    obj1.enQueue(9);
    obj1.enQueue(2);
    obj1.deQueue();
    obj1.display();

    return 0;
}