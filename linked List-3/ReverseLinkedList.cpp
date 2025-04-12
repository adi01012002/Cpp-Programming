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
ListNode *reverse(ListNode *head){
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* Next=NULL;
    while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
        // Next=Next->next;
    }
    return prev;
}

ListNode* ReverseRec(ListNode*head){
    if(head==NULL|| head->next==NULL)return head;
    ListNode*newhead=ReverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    d->next = e;
    e->next = f;
    display(a);
    cout << endl;
    // ListNode *ans = reverse(a);
    ListNode *ans = ReverseRec(a);
    display(ans);
}