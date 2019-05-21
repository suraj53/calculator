#include<stdio.h>
#include<conio.h>
main()
{  int i,x;
	for(i=0;i<100;i++){
		printf(" \n press 1 for continue calculations else press anyone >\n");
		scanf("%d",&x);
		if(x==1){
	int ch;
    int a,b,c;   
	printf("\n press 1.for addition!");
	printf("\n press 2.for substraction!");
	printf("\n press 3.for multiplication!");
	printf("\n press 4.for division!\n>");
	scanf("%d",&ch);
	switch(ch){
		case 1:printf("first value:");
		scanf("%d",&a);
		printf("second value");
		scanf("%d",&b);
		c=a+b;
		printf("-------------------------------------------------------------------addition is--------------->%d",c);
		break;
		case 2:printf("first value:");
		scanf("%d",&a);
		printf("second value");
		scanf("%d",&b);
		c=a-b;
		printf("-------------------------------------------------------------------substraction is ----------?%d",c);
		break;
		case 3:printf("first value:");
		scanf("%d",&a);
		printf("second value");
		scanf("%d",&b);
		c=a*b;
		printf("-------------------------------------------------------------------multiplication is-------------->%d",c);
		break;
		case 4:printf("first value:");
		scanf("%d",&a);
		printf("second value");
		scanf("%d",&b);
		c=a/b;
		printf("--------------------------------------------------------------------division is-------------->%d",c);
		break;
		default: printf("wrong value entered----by you @@@@@@@@@@@@@@");
}
}
else{
	break;
}
}
getch();}
