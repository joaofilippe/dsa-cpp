#include <iostream>
using namespace std;

class Node
{
    int value;
    Node *next;

public:
    Node *getNext()
    {
        return next;
    };
    int getValue()
    {
        return value;
    };
    void setValue(int v)
    {
         Node::value = v;
    };
    void setNext(Node* n)
    {
        next = n;
    };
    void insertStart(Node*& head, int v)
    {
        Node* node = new Node();
        node->setValue(v);
        node->setNext(head);
        head = node;
    };
    void insertEnd(int v){

    };
    void insertBetweenNode(int v, Node *n){};
};

int main()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one->setValue(1);
    two->setValue(2);
    three->setValue(3);

    one->setNext(two);
    two->setNext(three);
    three->setNext(NULL);

    head = one;

    for (Node *curr = head; curr != NULL; curr = curr->getNext())
    {
        cout << to_string(curr->getValue()) << endl;
    };

    head->insertStart(head, 55);

    return 0;
}