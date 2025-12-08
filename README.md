# C - Binary Trees

- **[0. New node](./0-binary_tree_node.c)**

	- Write a function that creates a binary tree node

    	- Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
    	- Where parent is a pointer to the parent node of the node to create
    	- And value is the value to put in the new node
    	- When created, a node does not have any child
    	- Your function must return a pointer to the new node, or NULL on failure

WIP

- **[1. List length](./1-list_len.c)**

	- Write a function that returns the number of elements in a linked list_t list.

    	- Prototype: size_t list_len(const list_t *h);


- **[2. Add node](./2-add_node.c)**

	- Write a function that adds a new node at the beginning of a list_t list.

    	- Prototype: list_t *add_node(list_t **head, const char *str);
    	- Return: the address of the new element, or NULL if it failed
    	- str needs to be duplicated
    	- You are allowed to use strdup


- **[3. Add node at the end](./3-add_node_end.c)**

	- Write a function that adds a new node at the end of a list_t list.

    	- Prototype: list_t *add_node_end(list_t **head, const char *str);
    	- Return: the address of the new element, or NULL if it failed
    	- str needs to be duplicated
    	- You are allowed to use strdup


- **[4. Free list](./4-free_list.c)**

	- Write a function that frees a list_t list.

    	- Prototype: void free_list(list_t *head);
