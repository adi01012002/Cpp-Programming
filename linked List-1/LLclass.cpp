#include <iostream>
using namespace std;
class Node
{ // user definde data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
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
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtidx(int idx, int val)
    {
        if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
        else if (idx < 0 || idx > size)
            cout << "Invalid idx";
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid idx";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 0; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
            cout << "Underflow";
        if (size > 0)
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Underflow";
            return;
        }
        if (size == 1)
        {
            head = tail = NULL;
            cout << "exit";
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "Invalid Index";
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
                temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main()
{
    LinkedList ll;       //{ }
    ll.insertAtTail(10); //{10}
    ll.display();
    ll.insertAtTail(20); //{10->20}
    ll.display();
    ll.insertAtTail(30); //{10->20->30}
    ll.insertAtTail(40); //{10->20->30->40}
    ll.display();
    ll.insertAtHead(50); //{50->10->20->30->40}
    ll.display();
    // cout<<ll.size;
    ll.insertAtidx(3, 70); //{50->10->20->70->30->40}
    ll.display();
    cout << ll.getAtIdx(5) << endl;
    cout << ll.size << endl;
    ll.deleteAtHead(); //{10->20->70->30->40}
    ll.display();
    // cout<<ll.size;
    ll.deleteAtTail(); //{10->20->70->30}
    ll.display();
    ll.deleteAtIdx(2); //{10->20->30}
    ll.display();
    // cout<<ll.size;
}