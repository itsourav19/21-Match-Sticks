#include<stdio.h>
#include<stdlib.h>
void show(int);
int main()
{
int i,a,b,x,c,n,ch,d,ch1;
char ch2;
//do
//{
a=21;
printf("\n\n\t\t\t\t*****\t\t21    M A T C H    S T I C K S\t\t*****\n\n\t\t\t\t\t*****\t      G A M E   R U L E S   \t*****\n\n\t\t\t\t1. In this Game there are 21 Match Sticks.\n\n\t\t\t\t2. Player 1 and Player 2 will pick up the sticks one by one.\n\n\t\t\t\t3. Sticks can be picked Minimum 1 OR Maximum 4 at a time.\n\n\t\t\t\t4. The who, picked up the last stick, is the loser.\n\n");
show(a);
printf("\t\t\t\t\t*** PRESS 1 For SINGLE User ***\n\t\t\t\t\t*** PRESS 2 For TWO Users ***\n\n\t\t\t\t\t ENTER YOUR CHOICE\t");
scanf("%d",&ch);

switch(ch)
{
case 1:
	printf("\n\n\t\t\t*****\tIN  SINGLE  USER  PLAYER 1  IS  YOU  AND  PLAYER 2  IS  CPU\t*****\n\n");  
	
	while(a>=2)
	{
		
		printf("\t\t\t\t\t*****\t   YOUR  TURN \t*****\n\n");		
		printf("\t\t\t\t\t*****\tCHOOSE MATCH STICKS : \t ");
		scanf("%d",&b);
		if(b>=1 && b<=4)
		{
			show(b);
			a=a-b;
			printf("\n\n\t\t\t\t\t*****\t REST  STICKS : %d \t*****\n\n",a);
			show(a);

			x=a;
			if(x==1)
			{
				printf("\t\t\t\t\t*****\tY O U   W O N\t\t****\t\n\n");
				//printf("\t\t\t\t\t**** NOW TURN FOR CPU \t\t***\t\n\n");
				//flag=0;				
				break;
			}
			else 
			{
				if(a>4)
				{

				n = rand() % 4 + 1;
				printf("\t\t\t\t\t*****\t TURN  FOR  CPU\t*****\n\n");		
				printf("\n\t\t\t\t\t*****\t CPU CHOOSE  %d  STICKS \t*****\n\n",n);
				show(n);
				a=a-n;
				printf("\t\t\t\t\t*****\t REST  STICKS :\t %d \t*****\n\n",a);
				show(a);

				x=a;
				if(x==1)
				{
				printf("\t\t\t\t\t*****\tC P U   W O N\t\t****\t\n\n");
				//printf("\t\t\t\t\t*****\tNOW YOUR TURN\t\t****\t\n\n");

				break;
				}
				}
				else 
				{
				printf("\t\t\t\t\t*****\t REST  STICKS :\t %d \t*****\n\n",a);
				show(a);
				if(a==4)
				{
					n=3;
					printf("\t\t\t\t\t*****\t TURN  FOR  CPU\t*****\n\n");		
					printf("\n\t\t\t\t\t*****\t CPU CHOOSE  %d  STICKS \t*****\n",n);
					show(n);
					a=a-n;
					x=a;
					if(x==1)
					{
						printf("\t\t\t\t\t*****\tC P U   W O N\t\t****\t\n\n");
						//printf("\t\t\t\t\t*****\tNOW YOUR TURN\t\t****\t\n\n");

						break;
					}
				}
				else if(a==3)
				{
					n=2;
					printf("\t\t\t\t\t*****\t TURN  FOR  CPU\t*****\n\n");		
					printf("\n\t\t\t\t\t*****\t CPU CHOOSE  %d  STICKS \t*****\n",n);
					show(n);
					a=a-n;
					x=a;
					if(x==1)
					{
						printf("\t\t\t\t\t*****\tC P U   W O N\t\t****\t\n\n");
						//printf("\t\t\t\t\t*****\t NOW YOUR TURN\t\t****\t\n\n");

						break;
					}
				}
				else if(a==2)
				{
					n=1;
					printf("\t\t\t\t\t*****\t TURN  FOR  CPU\t*****\n\n");
					printf("\n\t\t\t\t\t*****\t CPU CHOOSE  %d  STICKS \t*****\n",n);		
					show(n);
					a=a-n;
					x=a;
					if(x==1)
					{
						printf("\t\t\t\t\t*****\tC P U   W O N\t\t****\t\n\n");
						//printf("\t\t\t\t\t*****\tNOW YOUR TURN \t\t****\t\n\n");
						break;
					}
				}		
			}
			}
		}
		else
		{
			printf("\n\t\t\t\t\t*****\t INVALID  INPUT \t*****\n");
		}
	}
break;
case 2:
	show(a);
	while(a>1)
	{
		printf("\t\t\t\t\t*****\tTURN  FOR  PLAYER 1\t*****\n\n");		
		printf("\t\t\t\t\t*****\tCHOOSE MATCH STICKS : \t ");
		scanf("%d",&b);
		if(b>=1 && b<=4)
		{
			show(b);
			a=a-b;
			printf("\n\n\t\t\t\t\t*****\tREST STICKS = %d\n\n",a);
			show(a);
			x=a;
			if(x==1)
			{
				printf("\t\t\t\t\t*****\tP L A Y E R 1    W O N\t\t*****\t\n\n");
				break;
			}
			else 
			{
			printf("\t\t\t\t\t*****\tTURN FOR PLAYER 2\t*****\n\n");		
			printf("\t\t\t\t\t*****\tCHOOSE MATCH STICKS : \t ");
			scanf("%d",&c);
			if(c>=1 && c<=4)
			{
				show(c);
				a=a-c;
				printf("\n\n\t\t\t\t\t*****\tREST STICKS => %d\n\n",a);
				show(a);
				x=a;
				if(x==1)
				{
				printf("\t\t\t\t\t*****\tP L A Y E R 2    W O N\t\t****\t\n\n");
				break;
				}
			}
				else
				{
					printf("\n\t\t\t\t\t*****\tINVALID  INPUT\t*****\n");
				}


			
			}
		}
		else
		{
			printf("\n\t\t\t\t\t*****\tINVALID  INPUT\t*****\n");
		}
	}
	break;
default:
 	printf("\n\t\t\t\t\t***\tINVALID   CHOICE\t***\n");
	break;	
	}
//printf("\n\t\t\t\t\t*****\tPLAY  AGAIN   PRESS  KEY =>  Y  *****\n");
//ch1=getchar();
//}while(ch1=='y' || ch1=='Y');
return 1;
}

