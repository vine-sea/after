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
 
$\begin{aligned} 
  ASL_{ss}&=\sum_{i=1}^{n}{p_ic_i} \\
  &=\frac{1}{n}\sum_{i=1}^{n}{c_i} \\
  &=\frac{1}{n}*\frac{n(n+1)}{2}\\  
  &=\frac{n+1}{2}
\end{aligned}$   

$\begin{aligned}
  ASL_{ss}^{'}&=\sum_{i=1}^{n}{p_ic_i}+*\\
  &=\frac{1}{2n}\sum_{i=1}^{n}{c_i}+*\\
  &=\frac{1}{2n}*\frac{n(n+1)}{2}+\frac{n+1}{2}\\
  &=\frac{3}{4}(n+1)
\end{aligned}$

<!-- $ASL_{ss}=\frac{1}{n}\sum_{i=1}^{n}(n-i+1)$  
$ASL^{ss}=\frac{n+1}{2}$ -->
```c++
int Search_Seq(SSTable ST,int low){

    int buf=low,b=ST.Length+1;
    ST.elem[0].key=buf;

    while(!EQ(ST.elem[--b].key,ST.elem[0].key));//here end the while

     return b;

}
```
## 有序表 （斐波那契，插值）
n节点树→$h=\lfloor log_2n\rfloor+1$层  
若满二叉树→

$\begin{aligned}
  ASL_{bs}&=\sum_{i=1}^{n}{p_ic_i}\\
  &=\frac{1}{n}\sum_{i=1}^{n}{c_i}\\
  &=\frac{1}{n}\sum_{j=1}^{h}{j.2^{j-1}}\\
  &=\frac{n+1}{n}log_2(n+1)-1\\ 
  &=log_2(n+1)-1 (n>50)
\end{aligned}$

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
$PH=\sum_{i=1}^nw_ih_i$
## 索引顺序表
每块s个 共$b=\lfloor n/s\rfloor$块  

$\begin{aligned}
  ASL_{bs} &=L_b+L_w \\
&=\frac{1}{b}\sum_{i=1}^bi+\frac{1}{s}\sum_{j=1}^sj\\
&=\frac{b+1}{2}+\frac{s+1}{2}\\
&=\frac{1}{2}(\frac{n}{s}+1)+\frac{s}{2}
\end{aligned}$

$ASL_{bs}^{'}≈log_2(\frac{n}{s}+1)+\frac{s}{2}$

# `动态查找`
## 二叉排序树
## 平衡二叉树（删，插）
h层  至少  
$N_h=N_{h-1}+N_{h-2}+1$  
$F_h=\frac{1}{\sqrt{5}}(\frac{1+\sqrt{5}}{2})^h$  
   
$\begin{aligned}
  N_h&=F_{h+2}-1(n>0)\\
  &≈\frac{1}{\sqrt{5}}(\frac{1+\sqrt{5}}{2})^{h+2}-1\\
\end{aligned}$  
## B-树（删，插）
+ 多m/节点
+ 少$\lceil m/2\rceil$/节点（根2）
+ (n,$A_0$,$K_1$,$A_1$,...,$K_n$,$A_n$)
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
- $H_i=(H(key)+di) MOD m$ 
  - $di=1,2,3...m-1$
  - $di=1^2,-1^2,2^2,-2^2...±k^2$,($k≦m/2$)
  - $di=$伪随机数列
- $Hi=RH_i(key)$,($i=1,2,3...k$)（再哈希）
- $ChainHash[m]$,(链地址)
- $HashTable[m]$ $OverTable[v]$(溢出)

$α=\frac{填入记录}{表长}$
