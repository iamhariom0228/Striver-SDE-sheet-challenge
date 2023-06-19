/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    int n = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        n++;
    }
    Node* prev = NULL;
    temp = head;
    if(n-K==0) return head->next;

    while(n-K > 0){
        prev = temp;
        temp = temp->next;
        K++;
    }
    prev->next = temp->next;
    return head;
}
