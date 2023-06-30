#include<stdio.h>
int main()
{
	printf("----------Main Menu-----------\n\n");
	printf("1. Add Books\n");
	printf("2. Display Book Information\n");
	printf("3. Search Books(Book status)\n)");
	printf("4. Exit\n\n");
	
	int a1;
	printf("Enter : ");
	scanf("%d", &a1);
	
	if(a1==1)
	{
		printf("You can add book information\n\n");
		
		printf("Choosen the category: \n\n");
		
		printf("1. Computer\n");
		printf("2. Electronics\n");
		printf("3. Mathematical \n\n");
		
		int a2;
		printf("Choose a category : ");
		scanf("%d", &a2);
		
		printf("\n\n");
		
		if(a2==1)
		{
			printf("You have choose Computer category\n\n");
			
			printf("1. Introduction to c\n");
			printf("2. Introduction to Python\n");	
			printf("3. Introduction to R Programming\n\n");
			
			int a3;
			printf("Choose a book : ");
			scanf("%d", &a3);
			
			printf("\n\n");
			
			if(a3==1){
				printf("You have choosed Introduction to c book\n\n");
				
				char book_namea[50];
				char author_namea[50];
				int pagea;
				int pricea;
				
				printf("Book Name: ");
				scanf("%s", &book_namea);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_namea);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pagea);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &pricea);
				printf("/n/n");
			}
			else if(a3==2)
			{
				printf("You have choosed Introduction to Python\n\n");
				
				char book_nameb[50];
				char author_nameb[50];
				int pageb;
				int priceb;
				
				printf("Book Name: ");
				scanf("%s", &book_nameb);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_nameb);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pageb);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &priceb);
				printf("/n/n");
				
				
			}
			else if(a3==3)
			{
				printf("You have chooced Introduction to R Programming book\n\n ");
				
				char book_namec[50];
				char author_namec[50];
				int pagec;
				int pricec;
				
				printf("Book Name: ");
				scanf("%s", &book_namec);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_namec);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pagec);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &pricec);
				printf("/n/n");
			}
			}
			else if(a2==2)
			{
				printf("You have choosed Electronic category\n\n");
				
				printf("1. Practical Elecronics for Inventory\n\n");
				printf("2. The art of electronics\n");
				printf("3. Fundemantal of digital ciruits\n\n");
				
				int a4;
				printf("Choose a book : ");
				scanf("%d", &a4);
				
				printf("\n\n");
				
				if(a4==1){
					printf("You have choosed Electronics for Inventors book\n\n");
					
				char book_named[50];
				char author_named[50];
				int paged;
				int priced;
				
				printf("Book Name: ");
				scanf("%s", &book_named);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_named);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&paged);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &priced);
				printf("/n/n");
				}
				else if(a4==2)
				{
					printf("You have choosed The art of electronics book\n\n");
					
				char book_namee[50];
				char author_namee[50];
				int pagee;
				int pricee;
				
				printf("Book Name: ");
				scanf("%s", &book_namee);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_namee);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pagee);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &pricee);
				printf("/n/n");
				}
				else if(a4==3){
				printf("You have choosed Fundemantal of digital ciruits book\n\n ");
				
				char book_namef[50];
				char author_namef[50];
				int pagef;
				int pricef;	
				
				printf("Book Name: ");
				scanf("%s", &book_namef);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_namef);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pagef);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &pricef);
				printf("/n/n");
			}
				}
			else if(a2==3){
				printf("You have choosed Mechanical category\n\n ");
				
				printf("1. Introduction to Autocad\n");
				printf("2. Funcdamentals of Thermodynamics\n");
				printf("3. Mechanical Engineering : Conventional and Objective Type\n\n");
				
				int a5;
				printf("Choose a book : ");
				scanf("%d", &a5);
				
				printf("\n\n");
				
				if(a5==1){
				printf("You have choosed Introduction to Autocad book\n\n");
					
				char book_nameg[50];
				char author_nameg[50];
				int pageg;
				int priceg;	
				
				printf("Book Name: ");
				scanf("%s", &book_nameg);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_nameg);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pageg);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &priceg);
				printf("/n/n");
				}
				else if(a5==2){
				printf("You have choosed Fundamentals of Thermodynamics book\n\n");
					
				char book_nameh[50];
				char author_nameh[50];
				int pageh;
				int priceh;	
				
				printf("Book Name: ");
				scanf("%s", &book_nameh);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_nameh);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pageh);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &priceh);
				printf("/n/n");
				}
				else if(a5==3)
				{
			
				printf("You have choosed Mechanical Engineering : Conventional and Objective Type book");
				
				char book_namei[50];
				char author_namei[50];
				int pagei;
				int pricei;	
				
				printf("Book Name: ");
				scanf("%s", &book_namei);
				printf("\n\n");
				
				printf("Author Name : ");
				scanf("%s", &author_namei);
				printf("\n\n");
				
				printf("Pages : ");
				scanf("%d",&pagei);
				printf("\n\n");
				
				printf("Price : ");
				scanf("%d", &pricei);
				printf("/n/n");
			}
			}	
			}
		else if(a1==3)
		{
			printf("You can search the book (Book Status)\n\n");
			
			printf("Press the code:123 for Introduction to c\n ");
			printf("Press the code:456 for Introduction to Python\n ");
			printf("Press the code:789 for Introduction to R Programming\n ");
			printf("Press the code:523 for Practical Elecronics for Inventory\n ");
			printf("Press the code:759 for The art of electronics\n ");
			printf("Press the code:157 for Fundemantal of digital ciruits\n ");
			printf("Press the code:359 for Introduction to Autocad\n ");
			printf("Press the code:153 for Funcdamentals of Thermodynamics\n ");
			printf("Press the code:123 for Mechanical Engineering : Conventional and Objective Type\n\n ");
			
			int a6;
			printf("Enter the book to search ( USE THE CODE )");
			scanf("%d", &a6);
			
			printf("\n");
			
			switch(a6)
			{
				case 123:
				printf("Book Name : Introduction to c\n\n");
				printf("Book Status : 2 copies left");
				break;
				
				case 456:
				printf("Book Name : Introduction to Python\n\n");
				printf("Book Status : 10 copies left");
				break;
				
				case 789:
				printf("Book Name : Introduction to  R Programming\n\n");
				printf("Book Status : 1 copies left");
				break;
				
				case 523:
				printf("Book Name : Practical Elecronics for Inventory\n\n");
				printf("Book Status : 20 copies left");
				break;
				
				case 759:
				printf("Book Name : The art of electronics\n\n");
				printf("Book Status: 30 copies left");
				break;
				
				case 157:
				printf("Book Name : Fundemantal of digital ciruits\n\n");
				printf("Book Status : 18 copies left");
				break;
				
				case 359:
				printf("Book Name : Introduction to Autocad\n\n");
				printf("Book Status : Out off stock");
				break;
				
				case 153:
				printf("Book Name : Funcdamentals of Thermodynamics\n\n");
				printf("Book Status : 5 copies left");
				break;
				
				case 104:
				printf("Book Name : Mechanical Engineering : Conventional and Objective Type\n\n");
				printf("Book Status : 4 copies left");
				break;
			}
			}	
		else if(a1==4)
		{
			printf("The Library is closed\n\n");
			
			printf("Have a nice day");
		}
		
	}
