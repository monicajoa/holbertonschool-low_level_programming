# 0x12. C - Singly linked lists

## Singly linked lists Data Structure

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

A linked list is a way to store a collection of elements. Like an array these can be character or integers. Each element in a linked list is stored in the form of a node.

## Node
```bash
(https://he-s3.s3.amazonaws.com/media/uploads/1b099fd.png)
```
A node is a collection of two sub-elements or parts. A data part thatstores the element and a next part that stores the link to the next node.

##linked list
```bash
(https://he-s3.s3.amazonaws.com/media/uploads/1b76d10.png)
```
A linked list is formed when many such nodes are linked together to form a chain. Each node points to the next node present in the order. The first node is always used as a reference to traverse the list and is called HEAD. The last node points to NULL.

## Declaring a Linked list

In C language, a linked list can be implemented using structure and pointers.

```python

struct LinkedList
{
	int data;
	struct LinkedList *next;
};
```
The above definition is used to create every node in the list. The data field stores the element and the next is a pointer to store the address of the next node.


## Creating a Node:

```python
typedef struct LinkedList *node; //Define node as pointer of data type struct LinkedList

node createNode()
{
	node temp; // declare a node
	temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
	temp->next = NULL;// make next point to NULL
	return temp;//return the new node
}
```
typedef is used to define a data type in C.

malloc() is used to dynamically allocate a single block of memory in C, it is available in the header file stdlib.h.

sizeof() is used to determine size in bytes of an element in C. Here it is used to determine size of each node and sent as a parameter to malloc.

The above code will create a node with data as value and next pointing to NULL.


## Add a node to the linked list

```python
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
