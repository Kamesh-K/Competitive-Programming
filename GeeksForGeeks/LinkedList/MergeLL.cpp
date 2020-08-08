// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node *final;
    if(head_A==NULL)
        return head_B;
    if(head_B==NULL)
        return head_A;
    if(head_A->data>head_B->data)
    {
        final = head_B;
        head_B = head_B->next;
    }
    else
    {
        final = head_A;
        head_A = head_A->next;
    }
    Node *start;
    start = final;
    while(head_A!=NULL && head_B!=NULL)
    {
        if(head_A->data>head_B->data)
        {
            final->next = head_B;
            head_B = head_B->next;
            final = final->next;
        }
        else
        {
            final->next = head_A;
            head_A = head_A->next;
            final = final->next;
        }
    }// code here
    while(head_A)
    {
        final->next = head_A;
        head_A = head_A->next;
        final = final->next;
    }
    while(head_B)
    {
         final->next = head_B;
        head_B = head_B->next;
        final = final->next;
    }
    return start;
}  