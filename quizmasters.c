#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     printf("\t\t\t  << QUIZ MASTERS >>\n");
     printf("\n\t\t**************");

     printf("\n\t\t\t      WELCOME\n ");
     printf("\n\t\t\t        to\n ");
     printf("\n\t\t\t    THE QUIZ  ");
     printf("\n\t\t");
     printf("\n\t\t**************");
     printf("\n\t\t**************");
     printf("\n\t\t > Press S to start the quiz");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t______________\n\n");
     choice=toupper(getch());

     if(choice=='V')
	 {
         system("cls");
         show_record();
         system("cls");
         goto mainhome;
	 }

     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }

     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     getch();
	     goto mainhome;
      }

     else if (choice=='Q')
	 {
         exit(1);
     }

    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n **** Welcome %s to Quiz Masters ******",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n ****************************");
        printf("\n >> There are 2 rounds in this Quiz,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 10 questions to test your");
        printf("\n    coding knowledge. You are eligible to play the quiz if you give atleast 6");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your quiz starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the quiz!\n");
        printf("\n Press any other key to return to the main menu!");

       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }

       else
		{
            system("cls");
            goto mainhome;
        }


     home:
     system("cls");
     count=0;


     for(i=1;i<=10;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
		          printf("\n\nA collecion of 8 bits are called?");
		          printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.byte");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nWhich of the following is a Palindrome number?");
		          printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		          if (toupper(getch())=='C')
		          {
			        printf("\n\nCorrect!!!");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }


        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.23232");
		        getch();
		        system("cls");
		        break;
  	   	}

        system("cls");

        case 3:
		printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");
		printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");


        if (toupper(getch())=='B')
		{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			system("cls");
            break;
        }


        else
        {
               printf("\n\nWrong!!! The correct answer is B.Fortran");
		       getch();
		       system("cls");
               break;
        }
        case 4:
        printf("\n\nPredict the output of the following code\n\n void main()\n\n{\n\n int x=5\n\n if(x<1)\n\n printf('hello');\n\n if(x==5)\n\n printf('hi')n\n else\n\n printf('no')n\n}");
        printf("\n\nA. hi\t\tB. no\n\nC. hello\t\tD. HELLO");

        if(toupper(getch())=='A')
        {

            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {
            printf("\n\nWrong!!! The correct answer is A.hi");
            getch();
            system("cls");
            break;
        }
        case 5:
        printf("\n\nWhich standard library function can return a pointer to the last occurence of a character in a string ?");
        printf("\n\nA. stchar()\t\tB. strrchr()\n\nC. strchar() & stchar()\t\tD. strrchar() ");

        if(toupper(getch())=='B')
        {

            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {

            printf("\n\nWrong!!! The correct answer is B. strrchr()");
            getch();
            system("cls");
            break;
        }
        case 6:
        printf("\n\nWho developed C programming language ?");
        printf("\n\nA.Bjarne Stroustrup\t\tB. James Gosling\n\nC. Dennis Ritchie\t\tD. Ray Boyce");

        if(toupper(getch())=='C')
        {
            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {

            printf("\n\nWrong!!! the correct answer is C. Dennis Ritchie");
            getch();
            system("cls");
            break;
        }
        case 7:
        printf("\n\nMaximum value of an unsigned integer is ?");
        printf("\n\nA. 65535\t\tB. 32767\n\nC.-32767\t\tD. -65535");

        if(toupper(getch())=='A')
        {

            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {

            printf("\n\nWrong!!! the correct answer is A. 65535");
            getch();
            system("cls");
            break;
        }
        case 8:
        printf("\n\nThe keyword typedef is used to ?");
        printf("\n\nA. Create a type of function\t\tB. Define the type of function\n\nC. Define the type of a variable\t\tD. Create a new datatype name");

        if(toupper(getch())=='D')
        {
            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {

            printf("\n\nWrong!!! the correct answer is D. Create a new datatype name");
            getch();
            system("cls");
            break;
        }
        case 9:
        printf("\n\nWhich of the following cannot be used as identifiers");
        printf("\n\nA. Letters\t\tB. Digits\n\nC.Underscores\t\tD. Spaces");

        if(toupper(getch())=='D')
        {
            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;
        }
        else
        {
            printf("\n\nWrong!!! the correct answer is D. Create a new datatype name");
            getch();
            system("cls");
            break;
        }
        case 10:
        printf("\n\nWhat is the output of the following\n\n #include<stdio.h>\n\n int main()\n\n {\n\n int a=10, b,c;\n\n b=&a;\n\n printf('%d',a*b*a+*b);\n\n return 0; ");
        printf("\n\nA.1100\t\tB. 1010\n\nC. 1110\t\tD.1001");

        if(toupper(getch())=='B')
        {
            printf("\n\nCorrect!!!");
            count++;
            getch();
            system("cls");
            break;

        }
        else
        {
            printf("\n\nWrong!!! the correct answer is B. 1010");
            getch();
            system("cls");
            break;
        }
      }
  }


    if(count>=6)
	{
                goto test;
    }

    else
	{
            	system("cls");
            	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            	getch();
            	goto mainhome;
	}

     test:
     system("cls");
     printf("\n\n\t** CONGRATULATION %s you are eligible to play the Game **",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
     {
                              goto game;
     }


     game:
     countr=0;
     for(i=1;i<=15;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!");countr++;getch();
			                      break;
                                  getch();
         }


        else
        {
                                  printf("\n\nWrong!!! The correct answer is C.Printer");
                                  getch();
		                          goto score;
		                          break;
        }


    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
         }


    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Movie file");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D')
		{
                     printf("\n\nCorrect!!!");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is D.Optical disk");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  countr++;
                                  getch();
			                      break;
                                  }

        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        goto score;
		        break;
		       }


        case 5:
		printf("\n\n\nWhich of he following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\nWhat kind of file extension .bak?,");
		printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Backup file");
		       getch();
		       goto score;
		       break;
		       }

		case 7:
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is D.CDROM");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nThe ___ shows all the web sites any pages that you have visited one of recent time ");
		printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Hisory list");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nA 32 bit word computer can access __ bytes at a time ");
		printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.8");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;

                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();
		       goto score;
		       break;
        }
        case 11:
        printf("\n\nWhat does HTML stand for ?");
        printf("\n\nA.Hyper Trainer Marketer Language\t\tB. Hyper Text Marketing Language\n\nC. Hyper Text Markup Language\t\tD. Hyper Text Markup Leveler");

        if(toupper(getch())=='C')
        {
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;

        }
        else
        {
            printf("\n\nWrong!!! The correct answer is C.Hyper Text Markup Language");
            getch();
            goto score;
            break;
        }
        case 12:
        printf("\n\nWhich of the following was used in programming the first computers ?");
        printf("\n\nA. Onject code\t\tB. Souce code\n\nC. Assemble language\t\tD. Machine Language");

        if(toupper(getch())=='D')
        {
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;

        }
        else
        {
            printf("\n\nWrong!!! The correct answer is D.  Machine language");
            getch();
            goto score;
            break;
        }
        case 13:
        printf("\n\nWho developed the LSIP programming language ?");
        printf("\n\nA. Ken Thompson\t\tB. Donald Knuth\n\nC. John McCarthy\t\tD. Von Belt");

        if(toupper(getch())=='C')
        {
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;

        }
        else
        {
            printf("\n\nWrong!!! The correct answer is  C. John McCarthy");
            getch();
            goto score;
            break;
        }
        case 14:
        printf("\n\nWhich of the following audio/video formats was developed by Microsoft ?");
        printf("\n\nA. WMA\t\tB. ADX\n\nC. MPEG\t\tD. AVS");

        if(toupper(getch())=='A')
        {
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;

        }
        else
        {
            printf("\n\nWrong!!! The correct answer is  A. WMA");
            getch();
            goto score;
            break;
        }
        case 15:
        printf("\n\nWhat is the full form of DDL ?");
        printf("\n\nA. Data Definition Language\t\tB. Data Debugging Language\n\nC. Determination Language\t\tD. None of these ");

        if(toupper(getch())=='A')
        {
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;

        }
        else
        {
            printf("\n\nWrong!!! The correct answer is  A. Data Definition Language");
            getch();
            goto score;
            break;
        }



		}
  }


	score:
    system("cls");
	score=(float)countr*100;
	if(score>0.00 && score<10000)
	{
	   printf("\n\n\t\t****** CONGRATULATIONS *******");
       printf("\n\t You won %.2f points",score);
       goto go;
    }

	 else if(score==10000.00)
	 {
	    printf("\n\n\n \t\t****** CONGRATULATIONS ******");
	    printf("\n\t\t\t\t You won %.2f points",score);
	    printf("\n\t\t\t\t Thank You !!");
	 }
	 else
     {
	    printf("\n\n\t**** SORRY YOU DIDN'T WIN THE QUIZ ****");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
     }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
        else
	    {
	     	edit_score(score,playername);
		    goto mainhome;
        }
      }
     }

void show_record()
{

	 char name[20];
	 float scr=0;
	 FILE *f;
	 f=fopen("score.txt","r");
	 fscanf(f,"%s%f",&name,&scr);
	 printf("\n\n\t\t*********************");
	 printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
	 printf("\n\n\t\t*********************");
	 fclose(f);
	 getch();
}

void reset_score()
{
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
	printf("\n\n\t\t**********************");
	printf("\n\n\t\t %s has secured the Highestt score %f",nm,sc);
	printf("\n\n\t\t %s has secured the least score %f",nm,sc);
    fclose(f);
}

void help()
{   system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 10 questions to test your");
    printf("\n    coding knowledge. You will be eligible to play the game if you can give atleast 6");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 15 questions each right answer will be awarded 10 points with 10,000.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t********BEST OF LUCK************");}

void edit_score(float score, char playernm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f points",playernm,sc); //print in player name
	    fclose(f);
      }
}