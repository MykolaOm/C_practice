/* include */
#include <stdlib.h>


int QuestionScan(void)
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
   mf = fopen ("questions.txt","r"); //questions.txt

   // �������� �������� �����
   if (mf == NULL) {printf ("error\n"); return -1;}
   else printf ("done\n");

    printf ("Rows scaned:");

   //������ (���������) ������ �� ����� � ����������� �����
   while (1)
   {
      // ������ ����� ������  �� �����
      estr = fgets (str,sizeof(str),mf);
    if (flag == 0)
	{
	 strcpy(HardQ[i].Question,str);
	}
       if (flag == 1)
	{
	 strcpy(MidQ[i].Question,str);
	}
	 if (flag == 2)
	{
	 strcpy(LowQ[i].Question,str);
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

