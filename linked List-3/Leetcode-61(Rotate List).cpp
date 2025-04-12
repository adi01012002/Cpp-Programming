#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    ListNode *next;
    int val;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
ListNode *rotateList(ListNode *head,int k){
    if(head==NULL||head->next==NULL) return head;
    ListNode *tail = head;
    int n = 0;
    while (tail->next != NULL){
        tail = tail->next;
        n++;
    }
    n++;
    k = k % n;
    ListNode *temp = head;
    for (int i = 0;i < n - k-1; i++){
        temp = temp->next;
    }
    tail->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
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
    ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(20);
    ListNode *c = new ListNode(30);
    ListNode *d = new ListNode(40);
    ListNode *e = new ListNode(50);
    ListNode *f = new ListNode(60);
    ListNode *g = new ListNode(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    cout << endl;
    ListNode *ans = rotateList(a,3);
    display(ans);
}