#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node* newnode(int data);
struct node* bst(int arr[],int start, int end)
{
    if(start>end)
    {

        return NULL;
    }
int mid=(start+end)/2;
    struct node *root=newnode(arr[mid]);
    root->left=bst(arr,start,mid-1);
    root->right=bst(arr,mid+1,end);
    return root;
}
struct node* newnode(int data)
{
    struct node* mynode=(struct node*)malloc(sizeof(struct node));
    mynode->data=data;
    mynode->left=NULL;
    mynode->right=NULL;
    return mynode;

}
void preorder(struct node* mynode)
{
    if(mynode==NULL)
    {
        return;
    }
    printf("%d-",mynode->data);
    preorder(mynode->left);
    preorder(mynode->right);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct node *root=bst(arr,0,n-1);
    printf("BST order is");
    preorder(root);

}
