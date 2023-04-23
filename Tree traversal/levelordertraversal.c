#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void levelOrderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    struct node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear)
    {

        struct node *current = queue[++front];

        printf("%d ", current->data);

        if (current->left != NULL)
        {
            queue[++rear] = current->left;
        }

        if (current->right != NULL)
        {
            queue[++rear] = current->right;
        }
    }
}

int main()
{
    struct node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    printf("Level Order Traversal: ");
    levelOrderTraversal(root);
    return 0;
}
