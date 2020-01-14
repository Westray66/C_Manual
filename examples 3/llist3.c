#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node
{
int data;
struct node *parent;
struct node *left;
struct node *right;
} node_str;

#define LEFT(s)   s->left
#define RIGHT(s)  s->right
#define PARENT(s) s->parent
#define DATA(s)   s->data
#define LEFTSIDE  1
#define RIGHTSIDE 2

node_str *create_node(int value)
{
node_str *ptr;

ptr = (node_str*) malloc(sizeof(node_str));

  if (ptr==NULL)
  {
  perror ("failed to allocate memory");
  exit (EXIT_FAILURE);
  }

DATA(ptr)   = value;
LEFT(ptr)   = NULL;
RIGHT(ptr)   = NULL;
PARENT(ptr) = NULL;
return ptr;
}

void display (node_str *n)
{
  if (n==NULL) return;

  printf ("... addr   : 0x%8.8x\n",(unsigned int)n);
  printf ("... data   : %d\n",DATA(n));
  printf ("... parent : 0x%8.8x\n",(unsigned int)PARENT(n));
  printf ("... left   : 0x%8.8x\n",(unsigned int)LEFT(n));
  printf ("... right  : 0x%8.8x\n\n",(unsigned int)RIGHT(n));
  
  display (LEFT(n));
  display (RIGHT(n));
}

void free_tree(node_str *n)
{
  if (n==NULL) return;

free_tree(LEFT(n));
free_tree(RIGHT(n));

printf ("... free(ing) 0x%8.8x\n",(unsigned int)n);
free(n);
}


node_str *attach(node_str *r,node_str *a, int mode)
{
assert ((mode==LEFTSIDE) ||  (mode==RIGHTSIDE));
assert (r!=NULL);
assert (a!=NULL);

  switch(mode)
  {
  case LEFTSIDE:
  LEFT(r) = a;
  break;

  case RIGHTSIDE:
  RIGHT(r) = a;
  break;
  }

PARENT(a) = r;
return a;
}

int main (void)
{
node_str *root;
node_str *tmp;

root=create_node (1);
tmp = attach (root,create_node(2),LEFTSIDE);
tmp = attach (root,create_node(3),RIGHTSIDE);
attach (tmp,create_node(4),LEFTSIDE);

printf ("Binary Tree Linked list \n");
display (root);
free_tree(root);

return 0;
}
