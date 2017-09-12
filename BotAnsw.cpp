
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
   // ����������, � ������� ����� ������� ��������� �� ���������
   // ����� ������ 
   FILE *mf;
   // ����������, � ������� ���������� ����� ���������� ����������� ������
   char str[70];

   //���������, � ������� ����� ������� ����� �������, � ������� ������� 
   // ������, ��� NULL ���� ��������� ����� ����� ��� ��������� ������
   char *estr;

   // �������� ����� � ������� ������� ������� ������ � �������� � ���� 
   // ������ ������
   printf ("file opening: ");
   mf = fopen ("answers.txt","r"); //answers.txt

   // �������� �������� �����
   if (mf == NULL) {printf ("error\n"); return -1;}
   else printf ("done\n");

   printf("Rows scaned:");

   //������ (���������) ������ �� ����� � ����������� �����
   while (1)
   {
      // ������ ����� ������  �� �����
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
      //�������� �� ����� ����� ��� ������ ������
      if (estr == NULL)
      {
         // ���������, ��� ������ ���������: �������� ����
         // ��� ��� ������ ������
         if ( feof (mf) != 0)
         {  
            //���� ���� ����������, ������� ��������� � ���������� 
            //������ � ������� �� ������������ �����
             printf(" %d\n", row_count);
            printf ("\nFile reading finished\n");
            break;
         }
         else
         {
            //���� ��� ������ ��������� ������, ������� ��������� 
            //�� ������ � ������� �� ������������ �����
            printf ("\nError in reading from file\n");
            break;
         }
      }
      //���� ���� �� ����������, � �� ���� ������ ������ 
      //������� ��������� ������  �� �����

	row_count++;
   }
  

   // ��������� ����
   printf ("file closing: ");
   if ( fclose (mf) == EOF) printf ("error\n");
   else printf ("done\n");

   return 0;
}/* End */

