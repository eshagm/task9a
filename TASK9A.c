#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,month;
	printf("press 1 to januaey");
	printf("\npress 2 to february");
	printf("\npress 3 to march");
	printf("\npress 4 to april");
	printf("\npress 5 to may");
	printf("\npress 6 to june");
	printf("\npress 7 to july");
	printf("\npress 8 to august");
	printf("\npress 9 to september");
	printf("\npress 10 to octomber");
	printf("\npress 11 to november");
	printf("\npress 12 to devember");
	printf("\nenter the choice");
	scanf("%d",&month);
	switch(month)
	{
	  case 1 :
		 printf("january ");
		 break;
	   case 2 :
		 printf("february");
		 break;
	   case 3 :
		 printf("march ");
		 break;
	   case 4 :
		 printf("april ");
		 break;
	   case 5 :
		 printf("may ");
		 break;
	   case 6 :
		 printf("june ");
		 break;
	   case 7 :
		 printf("july ");
		 break;
	   case 8 :
		 printf("august ");
		 break;
	   case 9 :
		 printf("september ");
		 break;
	   case 10 :
		 printf("octomber ");
		 break;
	  case 11 :
		 printf("november ");
		 break;
	 case 12 :
		 printf("december ");
		 break;
	default :
		printf("please enter vaild choice!");


	}


	getch();
}