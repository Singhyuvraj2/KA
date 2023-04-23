#include <stdio.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d->", root->data);
    inorder(root->right);
}

int main()
{
    return 0;
}