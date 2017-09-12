
/* defined constans */
#define Questionslength 70
#define Answerslength 40
#define AnswersMax 5 
#define StructQty 20


/* function prototype, structures */


/*we could make it as 1 list but better visibility will be with 3 separate lists of structures */
//----------------------------- HARD
typedef struct HardQ {

	char Question[Questionslength];
	char Answer[Answerslength];

}toH;


//----------------------------- MEDIUM//MIDDLE
typedef struct MidQ {

	char Question[Questionslength];
	char Answer[Answerslength];
	
}toM;


//----------------------------- LOW
typedef struct LowQ {

	char Question[Questionslength];
	char Answer[Answerslength];
	
}toL;
//-------------------------
toH HardQ[StructQty];
toL LowQ[StructQty];
toM	MidQ[StructQty];

//-------------------------

int AnswerScan(void)
{/* Begin */
int i = 0;
int flag = 0;
int row_count = 0;
   // Переменная, в которую будет помещен указатель на созданный
   // поток данных 
   FILE *mf;
   // Переменная, в которую поочередно будут помещаться считываемые строки
   char str[70];

   //Указатель, в который будет помещен адрес массива, в который считана 
   // строка, или NULL если достигнут коней файла или произошла ошибка
   char *estr;

   // Открытие файла с режимом доступа «только чтение» и привязка к нему 
   // потока данных
   printf ("file opening: ");
   mf = fopen ("answers.txt","r"); //answers.txt

   // Проверка открытия файла
   if (mf == NULL) {printf ("error\n"); return -1;}
   else printf ("done\n");

   printf("Rows scaned:");

   //Чтение (построчно) данных из файла в бесконечном цикле
   while (1)
   {
      // Чтение одной строки  из файла
      estr = fgets (str,sizeof(str),mf);
    if (flag == 0)
	{
	 strcpy(HardQ[i].Answer,str);
	}
       if (flag == 1)
	{
	 strcpy(MidQ[i].Answer,str);
	}
	 if (flag == 2)
	{
	 strcpy(LowQ[i].Answer,str);
	}
    i++;
      if (i == 20){
      	i = 0;
      	flag++;
	  }
      //Проверка на конец файла или ошибку чтения
      if (estr == NULL)
      {
         // Проверяем, что именно произошло: кончился файл
         // или это ошибка чтения
         if ( feof (mf) != 0)
         {  
            //Если файл закончился, выводим сообщение о завершении 
            //чтения и выходим из бесконечного цикла
             printf(" %d\n", row_count);
            printf ("\nFile reading finished\n");
            break;
         }
         else
         {
            //Если при чтении произошла ошибка, выводим сообщение 
            //об ошибке и выходим из бесконечного цикла
            printf ("\nError in reading from file\n");
            break;
         }
      }
      //Если файл не закончился, и не было ошибки чтения 
      //выводим считанную строку  на экран

	row_count++;
   }
  

   // Закрываем файл
   printf ("file closing: ");
   if ( fclose (mf) == EOF) printf ("error\n");
   else printf ("done\n");

   return 0;
}/* End */

