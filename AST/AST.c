#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AST.h"

// Function to create a new AST node
ASTNode *createASTNode(char *type, char *value) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->type = strdup(type);
    node->value = value ? strdup(value) : NULL;
    node->children = NULL;
    node->childCount = 0;
    return node;
}

// Function to add a child node to a parent node
void addChildNode(ASTNode *parent, ASTNode *child) {
    parent->childCount++;
    parent->children = (ASTNode **)realloc(parent->children, parent->childCount * sizeof(ASTNode *));
    parent->children[parent->childCount - 1] = child;
}

// Function to print the AST (for debugging)
void printAST(ASTNode *node, int level) {
    // Print the current node with indentation based on its level
    for (int i = 0; i < level; i++) printf("  ");
    printf("%s", node->type);
    if (node->value) printf(": %s", node->value);
    printf("\n");

    // Print all children one level deeper than the parent, but ensure they are all at the same indentation level
    if (node->childCount > 0) {
        for (int i = 0; i < level + 1; i++) printf("  ");
        printf("{\n");
        for (int i = 0; i < node->childCount; i++) {
            printAST(node->children[i], level + 1);
        }
        for (int i = 0; i < level + 1; i++) printf("  ");
        printf("}\n");
    }
}