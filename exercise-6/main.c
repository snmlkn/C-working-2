#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//POINTER KULLANARAK HAFTANIN GÜNLERÝNÝ YAZMA

int main()
{
    char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int i;
    do
    {
        printf("haftanin kacinci gununu secmek istersin(1-7)\n");
        scanf("%d",&i);
    }
    while(i<=0 || i>7);

        printf("%s haftanin %d. gunudur.\n",gun[i-1],i);

    return 0;
}
