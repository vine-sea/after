+ [`静态查找`](#静态查找)
  + [顺序表(改进概率，频率)](#顺序表改进概率频率)
  + [有序表 （斐波那契，插值）](#有序表-斐波那契插值)
  + [静态树表(最优折半，非等概率)](#静态树表最优折半非等概率)
  + [索引顺序表](#索引顺序表)
+ [`动态查找`](#动态查找)
  + [二叉排序树](#二叉排序树)
  + [平衡二叉树（删，插）](#平衡二叉树删插)
  + [B-树（删，插）](#b-树删插)
  + [B+树（查找根，链）](#b树查找根链)
+ [`哈希表`](#哈希表)


[back](README.md)
# `静态查找`
## 顺序表(改进概率，频率)
 ```c++
int Search_Seq(SSTable ST,int low){

    int buf=low,b=ST.Length+1;
    ST.elem[0].key=buf;

    while(!EQ(ST.elem[--b].key,ST.elem[0].key));//here end the while

     return b;

}
```
## 有序表 （斐波那契，插值）
若满二叉树→

```c++
int Search_Bin(SSTable ST,int buf){
    // sorted 
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
```
## 静态树表(最优折半，非等概率)
带权内路径长度和  

## 索引顺序表

# `动态查找`
## 二叉排序树
## 平衡二叉树（删，插）
h层  至少  
## B-树（删，插）
+ 多m/节点
## B+树（查找根，链）
+ n子n字
+ 叶全字，链
+ 节点大（小）字
# `哈希表`
k→f(K)  
函数
- H(key)=a.key+b
- H(key)=key MOD p(p≦m,m为表长)
- 分析，取中，折叠，随机 
 
冲突





