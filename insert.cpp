#include "Array.h"

int main(int argc, char const *argv[])
{
    int Len=15,ser=1;
    SqList L6;
    initR(L6,Len);

    // while (Len--)
    // printf("%-6d",ser++);
    // printf("\n");
    
    scanf(L6);
    // BableSort(L6);
    // Qsort(L6,1,L6.Length);
    // SelectSort(L6);
    
    // HeapSort(L6);
    
    Msort(L6,L6,1,L6.Length);


    scanf(L6);
    return 0;
}

