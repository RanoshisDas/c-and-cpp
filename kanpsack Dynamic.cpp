//kanpsack Dynamic 
#include<stdio.h>
int max(int a, int b) { 
  if(a>b)
   return a;
   else
   return b;
 } 
int knapSack(int W, int wt[], int val[], int n) 
{ 
	if (n == 0 || W == 0) 
		return 0;  
	if (wt[n - 1] > W) 
		return knapSack(W, wt, val, n - 1); 

	else
		return max( val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),knapSack(W, wt, val, n - 1)); 
} 
 
int main() 
{int n,i,W;
	printf("Enter number of items :");
	scanf("%d",&n); 
	int profit[n]; 
	int weight[n]; 
    for (i = 0; i < n; i++)
{ 	printf("\nEnter Weight and Profit for item %d:\n",i+1);
	scanf("%d %d",&weight[i],&profit[i]);
	
	}

	printf("Enter capasity :");
	scanf("%d",&W);

	printf("%d", knapSack(W, weight, profit, n)); 
	return 0; 
}
