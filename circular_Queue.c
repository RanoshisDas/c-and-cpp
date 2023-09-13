//circular Queue by c language 
#include<stdio.h>
#include<stdlib.h>
#define max 4
int f=-1,r=-1,q[max];
void enqueue()
{  int x;
    if((r+1)%max ==f){
printf("\n!!! The Queue is full !!!");
    }
else if(f==-1 && r==-1)
{
f++;
r++;
 printf("\nEnter the value: ");
 scanf("%d",&x);
q[r]=x;
}
else{
 r=(r+1)%max;
  printf("\nEnter the value: ");
  scanf("%d",&x);
 q[r]=x;
}
}
void dequeue()
{
    if(f==-1 && r==-1)
    {
    printf("\n!!! The Queue is empty !!!");
    }
    else if(f==r)
    {
        printf("\n%d is deleted from the Queue.",q[f]);
        f=-1;
        r=-1;
    }
    else{
         printf("\n%d is deleted from the Queue.",q[f]);
        f=(f+1)%max;
    }
}
void display(){
if(f==-1){
	printf("\n!!! The Queue is Empty !!!");
}
else{int i;
i=f;
printf("\nThe elements are: ");
    while(i!=r)
    {
        printf("%d ",q[i]);
        i=(i+1)%max;
    }
 printf("%d",q[r]);
}
}
int main()
{ printf("Welcome to Queue");
 int c;
    while(1)
        {
            printf("\n\nGive a choice...\n1.Enter data \n2.Delete data \n3.Display data \n4.Exit program\nEnter ypur choice: ");
            scanf("%d",&c);
            switch(c){
                case 1:{
                    enqueue();
                    break;
                }
                case 2:{
                    dequeue();
                    break;
                }
                case 3:{
                    display();
                    break;
                }
                case 4:{
                    exit(0);
                }
                default:{
                    printf("\nYou enter a wrong choice.");
                }
            }
        }
 return 0;
}
