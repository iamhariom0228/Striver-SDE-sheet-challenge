/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* ans = new Node(0), *prev = ans;
    int rem = 0;
    while(num1 && num2){
        int to_add = (num1->data + num2->data + rem);
        Node* newNode = new Node(to_add%10);
        rem = to_add/10;
        prev->next = newNode;
        prev = newNode;
        num1 = num1->next, num2 = num2->next;
    }
    while(num1){
        int to_add = num1->data + rem;
        Node* newNode = new Node(to_add%10);
        rem = to_add/10;
        prev->next = newNode;
        prev = newNode;
        num1 = num1->next;
    }
    while(num2){
        int to_add = num2->data + rem;
        Node* newNode = new Node(to_add%10);
        rem = to_add/10;
        prev->next = newNode;
        prev = newNode;
        num2 = num2->next;
    }
    if(rem!=0){
        Node* newNode = new Node(rem);
        prev->next = newNode;
    }
    return ans->next;
}
