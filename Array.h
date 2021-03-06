#include<stdio.h>
#include<windows.h>
#include<time.h>

#define MAXSIZE 20
typedef int KeyType;
#define LT(a,b) ((a)<(b))
#define EQ(a,b) ((a)==(b))
#define LQ(a,b) ((a)<=(b))
#define SWAP(a,b,buf) ((buf)=(a),(a)=(b),(b)=(buf))

 

typedef struct {
    KeyType key;
    union 
    {
        KeyType ontherInfo;
        KeyType next;
    };
    
}RedType;

typedef struct{
    RedType r[MAXSIZE+1];
    int Length;
}SqList,SlinkList;

typedef struct{
    RedType *elem;
    int Length;
}SSTable;

void scanf(SqList L){
    for (int i = 1; i <= L.Length; i++)
    {
        printf("%-6d",L.r[i].key);
    }
    printf("\n");
}

void scanf(SSTable L){
    for (int i = 1; i <= L.Length; i++)
    {
        printf("%-6d",L.elem[i].key);
    }
    printf("\n");
}

void scanf(SqList L2,int fir,int fin ){
    for (int i = fir; i <= MAXSIZE&&fir>1; i++) //i!=1
    {
        printf("%-6d",L2.r[i]);
    }

    for (int i = 1; i <= fin; i++)
    {
        printf("%-6d",L2.r[i]);
    }
    printf("\n");
}

void initR(SqList &L,int Length){
    L.Length=0;
    srand((int)time(0));
    for (int i = 0; i < Length; i++)
   {
      L.r[++L.Length].key=rand()%40+30;
   }
}

void initR(SSTable &L,int Length){
    L.Length=Length;
    L.elem=(RedType*)malloc(sizeof(RedType)*(L.Length+1));


    L.Length=0;
    srand((int)time(0));
    for (int i = 0; i < Length; i++)
   {
      L.elem[++L.Length].key=rand()%40+30;
   }
}

void InertSort(SqList &L){
    for (int i = 2; i <= L.Length; ++i)
    {
        if (LT(L.r[i].key,L.r[i-1].key)) {
            L.r[0]=L.r[i];
            L.r[i]=L.r[i-1];

            int j;
            for( j=i-1;LT(L.r[0].key,L.r[j].key);--j){
                L.r[j]=L.r[j-1];
            }
            L.r[j+1]=L.r[0];
        }
    }
      
}

void InertSort(SSTable &L){
    for (int i = 2; i <= L.Length; ++i)
    {
        if (LT(L.elem[i].key,L.elem[i-1].key)) {
            L.elem[0]=L.elem[i];
            L.elem[i]=L.elem[i-1];

            int j;
            for( j=i-1;LT(L.elem[0].key,L.elem[j].key);--j){
                L.elem[j]=L.elem[j-1];
            }
            L.elem[j+1]=L.elem[0];
        }
    }
      
}

void BInsertSort(SqList &L1){

        for (int i = 2; i <= L1.Length; i++)
    {
        L1.r[0]=L1.r[i];
        int low ,hight,m;
        low=1,hight=i-1;
        while(low<=hight){
            m=(low+hight)/2;
            if(LT(L1.r[0].key,L1.r[m].key)) hight=m-1; 
            else low =m+1;
        }
        for(int j=i-1;j>=hight+1;j--){
            L1.r[j+1]=L1.r[j];
        }
        L1.r[hight+1]=L1.r[0];

        //after hight low

    }
 
}

void WInsert(SqList L, SqList &L2,int &fir,int &fin){
   L2.r[1]=L.r[1];
    // int fir ,fin;
    fir=fin=1;
    for (int i = 2; i <= L.Length; i++)
    {
        L2.r[0]=L.r[i];
        if( LT(L.r[i].key,L.r[1].key)){
        fir=(fir-2+MAXSIZE)%MAXSIZE+1; //fir to MXASIZE
        int j;
        for (j = fir+1;LT(L2.r[j].key,L2.r[0].key)&& j <=MAXSIZE ; j++)
        {
             L2.r[j-1]=L2.r[j];

        }
        L2.r[j-1]=L2.r[0];

        }
        else {
        fin=(fin+MAXSIZE)%MAXSIZE+1;
       int j;
        for (j = fin-1;LT(L2.r[0].key,L2.r[j].key)&& j >=2 ; j--)
        {
             L2.r[j+1]=L2.r[j];

        }
        L2.r[j+1]=L2.r[0];
        }

    }
}

void TableInsertSort(SqList &SL){
   
    SL.r[0].key=0x7fffffff;
    SL.r[0].next=1;
    SL.r[1].next=0;
    int j,pre;

    for (int i = 2; i <=SL.Length; i++)
    {
       j=SL.r[0].next;
       pre=0; //here

      while(LT(SL.r[j].key,SL.r[i].key)){
          pre=j;
          j=SL.r[j].next;
      }
        SL.r[pre].next=i;
        SL.r[i].next=j;
    } 
}

void RangeOfTableInsert(SqList &SL){
     int j,pre=SL.r[0].next;
     
    RedType buf;
    for (int i = 1; i < SL.Length; i++)
    {
      

        while(pre<i) //moved
        pre=SL.r[pre].next;
        j=SL.r[pre].next;

        if(pre!=i){
            buf= SL.r[i];
            SL.r[i]=SL.r[pre];
            SL.r[pre]=buf;
            SL.r[i].next=pre; //moved's target
        }
        pre=j;
    }
}

void scanOfTableInsert(SqList &SL){

    int 
    j=SL.Length,
    pre=SL.r[0].next;

     while(j--){
         printf("%-6d",SL.r[pre].key);
         pre=SL.r[pre].next;
     }
    
  printf("\n");
}

void ShellSort(SqList &L5 ,int dk[],int len){

    for (int i = len-1; i >=0; i--)
    {
        
        for (int j =dk[i]+1 ; j <=L5.Length; j++)
        {
            if(LT(L5.r[j].key,L5.r[j-dk[i]].key)){
                L5.r[0]=L5.r[j];
                int k;
                for (k = j-dk[i]; LT(L5.r[0].key,L5.r[k].key)&&k>0; k-=dk[i])
                {
                    L5.r[k+dk[i]]=L5.r[k];
                }

                L5.r[k+dk[i]]=L5.r[0];

            }

        }
        

    }
  


}

void BableSort(SqList &L6){

     for (int i = L6.Length; i >=1; i--)
    {   
        RedType buf;
        for (int j = 1; j <=i; j++)
        {
            if(LT(L6.r[j+1].key,L6.r[j].key)){
                buf=L6.r[j+1];
                L6.r[j+1]=L6.r[j];
                L6.r[j]=buf; 
            }
        }   
    }
}

int Partition(SqList &L6,int low,int hight){
//   RedType buf;
    L6.r[0]=L6.r[low];
    int p=L6.r[low].key;
    while(low<hight){
        while(low<hight&& LQ(p,L6.r[hight].key)) hight--;
        L6.r[low]=L6.r[hight];
        while(low<hight&& LQ(L6.r[low].key,p)) low++;
        L6.r[hight]=L6.r[low];
    }
    L6.r[low]=L6.r[0];  //low = hight h<p low>p
    return low;
}

void Qsort(SqList &L6,int low,int hight){
    if (low <hight) //not while
    {
        int p=Partition(L6,low,hight);
        Qsort(L6,low,p-1);
        Qsort(L6,p+1,hight);
    }
}

int FindMin(SqList &L6 ,int low,int hight){
    int min =low;
    low--;
    while (low<hight) // one with me
    if (LT(L6.r[++low].key,L6.r[min].key)) min=low;
    return min;
}

void SelectSort(SqList &L6){
    for (int i = 1; i < L6.Length; i++)
    {
        int min =FindMin(L6,i,L6.Length);
        RedType buf;
        if(min-i){ //not i ,not while
            buf=L6.r[min];
            L6.r[min]=L6.r[i];
            L6.r[i]=buf;
        }
    }
}

void HeapAdjust(SqList &L6,int low ,int hight){
    // just low
    RedType buf=L6.r[low];
    for (int i = low*2; i <=hight; i*=2) //child
    {
        //choice max, have right
        if(i<hight&& LT(L6.r[i].key,L6.r[i+1].key))i++;
        //right position
        if(LQ(L6.r[i].key,buf.key)) break;
        L6.r[low]=L6.r[i];
        low=i;
    }
    // low is riht now
    L6.r[low]=buf;
}

void HeapSort(SqList &L6){
        //init heap
    for (int i = L6.Length/2; i >0; i--)
    {
        HeapAdjust(L6,i,L6.Length);
    }

    for (int i = L6.Length; i>1; i--)
    {
        //low(max) to tail
        RedType buf;
        buf=L6.r[i];
        L6.r[i]=L6.r[1];
        L6.r[1]=buf;

        HeapAdjust(L6,1,i-1);

    }
}

void Merge(SqList LS,SqList &L6,int low,int m,int hight){
    //your LS is sorted in two part,sliced by m
    // small 112 LS→L6
    int fl=low,fh=m+1,sl=low;

    while(fl<=m&&fh<=hight)
        if(LT(LS.r[fl].key,LS.r[fh].key)) L6.r[sl++]=LS.r[fl++];
        else L6.r[sl++]=LS.r[fh++];

    while(fl<=m) L6.r[sl++]=LS.r[fl++];
    while(fh<=hight) L6.r[sl++]=LS.r[fh++];

}

void Msort(SqList SL,SqList &L6,int low,int hight){
    //sort if posible 
    //i can sort
    SqList buf;
    int m=(low+hight)/2;
    
    if(low==hight) L6.r[low]=SL.r[low];
    else{
    Msort(SL,buf,low,m);
    Msort(SL,buf,m+1,hight);
    Merge(buf,L6,low,m,hight);
    }
}

int Search_Seq(SSTable ST,int low){

    int buf=low,b=ST.Length+1;
    ST.elem[0].key=buf;

    while(!EQ(ST.elem[--b].key,ST.elem[0].key));//here end the while

     return b;

}

int Search_Bin(SSTable ST,int buf){

    int low=1,hight=ST.Length,m;

    ST.elem[0].key=buf;
    while (low<=hight)
    {
        m=(low+hight)/2;  //112
        if(EQ(ST.elem[m].key,ST.elem[0].key)) return m;
        else if(LT(ST.elem[m].key,ST.elem[0].key))low=m+1;
        else hight=m-1;
    }
    return 0;
}
