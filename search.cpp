#include "Array.h"

int main(int argc, char const *argv[])
{
    int a=3,b=4,buf,len=14;
    SSTable ST;
    // SWAP(a,b,buf);

    initR(ST,len);
    scanf(ST);


    if(buf=Search_Seq(ST,44))printf("find!!! here: %d\n",buf);
    else printf("not find!!!\n");

    InertSort(ST);
    scanf(ST);
  
    if(buf=Search_Bin(ST,44))printf("find!!! here: %d\n",buf);
    else printf("not find!!!\n");



    return 0;
}
