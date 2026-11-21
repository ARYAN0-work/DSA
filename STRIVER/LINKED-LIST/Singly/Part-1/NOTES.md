# What is struct?

- struct is a keyword in C++ used to create a user-defined data type

> But instead of storing just one value, a structure can group multiple variables together.

``````bash
struct Student {
    int age;
    string name;
};

Here, we created a new data type called Student.

A student can have:
- An age.
- A name.

``````

# NODE

What is Node?
Node is the name of our structure.

We are essentially telling C++:

"Whenever I write Node, I am referring to this custom data type."

Important: Node is not a linked list. It represents one individual node of a linked list.

- Public: This is an access specifier.


````bash

=> bcz we write int data; in struct 

For example:
Node* y = new Node(10);

The node will contain:
+----------+
|   10     |
+----------+

Here, data stores 10.
````

# Node* next;

What is Node*?
- Node is our custom data type.
- * indicates that this variable is a pointer.

> "We are creating a pointer variable called next, which can store the memory address of another Node."

# Why do we need it?

````bash

Imagine we have three nodes:

+------+-------+     +------+-------+     +------+-------+
|  10  |   ●---|---->|  20  |   ●---|---->|  30  | NULL  |
+------+-------+     +------+-------+     +------+-------+

Each node has two things:
1. data → Stores the value.
2. next → Stores the address of the next node.

Node* next;

Inside the first node, next stores the address of the second node.

Remember: next doesn't store the next node's data. It stores its memory address.

````

### Understanding the constructor

Node(int data1, Node* next1) {
    data = data1;
    next = next1;
}

# What is a constructor?
A constructor is a special member function of a class/struct.

Its job is to initialize an object when that object is created.

Important properties:

- Its name must be the same as the class/struct name.
- It has no return type, not even void.
- It executes automatically when an object is created.

````bash

Node(int data1, Node* next1)

| Parameter | Meaning |
|-----------|---------|
| `int data1`   | Receives the data we want to store |
| `Node* next1` | Receives the address of the next node |

data = data1; // Take the value received through data1 and store it in the node's data variable.

SimILARTY: next = next1;
This means:
Take the address received through next1 and store it in the node's next pointer.

``````
