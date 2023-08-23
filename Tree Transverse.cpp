#include <stdio.h>

#include <stdlib.h>


// Structure of a node of tree

struct node

{

    int data;

    struct node* left;

    struct node* right;

};


// Create a New Node

struct node* createNode(int data)

{

    // Allocate memory eauivalent to node structure and hold

    // address in node pointer

    struct node* newNode = malloc(sizeof(struct node );


    newNode -> data = data;

    newNode -> left = NULL;

    newNode -> right = NULL;


    return newNode;

}


// Insert a new node to left of the given node

struct node* insertLeft(struct node* root, int data)

{

    root -> left = createNode(data);

    return root;

}


// Insert a new node to right of the given node

struct node* insertRight(struct node* root, int data)

{

    root -> right = createNode(data);

    return root;

}


// Inorder traversal

void inorder(struct node* root)

{

    if (root == NULL) return;

    

    inorder(root -> left);

    printf("%d ", root -> data);

    inorder(root -> right);

}


// Preorder traversal

void preorder(struct node* root)

{

    if (root == NULL) return;


    printf("%d ", root -> data);

    preorder(root -> left);

    preorder(root -> right);

}


// Postorder traversal

void postorder(struct node* root)

{

    if (root == NULL) return;


    postorder(root -> left);

    postorder(root -> right);

    printf("%d ", root -> data);    

}



// Driver Code

int main()

{

    struct node* root = createNode(4);


    insertLeft(root, 21);

    insertRight(root, 13);


    insertLeft(root -> left, 34);

    insertRight(root -> left, 0);


    insertLeft(root -> right, 18);

    insertRight(root -> right, 19);


    printf("Inorder traversal of the Tree is : ");

    inorder(root);

    printf("\n");

    

    printf("Preorder traversal of the Tree is : ");

    preorder(root);

    printf("\n");


    printf("Postorder traversal of the Tree is : ");

    postorder(root);


    return 0;

}
