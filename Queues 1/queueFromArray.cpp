#include <iostream>
using namespace std;
class Queue
{
public:
    int f;
    int b;
    int n;
    int arr[6];
    int size;

    Queue()
    {
        f = 0;
        b = 0;
        n = 6;
        size = 0;
    }
    // int size(){
    //     return b-f;
    // }
    void push(int val)
    {
        if (b == n)
        {
            cout << "overflow ! Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
        size++;
    }
    void display()
    {
        for (int i = f; i < b; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "underflow ! Queue is empty" << endl;
            return;
        }
        f++;
        size--;
    }
    void front()
    {
        if (f - b == 0)
        {
            cout << "Queue is empty !" << endl;
            return;
        }
        cout << arr[f] << endl;
    }
    void back()
    {
        if (f - b == 0)
        {
            cout << "Queue is empty !" << endl;
            return;
        }
        cout << arr[b - 1] << endl;
    }
    bool isEmpty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
    int size1(){
        return b-f;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.size << endl;
    cout<<q.size1()<<endl;
    q.display();
    q.push(60);
    q.display();
    cout << q.size << endl;
    cout<<q.size1()<<endl;
    q.push(70);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.display();
    q.pop();
    q.pop();
    q.pop();
    q.front();
    q.back();
    cout << q.isEmpty() << endl;
    cout << q.size << endl;
    cout<<q.size1()<<endl;
}