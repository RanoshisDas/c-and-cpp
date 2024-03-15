#include<stdio.h>
#include<stdlib.h>
struct list{
	float wgt,profit,ratio;
	struct list *next;
};
typedef struct list node;

node* swap(node* ptr1, node* ptr2)
{
    node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
node*start= NULL;

node* getnode(int i){
	node* newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter Weight and Profit for item %d:\n",i+1);
	scanf("%f %f", &newnode->wgt, &newnode->profit);
	newnode->ratio= newnode->profit/newnode->wgt;
	newnode->next=NULL;
	return newnode;
}
int Sort(node* start, int count)
{	node* h;
    int i, j,swapped;
     h = start;
    for (i = 0; i <= count; i++) {
        swapped =0;
        for (j = 0; j < count - i - 1; j++) {
            node* p1 = h;
            node* p2 = p1->next;
 
            if (p1->ratio > p2->ratio) {

                h = swap(p1, p2);
                swapped =1;
            }
            h = h->next;
        }
        /* break if the loop ended without any swap */
        if (swapped == 0)
            break;
    }}
    
int main(){
	float Totalvalue,c,amount;
	int i,j,num;
	node* newnode;
	node* temp;
	printf("Enter number of items :");
	scanf("%d",&num);   
    for (i = 0; i < num; i++)
{     newnode=getnode(i);
	if(start==NULL){
		start=newnode;
	}
	else{
		temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=newnode;
	}} 
    printf("\nEnter capacity of knapsack :");
    scanf("%f",&c);
    
    Sort(start,num);
    temp=start;
     printf("\n\t...Knapsack Problem using Greedy over Weight...\n");
     for (i = 0; i < num; i++) 
     { 
	 if ( temp->wgt > c)
          break;
       else {
          Totalvalue = Totalvalue +  temp->profit;
          c = c -  temp->wgt;
		}
	 temp= temp->next;
	} 
       if (i < num)
       Totalvalue = Totalvalue + (temp->ratio * c);
     printf("\nThe maximum value is :%.2f",Totalvalue);     
     return 0;}
