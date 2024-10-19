#include <stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* left;
  struct node* right ;
};
struct node createleft(struct node*root,int element)
{
  root->left=createnode(element);
  return root->left;
}

struct node  createright(struct node*root,int element)
{
  root->right=createnode(element);
  return root->right;
}
struct node createnode(int element)
{
  struct node newoNode=(struct node)malloc(sizeof(struct node));
  newNode->data=element;
  newnNode->left=NULL;
  newNode->right=NULL;
   return newNode;
}
void preorder(struct node *root)
{
  if(root==NULL)
  {
    return;
  }
  printf("%d",root->data);
  preorder(root->left);
  preorder(root->right);
}
void inorder (struct node*root)
{
  if(root==NULL)
  {
    return;
  }
  inorder(root->left);
  printf("%d",root->data);
  inorder(root->right);
}
void postorder (struct node*root)
{
  if(root==NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("%d",root->data);
  }
  void main()
  {
    struct node*root=createnode(10);
    createleft(root,4);
    createright(root,15);
    preorder(root);
    inorder(root);
    postorder(root);
    return 0;
    
  }