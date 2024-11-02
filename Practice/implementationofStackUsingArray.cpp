#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr;     // Pointer to dynamically allocated array
    int capacity; // Capacity of the stack
    int topIndex; // Index of the top element

public:
    // Constructor to initialize the stack
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity]; // Dynamically allocate memory
        topIndex = -1;           // Stack is initially empty
    }

    // Destructor to free the dynamically allocated memory
    ~Stack()
    {
        delete[] arr;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return topIndex == -1;
    }

    // Function to check if the stack is full
    bool isFull()
    {
        return topIndex == capacity - 1;
    }

    // Function to push an element onto the stack
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = val;
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!" << endl;
            return;
        }
        topIndex--;
    }

    // Function to get the top element of the stack
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty!" << endl;
            return -1; // Return a default value
        }
        return arr[topIndex];
    }
    void display()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Create a stack with capacity 5
    Stack myStack(5);

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Display the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop an element
    myStack.pop();

    // Display the top element again
    cout << "Top element after pop: " << myStack.top() << endl;
    myStack.display();
    return 0;
}
