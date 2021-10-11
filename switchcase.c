#include<stdio.h>
main()
{
	int choice=0;
	printf("Pick an item :\n1.Barbeque Chicken\n2.Shawarma\n3.Pizza\n4.Cold Coffee\n5.Mac n Cheese");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("You picked BarbequeChicken");
			break;
			case 2:
				printf("You have picked Shawarma");
				break;
				case 3:
					printf("You have picked Pizza");
					break;
					case 4:
						printf("You have picked Cold Coffee");
						break;
						case 5:
							printf("You have picked Mac n Cheese");
							break;
							default : printf("Invalid choice");
							
				
			
	}
}
