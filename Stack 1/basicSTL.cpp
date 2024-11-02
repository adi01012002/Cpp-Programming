#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  // cout << st.size() << endl;

  // // Printing in reverse order->empyting the stack

  // while (st.size() > 0)
  // {
  //   cout << st.top() << " ";
  //   st.pop();
  // }
  // cout << endl;
  // cout << st.size() << endl;

  // Print in a reverse order

  stack<int> temp;
  while (st.size() > 0)
  {
    cout << st.top() << " ";
    // temp.push(st.top());
    // st.pop();
    int x = st.top();
    st.pop();
    temp.push(x);
  }
  cout << endl
       << st.size() << endl;
  while (temp.size() > 0)
  {
    cout << temp.top() << " ";
    st.push(temp.top());
    temp.pop();
  }
  cout << endl;
  cout << st.size() << endl;
}