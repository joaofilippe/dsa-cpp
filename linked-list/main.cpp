#include <iostream>
#include <bits/stdc++.h>
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
        value = v;
    };
    void setNext(Node *l)
    {
        next = l;
    };
    void insertFront(int value)
    {
    }
    void insertBack(int value){

    };
    void insertBetweenNode(int value, Node *node){};
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
    while (head != NULL)
    {
        cout << to_string(head->getValue()) << endl;
        head = head->getNext();
    };

    return 0;
}