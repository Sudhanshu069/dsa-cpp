#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node* next;

//constructor
  Node(int d){
    this->data = d;
    this->next = NULL;
  }
};

Node* sortList(Node* head){
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;

  Node* temp = head;
  while(temp != NULL){
    if(temp->data == 0){
      zeroCount++;
    }
    else if(temp->data == 1){
      oneCount++;
    }
    else if(temp->data == 2){
      twoCount++;
    }
    temp = temp->next;
  }
  temp = head;
  while(temp!= NULL){
    if(zeroCount != 0){
      temp->data = 0;
      zeroCount--;
    }
    else if(oneCount !=0){
      temp->data = 1;
      oneCount--;
    }
    else if(twoCount != 0){
      temp->data = 2;
      twoCount--;
    }
    temp = temp->next;
  }

  return head;
  //time complexity: O(n)  
}

//secondApproach

void populate(Node* &tail, Node* temp){
  tail->next = temp;
  tail = temp;
}

Node* sortList2(Node* head){
  Node* zeroHead = new Node(-1);
  Node* zeroTail = zeroHead;
  Node* oneHead = new Node(-1);
  Node* oneTail = oneHead;
  Node* twoHead = new Node(-1);
  Node* twoTail = twoHead;
  
  Node* temp = head;
  
  //create a separate list
  while(temp != NULL){
    int value = temp->data;

    if(value == 0){
      populate(zeroTail, temp);
    }
    else if(value == 1){
      populate(oneTail, temp);
    }
    else if(value == 2){
      populate(twoTail, temp);
    }

    temp = temp->next;
  }

//merge this list

  if(oneHead->next != NULL){
    zeroTail->next = oneHead->next;
  }
  else{
    zeroTail->next = twoHead->next;
  }

  oneTail-> next = twoHead -> next; 
  twoTail-> next = NULL;

  head = zeroHead-> next;
  delete zeroHead;
  delete oneHead;
  delete twoHead;

  return head;
  //time complexity: O(n) + O(n) + O(n) = 0(n)
  //space complexity: O(1)
}