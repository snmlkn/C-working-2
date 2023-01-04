#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
//KULLANICIDAN ALINAN KELIMENIN PALINDROME OLMA KONTROLU
//palindrome bir kelimenin yada cümlenin saðdan ve soldan okunuþlarýnýn ayný olmasý durumudur
/*
KULLANICIYA KARAKTER DÝZÝSÝ GÝRDÝR
KARAKTER DÝZÝSÝNÝN BOYUTUNU BULDUR
KARAKTER DÝZÝSÝNÝN ÝÇÝNDEKÝ BOÞLUKLARINI SÝL
PALENDROM OLUP OLMADIÐINI KONTROL ET VE KULLANICIYA GÖSTER
*/
    void read_sentence(char tab[MAX])//GÝRÝLEN CÜMLEYÝ OKUYAN FONKSÝYON
    {
        int i=0;
        scanf("%c",&tab[i]);
        while((tab[i] != '\n')&& i<MAX)//ALT SATIRA GEÇMEYEN VE 40 KARAKTERÝ AÞMAYAN BÝR DÝZÝ KOÞULU OLUÞTURUR
        {
            i++;
            scanf("%c",&tab[i]);
        }
        tab[i]='\0';
    }

    int array_size(char tab[MAX])
{
    int i;
    for(i=0;tab[i]!='\0';i++);//dizinin boyunu bulmak için for ile sayma iþlemi yapýldý
    return i; //dizinin boyutu i deðiþkenine kaydedildi ve maine döndürüldü

}

    void space_delete(char tab[MAX])
    {
        int i,j=0;
        for(i=0;tab[i] != '\0';i++) //tab[i] diziin sonuna gelene kadar çalýþmasý için \0 koþulu
            if(tab[i]!=' ')
            {
               tab[j]=tab[i];
               j++;
            }
        tab[j]='\0';
        printf("after delete the space in sentence:\n");
        for(i=0;tab[i] != '\0';i++)//boþluk kaldýrýldýktan sonra diziyi bastýrmak için oluþturulan döngü
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

