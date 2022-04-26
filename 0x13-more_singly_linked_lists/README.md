# 0x13. C - More singly linked lists

## General
- How to use linked lists
- Start to look for the right source of information without too much help


## More Info
**Please use this data structure for this project:**
  ```c
  /**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  *
  */
  typedef struct listint_s
  {
      int n;
      struct listint_s *next;
  } listint_t;

  ```

## Tasks
### 0. Print list
  _mandatory_
  
Write a function that prints all the elements of a listint_t list.

- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes
- Format: see example
- You are allowed to use printf

     **Solution**


### 1. List length
_mandatory_

Write a function that returns the number of elements in a linked listint_t list.

- Prototype: size_t listint_len(const listint_t *h);


### 2. Add node
_mandatory_

Write a function that adds a new node at the beginning of a listint_t list.

- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed


### 3. Add node at the end
_mandatory_

Write a function that adds a new node at the end of a listint_t list.

- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed.



### 4. Free list
_mandatory_

Write a function that frees a listint_t list.

- Prototype: void free_listint(listint_t *head);


### 5. Free
_mandatory_

Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL