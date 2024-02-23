#include<stdio.h>
int player1(int stick,int n){
	//int n;
	printf("\nChoice in between 1 to 4\n-> ");
	scanf("%d",&n);
	if(n>4||n<1){
		printf("\nWrong input...!!!");
		player1(stick,n);
	}
	else{
		stick=stick-n;
	}
	if(stick==0){
		printf("\nWrong input...!!!");
		player1(stick+n,n);
	}
	return n;
}
int main(){
	int stick=21,c,n;
	while(1){
		n=player1(stick,n);
		stick=stick-n;
		printf("\nYou pick:%d\nstick left: %d\n",n,stick);
		c=5-n;
		printf("\nNumber of stick computer pick: %d\n",c);
		stick=stick-c;
		printf("\nNumber of stick left: %d\n",stick);
		if(stick==1){
			printf("!!!...You Lost...!!!");
			break;
		}
	}
	return 0;
}
