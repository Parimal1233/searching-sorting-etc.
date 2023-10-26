#include <bits/stdc++.h> 
using namespace std; 
  

class Node { 
public: 
    int data; 
    Node* next; 
   
    Node() 
    { 
        data = 0; 
        next = NULL; 
    } 
    
}; 

int main(){
    

    Node* newNode1 = new Node;
    newNode1 -> data = 10;

    Node* newNode2 = new Node;
    newNode2 -> data = 20;

    Node* newNode3 = new Node;
    newNode3 -> data = 30;

    Node* newNode4 = new Node;
    newNode4-> data = 40;

    newNode1->next = newNode2;
    newNode2->next = newNode3;
    newNode3->next = newNode4;

    cout<<"Data1 :"  <<  newNode1 -> data << " self-address1 :" << newNode1 << " nextaddress :" << newNode1->next << endl;
    cout<<"Data2 :"  <<  newNode2 -> data << " self-address2 :" << newNode2 << " nextaddress :" << newNode2->next << endl;
    cout<<"Data3 :"  <<  newNode3 -> data << " self-address3 :" << newNode3 << " nextaddress :" << newNode3->next;

    cout<<"Print through loop: "<<endl;
    
    Node* temp = newNode1;
    while(temp!=NULL){
        cout<<"Data :"  <<  temp -> data << " self-address :" << temp << " nextaddress :" << temp->next << endl;
        temp = temp->next;
    }
}
