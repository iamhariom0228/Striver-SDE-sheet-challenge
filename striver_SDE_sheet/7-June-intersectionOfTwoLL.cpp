/****************************************************************

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

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_set<Node*> st;
    while(firstHead || secondHead){
        if(firstHead){
            if(st.find(firstHead)!=st.end()) return firstHead->data;
            else st.insert(firstHead);
            firstHead = firstHead->next;
        }
        if(secondHead){
            if(st.find(secondHead)!=st.end()) return secondHead->data;
            else st.insert(secondHead);
            secondHead = secondHead->next;
        }
    }
    return NULL;
}