void show( int ch)
{
int b=92;
switch(ch)
{
case 1 :
printf("\n\n");
printf("\t\t\t\t\t\t   /%c\n",b);
printf("\t\t\t\t\t\t   %c/\n",b);
printf("\t\t\t\t\t\t   ||   \n");
printf("\t\t\t\t\t\t   ||   \n");
printf("\t\t\t\t\t\t   ||   \n");
printf("\t\t\t\t\t\t   ||   \n");
printf("\t\t\t\t\t\t   ||   \n");
printf("\t\t\t\t\t\t   ||   \n");
printf("\n\n");
break;
case 2:
printf("\n\n");
printf("\t\t\t\t\t\t   /%c   /%c\n",b,b);
printf("\t\t\t\t\t\t   %c/   %c/\n",b,b);
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   \n");
printf("\n\n");
break;
case 3:
printf("\n\n");
printf("\t\t\t\t\t\t   /%c   /%c   /%c\n",b,b,b);
printf("\t\t\t\t\t\t   %c/   %c/   %c/\n",b,b,b);
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   \n");
printf("\n\n");
break;
case 4:
printf("\n\n");
printf("\t\t\t\t\t\t   /%c   /%c   /%c   /%c\n",b,b,b,b);
printf("\t\t\t\t\t\t   %c/   %c/   %c/   %c/\n",b,b,b,b);
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 5:
printf("\n\n");
printf("\t\t\t\t\t\t   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b);
printf("\t\t\t\t\t\t   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b);
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t\t   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 6:
printf("\n\n");
printf("\t\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   \n",b,b,b,b,b,b);
printf("\t\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   \n",b,b,b,b,b,b);
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 7:
printf("\n\n");
printf("\t\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   \n",b,b,b,b,b,b,b);
printf("\t\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   \n",b,b,b,b,b,b,b);
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 8:
printf("\n\n");
printf("\t\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C\n",b,b,b,b,b,b,b,b);
printf("\t\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b);
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 9:
printf("\n\n");
printf("\t\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c\n",b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 10:
printf("\n\n");
printf("\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C\n",b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 11:
printf("\n\n");
printf("\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c\n",b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 12:
printf("\n\n");
printf("\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 13:
printf("\n\n");
printf("\t\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 14:
printf("\n\n");
printf("\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 15:
printf("\n\n");
printf("\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 16:
printf("\n\n");
printf("\t\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 17:
printf("\n\n");
printf("\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;
case 18:
printf("\n\n");
printf("\t\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;

case 19:
printf("\n\n");
printf("\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/\n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;

case 20:
printf("\n\n");
printf("\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   \n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   \n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   \n");
printf("\n\n");
break;

case 21:
printf("\n\n");
printf("\t   /%c   /%c   /%c   /%c   /%c   /%c   /%C   /%C   /%c   /%C   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c   /%c \n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/   %c/ \n",b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b);
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\t   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   ||   || \n");
printf("\n\n");
break;
}

}

