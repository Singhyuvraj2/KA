#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;


void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d->", root->data);
    inorder(root->right);
}

int main()
{
    int size = 15;
    int treeinput[size];
    node *arrOfnodes[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &treeinput[i]);
    }

    for (int i = 0; i < size; i++)
    {

        node *root = (node *)malloc(sizeof(node));
        root->data = treeinput[i];

        arrOfnodes[i] = root;
    }

    for (int i = 0; i < size; i++)
    {
        if (arrOfnodes[i]->data == -1)
            continue;

        arrOfnodes[i]->left = arrOfnodes[2 * i + 1];
        if (arrOfnodes[i]->left->data == -1)
            arrOfnodes[i]->left = NULL;

        arrOfnodes[i]->right = arrOfnodes[2 * i + 2];
        if (arrOfnodes[i]->right->data == -1)
            arrOfnodes[i]->right = NULL;
    }
    inorder(arrOfnodes[0]);
    return 0;
}