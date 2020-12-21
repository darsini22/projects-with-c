#ifndef MAN_H_INCLUDED
#define MAN_H_INCLUDED
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#ifdef __unix__
#include <unistd.h>
#elif defined _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif
void title(void); //function prototype for title
void inst(void);       //function prototype for instructions
void hangman(int,int);   //function prototype for hangman
void credits(void);      //function prototype for credits
void gotoxy(int x,int y)
{
printf("%c[%d;%df",0x1B,y,x);
}
void title(void)   //defining title
{
      printf("--------------------------------------------\n");
      printf("| #  #   #   #   #  #### #   #   #   #   # |\n");
      printf("| #  #  # #  ##  # #     ## ##  # #  ##  # |\n");
      printf("| #### ##### # # # #  ## # # # ##### # # # |\n");
      printf("| #  # #   # #  ## #   # #   # #   # #  ## |\n");
      printf("| #  # #   # #   #  ###  #   # #   # #   # |\n");
      printf("--------------------------------------------\n\n");
}
void inst(void)    //defining instructions
{
      system ("cls");
      printf("\n\n\n\t\t INSTRUCTIONS \n\t\t ============");
      printf("\n\n   1: HANGAMN IS THE GAME WHERE YOU HAVE TO GUESS THE WORD.");
      printf("\n   2: YOU WILL HAVE TO GUESS THE MAXIMUM WORDS FOR THE MAXIMUM SCORE.");
      printf("\n   3: EVERY LEVEL WILL HAVE THE NEW WORD .");
      printf("\n   4: 1 CORRECT LETTER = 1 SCORE");
      printf("\n   5: YOU HAVE THE n CHOICES TO FIND THE MAXIMUM WORDS\n\n\n");

      sleep(10);          //time
      system ("cls");               //clear the screen
      printf("\n\n\n\n\t\t   HOW TO PLAY \n\t\t ===========");
      printf("\nUse your keyboard and guess the word . if you press any letter and the letter is in the word the game will tell you the position of the game . \nguess more , score more . \n\n \t\t\t BEST OF LUCK !");
      sleep(5);
      system ("cls");
      }
void hangman(int a,int score) {    //defining hangman
 switch (a) {
       case 1 :
        gotoxy(16,16);
      {

      printf("  _______\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      //soud(200);            ////soud on wrong letter
      sleep(2);
     //no//soud();
     }
     break;


     case 2 :
      //printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |\n");
      printf("  |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      //soud(200);
      sleep(2);
     //no//soud();
     break;

     case 3 :
     // printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |    |\n");
      printf("  |    |\n");
      printf("  |\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      //soud(200);
      sleep(2);
     //nosoud();
     break;




     case 4 :
      //printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    O \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   /\n");
      printf("__|_________\n\n");
      printf("\nYour score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      //soud(200);
      sleep(2);
     //no//soud();
     break;


     case 5 :
      //printf("\n\t\t\tAmount of wrong letters: %d\n\n", a);
      printf("  _______\n");
      printf("  |/   | \n");
      printf("  |    X \n");
      printf("  |   \\|/\n");
      printf("  |    | \n");
      printf("  |   / \\\n");
      printf("__|_________\n\n");
      printf("\nTotal score = %d",score);
      printf("\n\t\t\t\t Chances Left=%d",5-a);
      printf("\n\nYOU ARE DEAD ! GAME OVER!");
      //soud(440);
      sleep(5);
      //soud(200);
      //sleep(3);
      //soud(200);
      //sleep(3);
      //soud(440);
      //sleep(1);
      //nosoud();
       return 0;                                    //exit
     break;

 }
}                               //defining credits
void credits(void)
{
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tPROJECT\n\t\t\t     HANGMAN IN C");
sleep(2);
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tMADE BY\n\t\t\t     DARSINI K, KAAMESH K");
sleep(2);
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tROLL NO\n\t\t\t     20pt05,20pt13");
sleep(2);
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tDEPARTMENT\n\t\t\t     MSC THEORITICAL COMPUTER SCIENCE ");
sleep(2);
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tINSTITUTE\n\t\t\t    PSG College of Technology");
sleep(2);
system ("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tSUBMITTED TO\n\t\t\t       Mr.SENTHIL KUMARAN   ");
sleep(2);
system ("cls");
}


#endif // MAN_H_INCLUDED
