#include <iostream>
using namespace std;
class Node // user defined data type
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class stack // User Defined Data structure
{
public:
    Node *head;
    int size;
    stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int val)
    { // hear we are push at head of the linked list
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == NULL)
        { // pop from head of the linked list
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            head = head->next;
            size--;
        }
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else
        {
            return head->val;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    cout << st.size << endl;
    st.pop();
    cout << st.top() << endl;
    st.display();
}