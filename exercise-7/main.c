#include <stdio.h>
#include <stdlib.h>
// 3X3 LUK MATRISIN EKRANA BASTIRILMASI
int main()
{
    //3boyutllu bir matrisin kullanýcýdan alýnan deðerler ile ekrana bastýrýlmasý
    int multimat[2][3][2];
    int i,j,k;
    printf("matris degerleri\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("elements : ");
                scanf("%d",&multimat[i][j][k]);
            }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("multimat[%d] [%d] [%d] = %d\n",i,j,k,multimat[i][j][k]);
            }
        }
    }
    return 0;
}
