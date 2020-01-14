#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node
{
int data;
struct node *next;
} node_str;

#define NEXT(s) s->next
#define DATA(s) s->data

node_str *create_node(int value)
{
node_str *ptr;

ptr = (node_str*) malloc(sizeof(node_str));

  if (ptr==NULL)
  {
  perror ("failed to allocate memory");
  exit (EXIT_FAILURE);
  }

DATA(ptr) = value;
NEXT(ptr) = NULL;
return ptr;
}

void display (node_str *n)
{
assert(n!=NULL);

printf ("Single Linked list \n");
  do
  {
  printf ("... addr : 0x%8.8x\n",(unsigned int)n);
  printf ("... data : %d\n",DATA(n));
  printf ("... next : 0x%8.8x\n\n",(unsigned int)NEXT(n));
  n = NEXT(n);
  }
  while (n!=NULL);
}

int main (void)
{
node_str *root;

root=create_node (1);
NEXT(root) = create_node (2);
NEXT(NEXT(root)) = create_node(3);

display (root);

free (NEXT(NEXT(root)));
free (NEXT(root));
free (root);
return 0;
}
