# include <stdio.h>
# include <stdlib.h>
struct slinklist
{
	int data;
	struct slinklist *next;
};
typedef struct slinklist node;
node *start = NULL;
//create one node
node* getnode()
{
	node* newnode;
	newnode = (node *) malloc(sizeof(node));
	printf("\n Enter data: "); 
	scanf("%d",&newnode -> data);
	newnode -> next = NULL;
	return newnode;
}
void traverse()
		{
			node *temp;
			temp = start;
			printf("\n The contents of List (Left to Right): \n");
				while(temp != NULL)
				{
					printf("%d-->", temp -> data);
					temp = temp -> next;
				}
			printf("NULL");
		}
void createlist(int n)
{
	int i;
	node *newnode;
	node *temp;
	for(i = 0; i < n; i++)
		{
		newnode = getnode();
		if(start == NULL)
		{
			start = newnode;
		}
		else
		{
			temp = start;
			while(temp -> next != NULL)
			temp = temp -> next;
			temp -> next = newnode;
		}
		}
}
int main()
{
    int n;
    node *Head;
			printf("\n Number of nodes you want to create: ");
			scanf("%d", &n);
			createlist(n);
			printf("\n List created..");
	traverse();
}
