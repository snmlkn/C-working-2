#include <stdio.h>
#include <stdlib.h>
//POINTER ILE KARAKTER DIZISINI BASTIRMA
int main()
{
    int i,size;
    char sin[]="sinem";
    char *p1;
    p1=sin;
    size=sizeof(sin)-1;//son karakter dizinin bittigini anlamak icin '\0' olur -1 yaparız
    for(i=0;i != size;i++)
    {
       printf("%d . karakter %c olur\n",i,*(p1+i));
    }


    return 0;
}
