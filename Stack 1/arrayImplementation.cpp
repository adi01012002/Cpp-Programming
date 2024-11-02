#include <iostream>
using namespace std;
class stack
{
private:
    int arr[5];
    int idx;
    // int idx = -1;
public:
    stack() // constructor
    {
        idx = -1;
    }
    void push(int val)
    {
        if (idx == sizeof(arr) / sizeof(arr[0]) - 1)
        {
            cout << "Stack is Full" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack st;
    // st.pop();
    // st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(60);
    st.push(60);
    st.push(60);
    st.display();
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top();
}