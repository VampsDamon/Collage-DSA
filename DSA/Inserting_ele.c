#include <stdio.h>
#include <stdlib.h>
struct node
{
  struct node *left;
  int data;
  struct node *right;
};

struct node *smallestNode(struct node *tree)
{
  if (tree == NULL || tree->left == NULL)
    return tree;
  else
    return smallestNode(tree->left);
}
struct node *LargestNode(struct node *tree)
{
  if (tree == NULL || tree->right == NULL)
    return tree;
  else
    return LargestNode(tree->right);
}
void delete(struct node *tree, int val)
{
  struct node *temp;
  if (tree == NULL)
    printf("Element is Not Found\n");
  else if (val < tree->data)
    delete (tree->left, val);
  else if (val > tree->data)
    delete (tree->left, val);
  else if (tree->left && tree->right)
  {
    temp = LargestNode(tree->left);
    tree->data = temp->data;
    delete (tree->left, temp->data);
  }
  else
  {
    temp = tree;
    if (tree->left == NULL && tree->right == NULL)
      tree = NULL;
    else if (tree->left == NULL)
      tree = tree->left;
    else
      tree = tree->right;
  }
  free(temp);
}
struct node *insertEle(struct node *tree, int val)
{
  struct node *ptr, *nodeptr, *parentptr;
  ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = val;
  ptr->left = NULL;
  ptr->right = NULL;
  if (tree == NULL)
  {
    tree = ptr;
    tree->left = NULL;
    tree->right = NULL;
  }
  else
  {
    parentptr = NULL;
    nodeptr = tree;
    while (nodeptr != NULL)
    {
      parentptr = nodeptr;
      if (val < nodeptr->data)
        nodeptr = nodeptr->left;
      else
        nodeptr = nodeptr->right;
    }
    if (val < parentptr->data)
      parentptr->left = ptr;
    else
      parentptr->right = ptr;
  }
  return tree;
}
void preOrder(struct node *tree)
{
  if (tree != NULL)
  {
    printf("%d\t", tree->data);
    preOrder(tree->left);
    preOrder(tree->right);
  }
}
void inOrder(struct node *tree)
{
  if (tree != NULL)
  {
    preOrder(tree->left);
    printf("%d\t", tree->data);
    preOrder(tree->right);
  }
}
void postOrder(struct node *tree)
{
  if (tree != NULL)
  {
    preOrder(tree->left);
    preOrder(tree->right);
    printf("%d\t", tree->data);
  }
}
int main()
{
  int ch, ele;
  struct node *tree ,*temp;
  tree = NULL;

  while (ch != 8)
  {

    printf("1 --> Insert Element\n");
    printf("2 --> Delete Element\n");
    printf(" Display Tree :-\n");
    printf("3 --> in Pre-order\n");
    printf("4 --> in Post-order\n");
    printf("5 --> in In-order\n");
    printf("\n\n6 --> Largest Node\n");
    printf("7 --> Smallest Node\n");
    printf("8 --> Exit\n");
    printf("Enter Your Choice :- ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("Enter element to insert :- ");
      scanf("%d", &ele);
      tree = insertEle(tree, ele);
      break;
    case 2:
      printf("Enter element to delete :- ");
      scanf("%d", &ele);
      delete (tree, ele);
      break;
    case 3:
      printf("\nPre Order :- \n");
      preOrder(tree);
      break;
    case 4:
      printf("\nPost Order :- \n");
      postOrder(tree);
      break;
    case 5:
      printf("\nIn Order :- \n");
      inOrder(tree);
      break;
    case 6:
      //struct node *max;
       temp = LargestNode(tree);
      printf("\n Largest Node :- %d\n", temp->data);
      break;
    case 7:
      //struct node *min;
      temp = smallestNode(tree);
      printf("\n Smallest Node :- %d\n", temp->data); 
    case 8:
      exit(1);
      break;
    default:
      printf("Enter valid Input \n");
    }
  }
  return 0;
}