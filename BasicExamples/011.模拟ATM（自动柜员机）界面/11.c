#include <stdio.h>
#include <stdlib.h> // call system function system();

void main()
{
	char SelectKey,CreditMoney,DebitMoney;
	int CMoney;
	while(1)
	{
		do{
			system("clear");
			puts("=========================");
			puts("|  Please select key:   |");
			puts("|  1. Quary             |");
			puts("|  2. Credit            |");
			puts("|  3. Debit             |");
			puts("|  4. Return            |");
			puts("=========================");
			SelectKey = getchar();
		}while( SelectKey!='1' && SelectKey!='2' && SelectKey!='3' && SelectKey!='4' );

		switch(SelectKey)
		{
			case '1':
				system("clear");
				puts("================================");
				puts("|    Your balance is $1000.    |");
				puts("|  Press any key to return...  |");
				puts("================================");
				getchar();
				break;
			case '2':
				do{
					system("clear");
					puts("==================================");
					puts("|   Please select Credit money:  |");
					puts("|   1. $50                       |");
					puts("|   2. $100                      |");
					puts("|   3. Return                    |");
					puts("==================================");
					CreditMoney = getchar();
				}while( CreditMoney!='1' && CreditMoney!='2' && CreditMoney!='3' );

				if(CreditMoney == '1')
					CMoney = 50;
				if(CreditMoney == '2')
					CMoney = 100;
				if(CreditMoney == '3')
					break;
				else{
					system("clear");
					printf("==========================================\n");
					printf("|  Your Credit money is $%3d,Thank you!  |\n",CMoney);
					printf("|         Press any key to return...     |\n");
					printf("==========================================\n");
				}
				getchar();
				break;
			case '3':
				do{
					system("clear");
					puts("====================================");
					puts("|   Please select Debit money:     |");
					puts("|   1. $50                         |");
					puts("|   2. $100                        |");
					puts("|   3. $500                        |");
					puts("|   4. $1000                       |");
					puts("|   5. Return                      |");
					puts("====================================");
					DebitMoney = getchar();
				}while(	DebitMoney!='1' && DebitMoney!='2' && DebitMoney!='3' \
				 && DebitMoney!='4' && DebitMoney!='5' );
				switch(DebitMoney)
				{
					case '1':
						system("clear");
						puts("===========================================");
						puts("|   Your Debit money is $50,Thank you!    |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getchar();
						break;
					case '2':
						system("clear");
 						puts("===========================================");
						puts("|   Your Debit money is $100,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getchar();
						break;
					case '3':
						system("clear");
						puts("===========================================");
						puts("|   Your Debit money is $500,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getchar();
						break;
					case '4':
						system("clear");
						puts("===========================================");
						puts("|   Your Debit money is $1000,Thank you!  |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getchar();
						break;
					case '5':
						break;
				}
				break;
			case '4':
				system("clear");
				puts("================================");
				puts("|   Thank you for your using!  |");
				puts("|            Good bye!         |");
				puts("================================");
				return;
		}
	}
}
