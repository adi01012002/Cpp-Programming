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
ListNode *mergeList1(ListNode *a,ListNode*b){
    ListNode*tempA=a;
    ListNode*tempB=b;
    ListNode*c=new ListNode(100);
    ListNode*tempC=c;
    while(tempA!=NULL && tempB!=NULL){
        if(tempA->val<=tempB->val){
            ListNode*temp=new ListNode(tempA->val);
            tempC->next=temp;
            tempC=temp;
            tempA=tempA->next;
        }
        else {
            ListNode*temp=new ListNode(tempB->val);
            tempC->next=temp;
            tempC=temp;
            tempB=tempB->next;
        }
    }
    if(tempA==NULL){
        tempC->next=tempB;
    }
    else {
        tempC->next=tempA;
    }
    return c->next;
}
ListNode*mergeList2(ListNode*a,ListNode*b){
    ListNode*c=new ListNode(100);
    ListNode*temp=c;
    while(a!=NULL&&b!=NULL){
        if(a->val<=b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else {
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL){
        temp->next=b;
    }
    else {
        temp->next=a;
    }
    return c->next;
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
ListNode*test(ListNode*a,ListNode*b){
    ListNode*c=new ListNode(100);
    ListNode*temp=c;
    while(a!=NULL&& b!=NULL){
        if(a->val<b->val){
            temp->next=a;
            a=a->next;
            temp=temp->next;
        }
        else{
            temp->next=b;
            b=b->next;
            temp=temp->next;
        }
    }
    if(a==NULL){
        temp->next=b;
    }
    else{
        temp->next=a;
    }
    return c->next;
}
int main()
{
    ListNode *a = new ListNode(14);
    ListNode *b = new ListNode(18);
    ListNode *d = new ListNode(71);
    
    ListNode *c = new ListNode(2);
    ListNode *e = new ListNode(53);
    ListNode *f = new ListNode(64);
    ListNode *g = new ListNode(95);
    ListNode *h = new ListNode(236);
    a->next = b;
    b->next = d;

    c->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    display(a);
    cout << endl;
    display(c);
    cout << endl;
    ListNode *ans = mergeList2(a,c);
    display(ans);
}