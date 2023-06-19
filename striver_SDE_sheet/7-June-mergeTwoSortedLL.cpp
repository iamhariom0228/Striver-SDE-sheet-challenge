#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* ans = new Node<int>(0), *prev = ans;
    while(first && second){
        if(first->data < second->data){
            Node<int>* newNode = new Node<int>(first->data);
            prev->next = newNode;
            prev = newNode;
            first = first->next;
        }else {
            Node<int>* newNode = new Node<int>(second->data);
            prev->next = newNode;
            prev = newNode;
            second = second->next;
        }
    }
    while(first){
        Node<int>* newNode = new Node<int>(first->data);
        prev->next = newNode;
        prev = newNode;
        first = first->next;
    }
    while(second){
        Node<int>* newNode = new Node<int>(second->data);
        prev->next = newNode;
        prev = newNode;
        second = second->next;
    }
    return ans->next;
}
