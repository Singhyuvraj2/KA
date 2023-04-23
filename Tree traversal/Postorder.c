#include <stdio.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d->", root->data);
}

int main()
{
    return 0;
}