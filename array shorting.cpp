#include<stdio.h>
int main()
{ int a[4][3];
	int i,j;
	printf("enter input");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
int row=i,col=j;
for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		printf("%d",a[i][j]);	
		}
		printf("\n");
	}
	int k=0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		if(a[i][j] !=0)	{
			k++;
		}
		}
	}
	int b[k+1][3];
	int s=1;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]!=0){
			b[s][0]=i;
			b[s][1]=j;
			b[s][2]=a[i][j];
			s++;
			}
		}
	}
	b[0][0]=row;
	b[0][1]=col;
	b[0][2]=k;
	for(i=0;i<k+1;i++){
		for(j=0;j<3;j++){
		printf("%d",b[i][j]);	
		}
		printf("\n");
	}
return 0;	
}
