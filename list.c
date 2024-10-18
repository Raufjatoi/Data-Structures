#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    // If no arguments are passed other than program name, exit
    if (argc == 1)
    {
        printf("No numbers provided.\n");
        return 0;
    }

    node *list = NULL;

    // Create linked list from command line arguments
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = (node*) malloc(sizeof(node)); // Explicit cast to node*
        if (n == NULL)
        {
            // If malloc fails, free the entire list and return
            while (list != NULL)
            {
                node *tmp = list->next;
                free(list);
                list = tmp;
            }
            return 1;
        }

        n->number = number;
        n->next = list;
        list = n;
    }

    // Print the whole list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Free the memory allocated for the list
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

    return 0;
}
