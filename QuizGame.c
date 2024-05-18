#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister YOUR NAME:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game, WARM-UP ROUND & CHALLENGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with the CHALLENGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded Rs 20,000.");
    printf("\n    By this way you can win upto Rs 2,00,000 in this game.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat do you call a portable computer?");
		printf("\n\nA. Laptop\t\tB. Server\n\nC. Desktop\t\tD. Super Computer \n");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
           }    
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A. Laptop");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhat operation system does people use the most?");
		printf("\n\nA. Linux\t\t\tB. Windows 1.0, 2.0, 3.0, 3.0 NT\n\nC. MAC OX 10 Snow Leopard\tD. None of the above\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		    {printf("\n\nWrong!!! The correct answer is B. Windows 1.0, 2.0, 3.0, 3.0 NT");
		    getch();
		    break;
		   }

        case 3:
		printf("\n\n\nWhat does a Control Panel do?");
		printf("\n\nA. Arithmetic Operation\t\tB. Bios settings\n\nC. Controls your computer\tD. Change settings\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D. Change settings");
		       getch();
		       break;
			   }

        case 4:
		printf("\n\n\n CPU and the Memory are located on the?");
		printf("\n\nA. Expansion Board\t\tB. Input device\n\nC. Motherboard\t\t D. Storage device\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");count++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C. Motherboard");
		       getch();
		       break;
			   }

        case 5:
        printf("\n\n\nWhat do you do if your computer dies/malfunctioning?");
        printf("\n\nA. Reboot (Restart)\t\tB. Shut Down\n\nC. Recovery CD and Recover your system\t\tD. Call a person to fix it\n");
        if (toupper(getch())=='C')
               {
			   printf("\n\nCorrect!!!");count++;
               getch();
                break;
				}
        else
		       {
			   printf("\n\nWrong!!! The correct answer is C. Recovery CD and Recover your system");
		       getch();
		       break;
			   }

        case 6:
		printf("\n\n\nMS Excel contains _______ columns.");
		printf("\n\nA. 254\t\tB. 256\n\nC. 250\t\tD. 253\n");
		if (toupper(getch())=='B' )
			{
			printf("\n\nCorrect!!!");count++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B. 256");
		       getch();
		       break;
			   }
			   }
			   
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {
	 system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nComputer Moniter is also known as :");
		printf("\n\nA. VDU\t\tB. DVD\n\nC. CCTV\t\tD. UVD\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A. VDU");getch();
		       goto score;
		       break;
		       }

		case 2:
		printf("\n\n\nWhat do you use to type?");
		printf("\n\nA. Mouse\t\tB. Keyboard\n\nC. Scanner\t\tD. CPU\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++;
			getch();
			 break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B. Keyboard");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nA language which is close to that used within the computer is ");
		printf("\n\nA. High-level language\t\tB. Assembly language\n\nC. Low-level language\t\tD. All of the above\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C. Low-level langauge");getch();
		       goto score;
		       break;
			   }

        case 4:
		printf("\n\n\n A device that converts digital signals to analog signals is ?");
		printf("\n\nA. A packet\t\tB. A modem \n\nC. A block \t\tD. Both A and B\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
                printf("\n\nWrong!!! The correct answer is B. A modem");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nThe basic architecture of computer was developed by-");
		printf("\n\nA. John on Neumann\t\tB. Charles Babbage\n\nC. Blaise Pascal\t\tD. Garden Moore\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A. John Von Neumann");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhat difference does the 5th generation computer have from other generation computers?");
		printf("\n\nA. Technological advancement\tB. Object Oriented Programming\n\nC. Scientific code\t\tD. All of the above\n");
		if (toupper(getch())=='D' )
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is D. All of the above");goto score;
		       getch();
		       break;
			   }

        case 7:
		printf("\n\n\nWhich one is the first search engine in internet?");
		printf("\n\nA. Google\t\tB. Archie\n\nC. Altavista  \t\tD. WAIS\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B. Archie");getch();
		       goto score;
		       break;
			   }

        case 8:
		printf("\n\n\nThe GUI means");
		printf("\n\nA. General User Interation\t\tB. Guided User Interface\n\nC. Graphical User Interface \t\tD. General User Interface\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.Graphical User Interface");getch();
		       goto score;
		       break;
			   }

        case 9:
		printf("\n\n\nThe simplest CPU scheduling algorithm is _______?");
		printf("\n\nA. Multilevel Scheduling algorithm\tB. FCFS Scheduling algorithm\n\nC. SJF Scheduling algorithm\t\tD. Round-robin Scheduling algorithm\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B. FCFS Scheduling algorithm");getch();
		       goto score;
		       break;
			   }

        case 10:
		printf("\n\n\nWho is considered to be The Father of Artificial Intelligence?");
		printf("\n\nA. John McCarthy\tB. Alan Turing\n\nC. George Boole\t\tD. Allen Newell\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");countr++;getch(); 
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A. John McCarthy");getch();
			   goto score;
			   break;
			   }

        case 11:
		printf("\n\n\nWith respect to a network interface card, the term 10/100 refers to-");
		printf("\n\nA. Protocol speed\t\tB. A fiber speed\n\nC. Megabits per seconds\t\tD. Minimum and maximum server speed\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
              {
			  printf("\n\nWrong!!! The correct answer is C. Megabits per seconds");getch();
              goto score;
              break;
			  }

        case 12:
		printf("\n\n\nIn which type of computer, data are represented as discrete signals.");
		printf("\n\nA. Analog computer\t\tB. Hybrid computer\n\nC. Both A and D\t\tD. Digital computer\n");
		if (toupper(getch())=='D')
			  {
			  printf("\n\nCorrect!!!");countr++;getch();
			   break;
			   }
		else
              {
			  printf("\n\nWrong!!! The correct answer is D. Digital computer");getch();
              goto score;
			  break;
			  }

		case 13:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA. Transistor\t\tB. Valves\n\n C.I.C\t\tD. S.S.I\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Valves");getch();
			   goto score;
		       break;
			   }
		

        case 14:
		printf("\n\n\nWhat is HTTP 404?");
		printf("\n\nA. An error message indicating server not found\t\tB. An error message indicating moved permanently\n\nC. An error message indicating forbidden\t\tD. An error message indicating server found\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A. An error message indicating server not found");getch();
		       break;goto score;
			   }

		case 15:
		printf("\n\n\nWhich of the following represents the fastest data transmission speed?");
		printf("\n\nA. bandwidth\t\tB. bps\n\nC. gbps\t\tD. kbps\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");countr++;getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C. gbps");getch();
		       goto score;
		       break;
			   }

		case 16:
		printf("\n\n\nIn computers, chip is made up of-");
		printf("\n\nA. A thin layer of cobalt\t\tB. A thin layer of silicon\n\nC. A thin layer of silver\t\tD. A thin layer of copper\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B. A thin layer of silicon");getch();
		       goto score;
		       break;
			   }


		case 17:
		printf("\n\n\nJSP stands for-");
		printf("\n\nA. Java Simple Pages\t\tB. Java System Protoco\n\nC. Java Server Pages\t\tD. Java Server Protocol\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C. Java Server Pages");getch();
			   goto score;
		       break;
			   }

		case 18:
		printf("\n\n\nWhich of the following devices is a volatile storage?");
		printf("\n\nA. RAM\t\tB. Hard-disks\n\nC. floppy-disks\t\tD. Magnetic tape\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A. RAM");getch();goto score;
		       break;
			   }

		case 19:
		printf("\n\n\nOne nibble is equal to-");
		printf("\n\nA. 8 bits\tB. 4 bytes\n\nC. 8 bytes\tD. 4 bits\n");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is D. 4 bits");getch();
			   goto score;
		       break;
			   }

		case 20:
		printf("\n\n\nIn the field of computer, VIRUS stands for -");
	    printf("\n\nA. Very Intelligent Result Until Source\tB. Vital Information Resource Under Siege\n\nC. Viral Important Record User Searched\tD. Very Interchanged Resource Under Search\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is Vital Information Resource Under Siege");getch();
			   goto score;
		       break;
			   }

}
}
	score:
    system("cls");
	score=(float)countr*200000;
	if(score>0.00 && score<2000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t\t\t You won Rs %.2f",score);
		 goto go;
		 }

	 else if(score==2000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t You won Rs %.2f !!!!",score);
	    printf("\t\t Thank You!!");
	}
	 else
   {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
		goto go;
		}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;
		}
	
}
return 1;
}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
	}

    void reset_score()
              {system("cls");
                float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
              fclose(f);
	}

   void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game............................");
    printf("\n >> There are two rounds in the game, WARM-UP ROUND & CHALLENGE ROUND");
    printf("\n >> In warmup round you will be asked a total 3 questions on Computer  ");
    printf("\n    science. You will be eligible to play the game if you can give atleast ");
    printf("\n    2 right answers otherwise you can't play the Game.");
    printf("\n >> Your game starts with the CHALLENGE ROUND. In this round you will be asked   ");
    printf("\n    total 10 questions each right answer will be awarded Rs 20,000.");
    printf("\n    By this way you can win upto Rs 2,00,000 in this game.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right   ");
    printf("\n    answers. ");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t********C PROGRAM QUIZ GAME is developed by CODE-********\n\tVedika Pathak   - H2 1906096\n\tJanhavi Patil   - H2 1906100\n");
	printf("\n\tPhalguni Savale - H2 1906113\n\tNeha Wakhare    - H2 1906139");
	}

void edit_score(float score, char plnm[20])
	{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
        fclose(f);	
    
	  }
	}











