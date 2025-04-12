#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    ListNode *next;
    int val;
    ListNode(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};
ListNode* partition(ListNode *head, int x)
{
    ListNode *lo = new ListNode(1);
    ListNode *hi = new ListNode(2);
    ListNode *tlo = lo;
    ListNode *thi = hi;
    ListNode *temp = head;
    while (temp)
    {
        if (temp->val < x)
        {
            tlo->next = temp;
            tlo = tlo->next;
            temp = temp->next;
        }
        else
        {
            thi->next = temp;
            thi = thi->next;
            temp = temp->next;
        }
    }
    tlo->next = hi->next;
    thi->next = nullptr;
    return lo->next;
}
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(4);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(2);
    ListNode *e = new ListNode(5);
    ListNode *f = new ListNode(2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next=e;
    e->next=f;
    display(a);
    cout<<endl;
    ListNode *ans = partition(a,3);
    display(ans);
}