/* include */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "BotAnsw.cpp"
#include "BotQues.cpp"
#include "Tbot.cpp"
#include "Qbot.cpp"

/* defined constans */


/* function prototype */
void BotMenu(void);
void QBot(void);


int main()
{/* Begin */

	BotMenu();
	
	getchar();


	return 0;
}/* End */

/* function */
void BotMenu(void){
	int choise;
	
		printf("Choose bot\nEnter number:\n1-ChatBot\n\n2-QBot\n\n\n\n5-Exit\n");
		scanf("%d",&choise);
		fflush(stdin);
	
			if (choise == 1 ){
				system ("cls");
				ChatBot();
				system("cls");
				BotMenu();
			}
			
			else if (choise == 2){
				system ("cls");
				QBot();
				getchar();
				system ("cls");
				
				BotMenu();
			}
			else if (choise == 5)
				exit(0);
			
			else{
			
				puts("you entered a wrong number!");
				system ("cls");
				BotMenu();
			}
}

void QBot(void){

		printf("\n***************\n");
		printf("\nQuestions:\n");
		
	QuestionScan();
		
		printf("\n***************\n");
		printf("\nAnswers:\n");
	
	AnswerScan();
	
		printf("\n***************\n");
	
	
	
		getchar();
		fflush(stdin);
		system("cls");
		Quality();
}


