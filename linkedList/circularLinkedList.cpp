#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found;
        // current representing element wala node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
// traversal
void print(Node *tail)
{
    Node *temp = tail;
    // cout<<tail->data<<" ";
    // while(tail->ext != temp){
    //   cout<<tail->data<<" ";
    //   tail = tail->next;
    // }
    // cout<<endl;

    // another method
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        // empty
        return;
    }
    else
    {
        // non-empty
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if (curr == prev)
        {
            tail = NULL;
        }

        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    // insertNode(tail, 5, 7);
    // print(tail);
    // insertNode(tail, 7, 9);
    // print(tail);
    // insertNode(tail, 5, 6);
    // print(tail);
    // insertNode(tail, 9, 10);
    // print(tail);
    // insertNode(tail, 3, 4);
    // print(tail);

    // deleteNode(tail, 5);
    print(tail);

    if (isCircularList(tail))
    {
        cout << "Linked List is a circular linked list" << endl;
    }
    else
    {
        cout << "IS NOT A CIRCULAR LINKED LIST" << endl;
    }
    return 0;
}