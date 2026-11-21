/********************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;// T means it can be integrer it can be double 
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

***********/

int searchInLinkedList(Node<int> *head, int k) { // like here it can be interger 
    Node* temp = head;
    while(temp) {
        if(temp->data == val) return 1;
    }
}    
```[cite: 5]