# 0x12. C - Singly linked lists

## Singly linked lists

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

A linked list is a way to store a collection of elements. Like an array these can be character or integers. Each element in a linked list is stored in the form of a node.

## Node

![imagen de node](https://he-s3.s3.amazonaws.com/media/uploads/1b099fd.png)

A node is a collection of two sub-elements or parts. A data part thatstores the element and a next part that stores the link to the next node.

## linked list

![imaagen de linked list](https://he-s3.s3.amazonaws.com/media/uploads/1b76d10.png)

A linked list is formed when many such nodes are linked together to form a chain. Each node points to the next node present in the order. The first node is always used as a reference to traverse the list andis called HEAD. The last node points to NULL.

## Declaring a Linked list

In C language, a linked list can be implemented using structure and pointers.

```C

struct LinkedList
{
	int data;
	struct LinkedList *next;
};
```
The above definition is used to create every node in the list. The data field stores the element and the next is a pointer to store the address of the next node.


## Creating a Node

```C
typedef struct LinkedList *node; //Define node as pointer of data type struct LinkedList

node createNode()
{
	node temp; // declare a node
	temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
	temp->next = NULL;// make next point to NULL
	return temp;//return the new node
}
```
- typedef is used to define a data type in C.

- malloc() is used to dynamically allocate a single block of memory in C, it is available in the header file stdlib.h.

- sizeof() is used to determine size in bytes of an element in C. Here it is used to determine size of each node and sent as a parameter to malloc.


The above code will create a node with data as value and next pointing to NULL.


## Add a node to the linked list

```C
node addNode(node head, int value)
{
	node temp,p;// declare two nodes temp and p
	temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
	temp->data = value; // add element's value to data part of node
	if(head == NULL){
		head = temp;     //when linked list is empty
	}
	else{
		p  = head;//assign head to p 
		while(p->next != NULL){
			p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
		}
		p->next = temp;//Point the previous last node to the new node created.
	}
	return head;
}
```
Here the new node will always be added after the last node. This is known as inserting a node at the rear end.


## Arrays vs Linked List

![imagen comparativa](https://camo.githubusercontent.com/657c1f2ddd4a53812fd97885dd426935d5739aba/68747470733a2f2f7777772e7374756479746f6e696768742e636f6d2f646174612d737472756374757265732f696d616765732f61727261792d76732d6c696e6b65642d6c6973742e706e67)

- [ ] We can add elements indefinitely to a linked list
- [x] We can add elements indefinitely to an array
- [x] Linked list can contain as value a structure
- [x] Array can contain as value a structure
- [x] We can easily removed an element from a Linked list
- [ ] We can easily removed an element from an Array
- [ ] Memory is aligned for a Linked list - each elements are back to back in the memory
- [x] Memory is aligned for an Array - each elements are back to back in the memory

## What is a data structure?

Data structures, as the term implies, are a way of structuring data in order to efficiently store, find, use, and create data, depending on the task at hand.

A data structure is a particular way of organizing data in a computerso that it can be used effectively.

```C
Example

we can store a list of items having the same data-type using the array data structure.
```

![Imagen data Structure](https://media.geeksforgeeks.org/wp-content/uploads/array-2.png)
