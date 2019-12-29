#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;
Node* init_root(int value){
	Node* a=malloc(sizeof(Node));
	(*a).value=value;
	(*a).left=NULL;
	(*a).right=NULL;
	return a;
}
Node* create_node(int value){
	return init_root(value);
}
void insert_node(Node *p, int value){
	if(p->left==NULL&&p->value>value){
		Node* a=create_node(value);
		(*p).left=a;
	}else
	if(p->right==NULL&&p->value<value){
		Node* a=create_node(value);
		(*p).right=a;
	}else{
		if(p->value>value) insert_node(p->left,value);
		if(p->value<value) insert_node(p->right,value);
	}
}
void traverse_tree_inorder(Node *p){
	if(p->left!=NULL)traverse_tree_inorder(p->left);
	printf("%d ",p->value);
	if(p->right!=NULL)traverse_tree_inorder(p->right);
}
void recycle_nodes(Node *p){
	if(p->left!=NULL)recycle_nodes(p->left);
	if(p->right!=NULL)recycle_nodes(p->right);
	free(p);
}