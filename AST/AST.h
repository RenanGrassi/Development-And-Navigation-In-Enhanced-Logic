#ifndef AST_H
#define AST_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a node structure for the AST
typedef struct ASTNode{
    char *type;                 // Type of the node (e.g., "Program", "Function", "Stmt")
    char *value;                // Value, if any (e.g., function name, variable name)
    struct ASTNode **children;  // Array of children nodes
    int childCount;            // Number of children
} ASTNode;

// Function to create a new AST node
ASTNode *createASTNode(char *type, char *value);

// Function to add a child node to a parent node
void addChildNode(ASTNode *parent, ASTNode *child);

// Function to print the AST (for debugging)
void printAST(ASTNode *node, int level);

#endif // AST_H