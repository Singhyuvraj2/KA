#include <stdio.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

void preorder(node *root)
{
    if (root == NULL)
        return;

    printf("%d->", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    return 0;
}