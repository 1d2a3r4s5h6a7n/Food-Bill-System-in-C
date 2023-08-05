#include<stdio.h>
main()
{
	int ch,quantity,amount,price;
	char choice;
	printf("..........FOOD BILLING SYSTEM......\n");
	do{
		printf("\n");
		printf("-----------MENU----------\n");
		printf("1.pizza.........Price=180rs/pcs\n");
		printf("2.burger........Price=120rs/pcs\n");
		printf("3.dosa..........Price=100rs/pcs\n");
		printf("4.idli..........Price=50rs/pcs\n");
		
		printf("Please Enter your choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("You have selected Pizza..\n");
			       price=180;
			       break;       
			case 2:printf("You have selected Burger..\n");
			       price=120;
			       break;
			case 3:printf("You have selected Dosa..\n");
			       price=100;
			       break;
			case 4:printf("You have selected Idli..\n");
			       price=50;
			       break;
		}
		 printf("Enter the Quantity : \n");
		 scanf("%d",&quantity);
		
		 amount=quantity *price;
		 printf("Amount : %d\n",amount);
		 
		 printf("Total amount is :%d\n",amount);
		 
		 printf("Do you have to place more order y / n?\n");
		 
		 choice=getch(); // scanf --> To get a character
		 
    }
    while(choice=='Y' || choice=='y');
    
    if(choice=='N' || choice=='n')
    {
    	printf("\nThank You");
	}
	
}


