#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
Node *s=head;
Node *r;
while(k!=0&&s!=NULL)
{
r=s;
k--;
s=s->next;
}
if(s==NULL)
{
return head;
}
else
{
r->next=NULL;
r=head;
head=s;
while(s->next!=NULL)
{
s=s->next;
}
s->next=r;
return head;
}
}
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
