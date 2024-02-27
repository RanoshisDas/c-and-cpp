#include<stdio.h>
int player1(int stick,int n){
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
	int stick=21,c,n,choice;
    printf("1.You play first\n2.Computer play first\nEnter choice:");
    scanf("%d",&choice);
    while(1){
        switch (choice) {
            case 1:{
                n=player1(stick,n);
                stick=stick-n;
                printf("\nYou pick:%d\nstick left: %d",n,stick);
                c=5-n;
                printf("\nNumber of stick computer pick: %d",c);
                stick=stick-c;
                printf("\nNumber of stick left: %d",stick);
                if(stick==1){
                    printf("!!!...Last stick remain...You Lost...!!!");
                    break;
                }
                break;}
            default:{
                c=1;
                printf("\nNumber of stick computer pick: %d",c);
                stick=stick-c;
                 printf("\nNumber of stick left: %d",stick);
                n=player1(stick,n);
                stick=stick-n;
                printf("\nYou pick:%d\nstick left: %d",n,stick);
                if(stick==1){
                    printf("!!!...Last stick remain...You Win...!!!");
                    break;
                }
                if ((c+n)%5!=0) {
                    c=5-(c+n)%5;
                    printf("\nNumber of stick computer pick: %d",c);
                stick=stick-c;
                 printf("\nNumber of stick left: %d",stick);
                    choice=1;
                }
                break;}
        }
    }
	return 0;
}
