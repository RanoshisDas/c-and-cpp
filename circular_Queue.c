//circular Queue by c language 
#include<stdio.h>
#include<stdlib.h>
#define max 8
int f=-1,r=-1,q[max];
void enqueue(int n)
{
    if((r+1)%max ==f){
printf("\nThe Queue is full.");
    }
else if(f==-1 && r==-1)
{
f++;
r++;
q[r]=n;
}
else{
 r=(r+1)%max;
 q[r]=n;
}
}
void dequeue()
{
    if(f==-1 && r==-1)
    {
    printf("\nThe Queue is empty.");
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
void display()
{int i;
i=f;
    while(i!=r)
    {
        printf("%d ",q[i]);
        i=(i+1)%max;
    }
 printf("%d",q[r]);
}
int main()
{ printf("Welcome to Queue");
 int c,x;
    while(1)
        {
            printf("\n\nGive a choice...\n1.Enter data \n2.Delete data \n3.Display data \n4.Exit program\nEnter ypur choice: ");
            scanf("%d",&c);
            switch(c){
                case 1:{
                    printf("\nEnter the value: ");
                    scanf("%d",&x);
                    enqueue(x);
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
