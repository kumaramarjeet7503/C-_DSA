#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * CreateNode(int data)
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

int IsBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if(root!=NULL)
    {
        if(!IsBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return IsBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    // Constructing first Node
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 145;
    p->left = NULL;
    p->right = NULL;

    // Constructing second Node
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->data = 13;
    p1->left = NULL;
    p1->right = NULL;

    struct Node *p2 = CreateNode(54);

    // Linking Node with other node
    p->left = p1;
    p->right = p2;

    if(IsBST(p))
    {
        printf("This is a binary search tree");
    }
    else
        printf("This not a binary search tree");
    


}