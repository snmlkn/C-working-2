#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define max 40
//POINTER KULLANARAK IKI SAYI DIZISINI BIRLESTIRME

int main()
{
    int A[max];
    int B[max];
    int *A_ptr,*B_ptr;

    int sizeA,sizeB,i;

    printf("enter A aray element number: ");
    scanf("%d",&sizeA);

    printf("enter A array elements :\n");
    for(A_ptr=A;A_ptr<A+sizeA;A_ptr++)
    {
        printf("A %d. elements:",A_ptr-A);
        scanf("%d",A_ptr);
    }

    printf("enter B array element number: ");
    scanf("%d",&sizeB);


     printf("enter B array elements :\n");
     for(B_ptr=B;B_ptr<B+sizeB;B_ptr++)
    {
        printf("B %d. elements:",B_ptr-B);
        scanf("%d",B_ptr);
    }

    printf("A array elements:");
    for(i=0;i<sizeA;i++)
    {
        printf("%4d",*(A+i));
    }
    printf("\nB array elements:");
    for(i=0;i<sizeB;i++)
    {
        printf("%4d",*(B+i));
    }

    printf("\nA and B combined :\n");
    for(A_ptr=A+sizeA,B_ptr=B;B_ptr<B+sizeB;A_ptr++,B_ptr++)
    {
        *A_ptr=*B_ptr;
    }
    for(i=0;i<sizeA+sizeB;i++)
    {
        printf("%4d",*(A+i));
    }

    return 0;
}
