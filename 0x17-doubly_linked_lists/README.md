# 0x17.C - Doubly Linked Lists.

In this project, the what and how to use a Doubly Linked List was learnt.

## Tests :light_check_mark:

## Function Prototypes :floppy_disk:

Prototypes for functions written in this project:

| File                               | Prototype                                      |
| ---------------------------------- | ---------------------------------------------- |
| `0-print_dlistint.c`               | `size_t dlistint_len(const dlistint_t *h)`     |                                     
| `1-dlistint_len.c`                 | `size_t dlistint_len(const dlistint_t *h)`|
| `2-add_dnodeint.c`                 | `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`|
| `3-add_dnodeint_end.c`             | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`|
| `4-free_dlistint.c`                | `void free_dlistint(dlistint_t *head)`|
| `5-get_dnodeint.c`                 | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`|
| `6-sum_dlistint.c`                 | `int sum_dlistint(dlistint_t *head)`|
| `7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c` | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`|
| `8-delete_dnodeint.c`              | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`|


## Tasks :page_with_curl:

* **0. Print list**
  * [0-print_dlistint.c](./a): Write a function that prints all the elements of a dlistint_t list.
  * Return: the number of nodes

* **1. List length**
  * [1-dlistint_len.c](./b): Write a function that returns the number of elements in a linked dlistint_t list.

* **2. Add node**
  * [2-add_dnodeint.c](./c): Write a function that adds a new node at the end of a dlistint_t list.
  * Return: the address of the new element, or NULL if it failed.

* **3. Add node at the end**
  * [3-add_dnodeint_end.c](./d): Write a function that adds a new node at the end of a dlistint_t list.
  * Return: the address of the new element, or NULL if it failed.

* **4. Free list**
  * [4-free_dlistint.c](./e): Write a function that frees a dlistint_t list.

* **5. Get node at index**
  * [5-get_dnodeint.c](./h): Write a function that returns the nth node of a dlistint_t linked list.
  * where index is the index of the node, starting from 0
  * if the node does not exist, return NULL

* **6. Sum list**
  * [6-sum_dlistint.c](./i): Write a function that returns the sum of all the data (n) of a dlistint_t linked list. 
  * if the list is empty, return 0

* **7. Insert at index**
  * [7-insert_dnodeint.c](./j): Write a function that inserts a new node at a given position.
  * where idx is the index of the list where the new node should be added. Index starts at 0
  * Returns: the address of the new node, or NULL if it failed
  * if it is not possible to add the new node at index idx, do not add the new node and return NULL
  * Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction

* **8. Delete at index**
  * [8-delete_dnodeint.c](./k): Write a function that deletes the node at index index of a dlistint_t linked list.
  * where index is the index of the node that should be deleted. Index starts at 0
  * Returns: 1 if it succeeded, -1 if it failed

* **9. Crackme4**
  * [100-password]: Find the password for crackme4.
  * Save the password in the file 100-password
  * Your file should contain the exact password, no new line, no extra space  * Hint: The program prints “OK” when the password is correct

* **10. Palindromes**
  * [102 result]: A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
  * Find the largest palindrome made from the product of two 3-digit numbers. * Save the result in the file 102-result
  * Your file should contain the exact result, no new line, no extra space

* **11. crackme5**
  * [103-keygen.c]: Write a keygen for crackme5.
  * Usage of the crackme: ./crackme5 username key
  * The crackme will segfault if you do not enter the correct key for the user
  * Usage for your keygen: ./keygen5 username
  * Your keygen should print a valid key for the username
