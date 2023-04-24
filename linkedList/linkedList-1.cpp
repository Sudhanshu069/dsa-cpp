#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // pointer pointing to next Node

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free" << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    //*head is an existing node here
    // new node created
    Node *temp = new Node(d);
    temp->next = head; // pointer pointing to existing node
    head = temp;       // updating head of linked list to new node;
}

void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; // updating tail of new linkedlist;
}

void insertAtPosition(Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt != position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

// printing the node
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// detect loop in a linked list
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "present at : " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        return slow;
    }

    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection ->next;
    }

    return slow;
}

//remove loop
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;
}



/**************driver function******************/
int main()
{
    Node *node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 4);
    // print(head);
    tail->next = head->next;

    // deleteNode(4, head);
    // print(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    // if (floydDetectLoop(head) != NULL)
    // {
    //     cout << "cycle is present" << endl;
    // }
    // else
    // {
    //     cout << "cycle is not present" << endl;
    // }

    Node* loop = getStartingNode(head);
    cout<<"loop starts at: "<<loop-> data<<endl;

    return 0;
}
