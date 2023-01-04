#include <stdio.h>
#include <stdlib.h>
//MATRIS,FONKSIYON VE ADRES CALISMASI
/*
1- iki boyutlu bir matris tanýmla
2- bir fonksiyon yazarak simetrik olup olmadýðýný kontrol et adres deðeri ile iþlem yap
3-bir fonksiyon yazarak diagonal olup olmadýðýný kýntrol et adres deðeri ile iþlem yap
4-matrisi ekrana bastýr
*/

void diagonal(int matris[5][5],int N,int *controlD)
{
   int i,j;
    *controlD=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j && matris[i][j]!=0)
            {
                *controlD=0;
            }
        }
    }
}

void simetrik(int matris[5][5],int N, int *controlS)
{
    int i,j;
    *controlS=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(matris[i][j] != matris[j][i])
            {
                *controlS=0;
            }
        }
    }
}
void bastir(int matris[5][5],int N)
{
    int i,j;
    printf("::::::::matris:::::::\n\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    int controlS;
    int controlD;
    //matris tanýmlanýr
    int matris[5][5];

    //matris boyutu kullanýcýdan istenir
    int N;
    printf("matris boyutunu girin\n ");
    scanf("%d",&N);

    //matris elemanlarý kullanýcýdan istenir
    printf("matris elemanlarini girin\n");
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("matris [%d][%d]: ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }

    bastir(matris,N);
    simetrik(matris,N,&controlS);
    if(controlS==1)
    {
        printf("matris simetriktir \n");
    }
    else
    {
        printf("matris simetrik degildir\n");
    }

    diagonal(matris,N,&controlD);
    if(controlD==1)
    {
        printf("matris diagonaldir\n");
    }
    else
    {
        printf("matris diagonal degildir\n");
    }
    return 0;
}
