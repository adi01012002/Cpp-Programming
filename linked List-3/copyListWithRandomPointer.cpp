#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
Node *solve(Node *head)
{
    Node *dummy = new Node(0);
    Node *tempC = dummy;
    Node *temp = head;
    while (temp != NULL)
    {
        Node *a = new Node(temp->val);
        tempC->next = a;
        tempC = tempC->next;
        temp = temp->next;
    }
    Node *a = head;
    Node *b = dummy->next;
    unordered_map<Node *, Node *> mp;
    Node *tempa = a;
    Node *tempb = b;
    while (tempb)
    {
        mp[tempa] = tempb;
        tempa = tempa->next;
        tempb = tempb->next;
    }
    for (auto x : mp)
    {
        Node *o = x.first;
        Node *d = x.second;
        Node *oRandom = o->random;
        Node *dRandome = mp[oRandom];
        d->random = dRandome;
    }
    return b;
    }
    int main()
    {
        cout << "hello";
    }