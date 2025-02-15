#include <stdio.h> 
#include <stdlib.h> 
 
typedef struct Node // Define the structure for a tree node  
{ 
int data; 
struct Node* left; 
struct Node* right; 
} Node; 
 
Node* createNode(int data)  
{ 
Node* newNode = (Node*)malloc(sizeof(Node)); 
newNode->data = data; 
newNode ->left = newNode ->right = NULL; 
return newNode; 
} 
 
Node* insertNode(Node* root, int data) // Function to insert a node into the BST  
{ 
if (root == NULL)  
{ 
root = createNode(data); 
return root; 
} 
if (data < root->data)  
{ 
root->left = insertNode(root->left, data); 
}  
else if (data > root->data)  
{ 
root->right = insertNode(root->right, data); 
} 
return root; 
} 
 
45 
 
void inorderTraversal(Node* root)//Function to perform in-order traversal of the BST  
{ 
if (root!=NULL)  
{ 
inorderTraversal(root->left); 
printf("%d ", root->data); 
inorderTraversal(root->right); 
} 
} 
 
int main()  
{ 
Node* root = NULL; 
root = insertNode (root, 50); 
root = insertNode (root, 30); 
root = insertNode (root, 20); 
root = insertNode (root, 40); 
root = insertNode (root, 70); 
root = insertNode (root, 60); 
root = insertNode (root, 80); 
 
printf("In-order traversal: "); // Perform in-order traversal of the BST 
inorderTraversal(root); 
printf("\n"); 
return 0; 
}