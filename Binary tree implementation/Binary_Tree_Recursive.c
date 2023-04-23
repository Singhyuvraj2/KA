#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *create()
{
    node *p;
    int value;
    printf("Enter the data:");
    scanf("%d", &value);
    if (value == -1)
        return NULL;
    p = (node *)malloc(sizeof(node));
    p->data = value;
    printf("Enter data for left of %d:\n", value);
    p->left = create();
    printf("Enter data for right of %d:\n", value);
    p->right = create();

    return p;
}

void leveleorder(node *root){
    node *queue[100];
    int front=0;
    queue[front] = root;

    while(front >= 0){
        printf("%d",queue[front]->data);

        
    }
}
void preOrderI(node *root)
{
    node *stack[100];
    int top = 0;
    stack[top] = root;

    while (top != -1)
    {
        printf("%d->", stack[top]->data);
        if (stack[top]->left == NULL && stack[top]->right == NULL)
        {
            top--;
            continue;
        }
        if (stack[top]->right == NULL)
        {
            stack[top] == root->left;
            continue;
        }
        if (stack[top]->left == NULL)
        {
            stack[top] = root->right;
            continue;
        }
        stack[top++] = root->right;
        stack[top] = root->left;
    }
}
int main()
{
    node *root;
    root = create();

    preOrderI(root);

    return 0;
}