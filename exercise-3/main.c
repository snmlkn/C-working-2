#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
//KULLANICIDAN ALINAN KELIMENIN PALINDROME OLMA KONTROLU
//palindrome bir kelimenin yada c�mlenin sa�dan ve soldan okunu�lar�n�n ayn� olmas� durumudur
/*
KULLANICIYA KARAKTER D�Z�S� G�RD�R
KARAKTER D�Z�S�N�N BOYUTUNU BULDUR
KARAKTER D�Z�S�N�N ���NDEK� BO�LUKLARINI S�L
PALENDROM OLUP OLMADI�INI KONTROL ET VE KULLANICIYA G�STER
*/
    void read_sentence(char tab[MAX])//G�R�LEN C�MLEY� OKUYAN FONKS�YON
    {
        int i=0;
        scanf("%c",&tab[i]);
        while((tab[i] != '\n')&& i<MAX)//ALT SATIRA GE�MEYEN VE 40 KARAKTER� A�MAYAN B�R D�Z� KO�ULU OLU�TURUR
        {
            i++;
            scanf("%c",&tab[i]);
        }
        tab[i]='\0';
    }

    int array_size(char tab[MAX])
{
    int i;
    for(i=0;tab[i]!='\0';i++);//dizinin boyunu bulmak i�in for ile sayma i�lemi yap�ld�
    return i; //dizinin boyutu i de�i�kenine kaydedildi ve maine d�nd�r�ld�

}

    void space_delete(char tab[MAX])
    {
        int i,j=0;
        for(i=0;tab[i] != '\0';i++) //tab[i] diziin sonuna gelene kadar �al��mas� i�in \0 ko�ulu
            if(tab[i]!=' ')
            {
               tab[j]=tab[i];
               j++;
            }
        tab[j]='\0';
        printf("after delete the space in sentence:\n");
        for(i=0;tab[i] != '\0';i++)//bo�luk kald�r�ld�ktan sonra diziyi bast�rmak i�in olu�turulan d�ng�
        {
           printf("%c",tab[i]);
        }
    }

    void reverse(char name[MAX],char rev[MAX])
    {
      int i;
      int j=(array_size(name))-1;
      for(i=0;name[i] !='\0';i++)
      {
          rev[i]=name[j];
          j--;
      }
        printf("\narray reverse type\n");
        for(i=0;i<array_size(rev);i++)
        {
            printf("%c",rev[i]);
        }
    }

  int palindrome(char array[MAX])
  {
      int test=0;
      int L;
      int i=0;
      char temp[MAX];
      space_delete(array);
      L=array_size(array);
      reverse(array,temp);
      for(i=0;i<L;i++)
      {
          if(temp[i]!= array[i])
            test=0;
          else
            test=1;
      }
      return test;
  }



int main()
{
   char sentence[MAX];
   int a;
   printf("enter a sentence\n");
   read_sentence(sentence);

   a=palindrome(sentence);
   if(a==1)
    printf("\npalindrome");
   if(a==0)
   {
    printf("\nNOT palindrome");
   }

    return 0;
}

