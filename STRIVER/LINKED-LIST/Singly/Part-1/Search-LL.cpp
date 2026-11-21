#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr) { // we can't return the entire LL so we return the head
    Node* head = new Node(arr[0]); // head is alwarys gonna be the first element which is zerp 
    Node* mover = head;// we need to make a mover 
    for(int i = 1;i<arr.size();i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){// you will always given a ptr to the head
    int cnt =0; //  declare cnt and and paste the transversal
    Node*temp = head;
    while(temp){
        cout<<temp-> data << " ";
        temp = temp-> next;
        cnt++;
    }
    return cnt;
}

int checkIfPresnet(Node*head){// always paste the transversa; never ever tamper the head
    Node*temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp-> next;
    }
    return 0;
}

int main() { // here asking that element exist or not
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    cout << cheackIfPresent(head,5);
}
// whenever it is said you have giiven a LL it means you ahve given a head of LL 