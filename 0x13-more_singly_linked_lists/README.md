#C - More singly linked lists

![Linked list](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist_insert_at_start.png)


A Linked List is a linear data structure. Every linked list has two parts, the data section and the address section that holds the address of the next element in the list, which is called a node.

Example:

The firts part is create a structure.
´´´
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
´´´

...After the function

´´´
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	for(i = 0 ; h != '\0' ;  i++)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	}
	return (i);
}

´´´