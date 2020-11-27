#include "Array.h"

int main(int argc, char const *argv[])
{
    int Len=15,ser=1,st=0;
    SqList L6,buf;
    initR(L6,Len);
    buf=L6;

    while (Len--)
    printf("%-6d",ser++);
    printf("\n");
    char str[10][20]= {};//name here
    printf("%20s     ",0);
    scanf(buf);
   
    InertSort(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    BInsertSort(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    int firs,tail;
    WInsert(L6,L6,firs,tail);
    printf("%20s     ",str[st++],firs,tail);
    scanf(L6,firs,tail);
    L6=buf;

    TableInsertSort(L6);
    RangeOfTableInsert(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    int dk[]={1,2,3};
    ShellSort(L6,dk,3);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;


    BableSort(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    Qsort(L6,1,L6.Length);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    SelectSort(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    HeapSort(L6);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    Msort(L6,L6,1,L6.Length);
    printf("%20s     ",str[st++]);
    scanf(L6);
    L6=buf;

    return 0;
}

