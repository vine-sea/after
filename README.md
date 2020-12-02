+ [`otherInfo`](#otherinfo)
+ [`markdown`](#markdown)
+ [`Latex`](#latex)
+ [`magic tool` !](#magic-tool-)
+ [`makefile`](#makefile)
+ [`排序`](#排序)
+ [插入](#插入)
+ [交换](#交换)
+ [选择](#选择)
+ [归并 !](#归并-)
+ [基数](#基数)
+ [`查找`](#查找)
+ [静态查找](#静态查找)
+ [动态查找](#动态查找)
+ [哈希表](#哈希表)
+ [`树`](#树)
+ [二叉树](#二叉树)
+ [结构](#结构)
+ [树&森林](#树森林)
+ [赫夫曼](#赫夫曼)
+ [`图`](#图)
+ [定义](#定义)
+ [结构](#结构-1)
+ [遍历](#遍历)
+ [最小树(P.K→MST)](#最小树pkmst)
+ [拓扑（AOV）](#拓扑aov)
+ [最短(D.F,cost)](#最短dfcost)
+ [`链`](#链)
+ [`表`](#表)
+ [`栈`](#栈)

![](done/eight-figure0.svg)
![](done/eight-figure1.svg)
![](done/eight-figure2.svg)
![](done/eight-figure3.svg)
![](done/eight-figure4.svg)
 
# `otherInfo`
```
printf wrong use gbk
```
# `markdown`   
# `Latex`
```
Miktex
per.exe
tikz
cartexart
newcomand
54 before 43 after 10 used
unzip at 14:04（not do）
load iso→1408 1544（done）
$()!<dis>!:<ang>()$
\xint
\pgfmath
xfp
lua
```
almost start with
```latex
\documentclass{article}
\usepackage{tikz,geometry}
\geometry{left=2cm,right=2cm,top=2cm,bottom=2cm}
\usetikzlibrary{calc,intersections,through,backgrounds}

```
export
```latex
\usetikzlibrary{external}
\tikzexternalize
pdftex --shell-escape ten
```

## code here section one
```latex
\documentclass{article}
\usepackage{tikz}
\usetikzlibrary{intersections,arrows.meta}
\usetikzlibrary {angles,quotes} 


\begin{document}
\tikzset{grid/.style={step=.5cm,help lines,color=#1!50},
grid/.default=blue,
axes/.style=,
important line/.style={very thick},
information text/.style={rounded corners,fill=red!10,inner sep=1ex}}

\colorlet{anglecolor}{green!50!black} 
\colorlet{sincolor}{red} 
\colorlet{tancolor}{orange!80!black}
\colorlet{coscolor}{blue}

\begin{center}
    \section{one}
    %t1 shoud package
    \tikz \draw[thick,rounded corners=8pt] 
    (0,0) -- (0,2) -- (1,3.25) -- (2,2) -- (2,0) -- (0,2) -- (2,2) -- (0,0) -- (2,0);

    \section{two}
    %t2
    We are working on
    \begin{tikzpicture} [scale=3,>=Stealth]%arrow.meta need
    %剪切部分
    % \clip (-0.1,-0.2) rectangle (1.1,0.75);   
    % \clip[draw] (0.5,0.5) circle (.6cm);
    \draw[grid=gray] (-1.4,-1.4) grid (1.4,1.4);
    \draw[->] (-1.5,0) -- (1.5,0); 
    \draw[->](0,-1.5) -- (0,1.5);
    \draw (0,0) circle [radius=1cm]; 
    \draw (3mm,0mm) arc 
    [start angle=0, end angle=30, radius=3mm];

    % \fill[green!20!white] (0,0) -- (3mm,0mm) 
    % arc [start angle=0, end angle=30, radius=3mm] --(0,0);
    
    % \filldraw[fill=green!20!white, draw=green!50!black]
    %  (0,0) -- (3mm,0mm) arc [start angle=0, end angle=30, radius=3mm] -- cycle;

    \shadedraw[left color=gray,right color=green, draw=green!50!black] (0,0) -- (3mm,0mm)
    arc [start angle=0, end angle=30, radius=3mm] -- cycle;
   
    % \draw[red,very thick] (30:1cm) -- +(0,-0.5);
    \draw[blue,very thick] (30:1cm) ++(0,-0.5) --
    node[above=1pt,fill=white]{$\cos \alpha$} (0,0);%++&+

    \draw[red,very thick] (30:1cm) --
    node[left=1pt,fill=white]{$\sin \alpha$} (30:1cm |- 0,0);%here it is
    
    \path [name path=upward line] (1,0) -- (1,1);
    \path [name path=sloped line] (0,0) -- (30:1.5cm);
    % a bit longer, so that there is an intersection
    % (add `\usetikzlibrary{intersections}' after loading tikz in the preamble) 
    \draw [name intersections={of=upward line and sloped line, by=x}]
    [very thick,orange] (1,0) --
    node[right=1pt,fill=white]
    % {$\tan \alpha$} 
    % displaystyle color
    {$\displaystyle \tan \alpha \color{black}= 
    \frac{{\color{red}\sin \alpha}}{\color{blue}\cos \alpha}$}
    (x); 
    
    \draw (0,0) -- (x);

    % \foreach \x in {-1,-0.5,1}
    \foreach \x/\xtext in {-1, -0.5/-\frac{1}{2}, 1}
    % \draw (\x,-1pt) -- (\x,1pt);
    \draw[xshift=\x cm] (0pt,-1pt) -- (0pt,1pt) node[anchor=north] {$\xtext$};

    % \foreach \y in {-1,-0.5,0.5,1}
    \foreach \y/\ytext in {-1, -0.5/-\frac{1}{2}, 0.5/\frac{1}{2}, 1}
    % \draw (-1pt,\y cm) -- (1pt,\y cm) node[anchor=east] {$\ytext$};
    \draw (-1pt,\y cm) -- (1pt,\y cm) node[fill=yellow,left=5pt] {$\ytext$};




\draw[xshift=1.2cm,yshift=-1cm] 
%at the midle
node[right,text width=3cm,information text] {
The {\color{anglecolor} angle $\alpha$} is $30^\circ$ in the example ($\pi/6$ in radians). 
The {\color{sincolor}sine of $\alpha$}, which is the height of the red line, is
\[ {\color{sincolor} \sin \alpha} = 1/2. \] By the Theorem of Pythagoras ...
};


\end{tikzpicture}

    %t2.3
    % \tikz 
    \begin{tikzpicture}
        \draw[step=.5cm,gray,very thin] (-1.4,-1.4) grid (1.4,1.4);
        \draw  (-1.5,0) -- (1.5,0) -- (0,-1.5) -- (0,1.5);
        \draw (0,0) circle [radius=1cm];  
    \end{tikzpicture}
   
    %2.4
    \tikz \draw[rotate=30,scale=3] 
    (0,0) ellipse [x radius=6pt, y radius=3pt];

    \tikz \draw[rotate=30,scale=3] 
    (0,0) rectangle (2*6pt,2*3pt);

    \begin{tikzpicture} 
        % [grid/.style ={help lines,color=#1!50}, 
        % grid/.default=blue]
    \draw[grid=gray] (-1.4,-1.4) grid (1.4,1.4);
    \filldraw [gray] 
        (0,0) circle [radius=2pt] 
        (1,1) circle [radius=2pt] 
        (2,1) circle [radius=2pt]
        (2,0) circle [radius=2pt];
    \draw (0,0) .. controls (1,1) and (2,1) .. (2,0);
    \end{tikzpicture}

    %2.10
    \tikz \draw[scale=.5] (0,0) arc 
    [start angle=0, end angle=315,
    x radius=1.75cm, y radius=1cm];

    %2.12
    \tikz \draw
    [grid] (0,0) rectangle (1,1) (0,0) parabola (1,1);

    \tikz \draw[x=1pt,y=1pt] 
    (0,0) parabola  (4,16) (6,12);

    
    \begin{tikzpicture}[scale=1]
        \filldraw [gray]
        (0,0) circle [radius=2pt] 
        (4pt,16pt) circle [radius=2pt] 
        (6pt,12pt) circle [radius=2pt]  ;
        \draw[x=1pt,y=1pt] 
        (0,0) parabola bend (4,16) (6,12);
    \end{tikzpicture} 

    A sine \tikz \draw[x=1ex,y=1ex] 
    (0,0) sin (1.57,1) cos (3.14,0); curve

    \tikz \draw[x=1.57ex,y=1ex,scale=2] %π/2≈1.57
    (0,0) sin (1,1) cos (2,0) sin (3,-1) cos (4,0) 
    (0,1) cos (1,0) sin (2,-1) cos (3,0) sin (4,1);


    %2.14
    \tikz \shade 
    (0,0) rectangle (2,1) (3,0.5) circle (.5cm);

    \begin{tikzpicture}
        % [rounded corners,ultra thick] 
        \shade[top color=yellow,bottom color=black] 
        (0,0) rectangle +(2,1);
        \shade[left color=yellow,right color=black]
        (3,0) rectangle +(2,1);
        \shadedraw[inner color=yellow,outer color=black,draw=yellow] 
        (6,0) rectangle +(2,1);
        \shade[ball color=green] (9,.5) circle (.5cm);
    \end{tikzpicture}

    %2.15
    \begin{tikzpicture} \def\rectanglepath{-- ++(1cm,0cm) -- ++(0cm,1cm) -- ++(-1cm,0cm) -- cycle} \draw (0,0) \rectanglepath; \draw (1.5,0) \rectanglepath;
    \end{tikzpicture}

    \begin{tikzpicture} \def\rectanglepath{-- +(1cm,0cm) -- +(1cm,1cm) -- +(0cm,1cm) -- cycle} \draw (0,0) \rectanglepath; \draw (1.5,0) \rectanglepath;
    \end{tikzpicture}


    \tikz \draw (0,0) rectangle +(1,1) (1.5,0) rectangle +(1,1);


    %2.18
    \begin{tikzpicture}[ultra thick]
        \draw (0,0) -- (0,1);
        \begin{scope}[thin] 
        \draw (1,0) -- (1,1); 
        \draw (2,0) -- (2,1);
        \end{scope}
        \draw (3,0) -- (3,1);
    \end{tikzpicture}

    %2.19

    \tikz \draw (0,0) -- (0,0.5) [xshift=2pt] (0,0) -- (0,0.5);

    \begin{tikzpicture}[even odd rule,rounded corners=2pt,x=10pt,y=10pt] 
        \filldraw
        [fill=yellow!80!black] (0,0) rectangle (1,1) 
        [xshift=5pt,yshift=5pt] (0,0) rectangle (1,1)
        [rotate=30] (-1,-1) rectangle (2,2)
         ;
    \end{tikzpicture}


    %2.20
    \begin{tikzpicture}
    \foreach \x in {1,2,...,5,7,8,...,12}
    \foreach \y in {1,...,5} {
        \draw (\x,\y) +(-.5,-.5) rectangle +(.5,.5);
        \draw (\x,\y) node{\x,\y};
    }
    \end{tikzpicture}

    %2.20
    \begin{tikzpicture} 
        \draw (0,0) .. controls (6,1) and (9,1) .. 
        node[near start,sloped,above] {near start}
        node {midway} 
        node[very near end,sloped,below] {very near end} 
        (12,0);
    \end{tikzpicture}

    %2.22

    \begin{tikzpicture}[scale=3] 
    \coordinate (A) at (1,0); 
    \coordinate (B) at (0,0); 
    \coordinate (C) at (30:1cm);
    \draw (A) -- (B) -- (C) 
    pic %section18
    [draw=green!50!black, fill=green!20, angle radius=9mm, "$\alpha$"]
    {angle = A--B--C}
    ;
    \end{tikzpicture}






\end{center}
\end{document}

% \begin{document}
% \begin{tikzpicture}
 
% \end{tikzpicture}
% \end{document}

```

## code here section three
```latex
\documentclass{article} % say 
\usepackage{tikz}
 
\usetikzlibrary{arrows,decorations.pathmorphing,backgrounds,positioning,fit,petri}
\usetikzlibrary {arrows.meta}


\tikzset{
place/.style={circle,draw=blue!50,fill=blue!20,thick, 
    inner sep=0pt,minimum size=6mm},
transition/.style={rectangle,draw=black!50,fill=black!20,thick,
    inner sep=0pt,minimum size=4mm}}


    
\begin{document} 

\begin{center}
    \begin{tikzpicture}
        % [inner sep=2mm,
        % place/.style={circle,draw=blue!50,fill=blue!20,thick}, 
        % transition/.style={rectangle,draw=black!50,fill=black!20,thick}] 
  
        % [place/.style={circle,draw=blue!50,fill=blue!20,thick, 
        %     inner sep=0pt,minimum size=6mm},
        % transition/.style={rectangle,draw=black!50,fill=black!20,thick,
        %     inner sep=0pt,minimum size=4mm}]

        [bend angle=45,
        pre/.style={<-,shorten <=1pt,>={Stealth[round]},semithick},
        post/.style={->,shorten >=1pt,>={Stealth[round]},semithick}]


        % \draw (0,0) -- (1,1);
        % \path 
        % ( 0,2) node [shape=circle,draw] {} 
        % ( 0,1) node [shape=circle,draw] {}
        % ( 0,0) node [shape=circle,draw] {} 
        % ( 1,1) node [shape=rectangle,draw] {}
        % (-1,1) node [shape=rectangle,draw] {};


  
    % \node at ( 0,2) [place] {}; 
    % \node at ( 0,1) [place] {}; 
    % \node at ( 0,0) [place] {}; 
    % \node at ( 1,1) [transition] {};
    % \node at (-1,1) [transition] {};


    % \node[place] (waiting 1) at ( 0,2) {};
    % \node[place] (critical 1) at ( 0,1) {};
    % \node[place] (semaphore) at ( 0,0) {};
    % \node[transition] (leave critical) at ( 1,1) {};
    % \node[transition] (enter critical) at (-1,1) {};



    \node[place]    (waiting) {}; 
    \node[place]    (critical)  [below=of waiting] {}; 
    % \node[place]    (semaphore)  [below=of critical,label=above:$s\le3$] {};
    \node[place]    (semaphore)  [below=of critical, label={[red]above:$s\le3$} ] {};
  
    % \node[transition] (leave critical) [right=of critical] {};
    % \node[transition] (enter critical) [left=of critical] {};

    % \draw [->] (enter critical) to (critical);
    % \draw [->] (waiting) to [out=180,in=90] (enter critical);
    % \draw [->] (enter critical) to [bend right=45] (semaphore);
    
    \node[transition] (leave critical) [right=of critical] {} 
        edge [<-] (critical)
        edge [->,bend right=45] (waiting)
        edge [<-,bend left=45] (semaphore);
    \node[transition] (enter critical) [left=of critical] {}
        edge [->] (critical)
        edge [<-,bend left=45] (waiting)
        edge [->,bend right=45] (semaphore);

    \end{tikzpicture}



    \begin{tikzpicture} 
        [bend angle=45, 
        pre/.style={<-,shorten <=1pt,>={Stealth[round]},semithick},
        post/.style={->,shorten >=1pt,>={Stealth[round]},semithick}]
        \node[place] (waiting)       {};
        \node[place,tokens=1]   (critical)   [below=of waiting] {}; 
        \node[place]  (semaphore)  [below=of critical] {};


        %s→t
        \node[transition] (leave critical) [right=of critical] {} 
            edge [pre] (critical)
            edge [post,bend right] (waiting)
            edge [pre, bend left] (semaphore);
        \node[transition] (enter critical) [left=of critical] {} 
            edge [post] (critical)
            edge [pre, bend left] (waiting) 
            edge [post,bend right] (semaphore);


        \begin{scope}[on background layer]
            \node [fill=black!30,
                fit=(waiting) 
                    (critical)
                    (semaphore) 
                    (leave critical)
                    (enter critical)] {};
        \end{scope}
    \end{tikzpicture}



%-------------------------------------------------




    \tikz \node [circle,draw,
        label=60:$60^\circ$,
        label=below:$-90^\circ$] {my circle};

    \begin{tikzpicture}[auto,bend right] 
        \node (a) at (0:1) {$0^\circ$}; 
        \node (b) at (120:1) {$120^\circ$}; 
        \node (c) at (240:1) {$240^\circ$};
        \draw 
        (a) to node {1} node [swap] {1'} (b) 
        % (b) to node {2} node [swap] {2'} (c) 
        (b) to node {2} (c) 
        (c) to node {3} node [swap] {3'} (a);
    \end{tikzpicture}


   \tikz \draw [->,decorate,
    % decoration=snake
    decoration={snake,
    amplitude=.4mm,
    segment length=2mm,
    post length=1mm}
    ] (0,0) -- (2,0)
    node [above,text width=3cm,align=center,midway] {
    replacement of the \textcolor{red}{capacity} by \textcolor{red}{two places}
    }
    ;






\end{center}

\end{document}
```

## code here section four
```latex
 
\documentclass{article}
\usepackage{tikz,geometry}
\geometry{left=2cm,right=2cm,top=2cm,bottom=2cm}
\usetikzlibrary{calc,intersections,through,backgrounds}


\begin{document}
\begin{center}
    you \\
\begin{tikzpicture}

\def\A{\textcolor{input}{$A$}} 
\def\B{\textcolor{input}{$B$}} 
\def\C{\textcolor{output}{$C$}}
\def\D{$D$}
\def\E{$E$} 

\colorlet{input}{blue!80!black}
\colorlet{output}{red!70!black}
\colorlet{triangle}{orange}


    % \coordinate [label=left:
    %     \textcolor{blue}{$A$}] (A) at (0,0); 
    % \coordinate [label=right:
    %     \textcolor{blue}{$B$}] (B) at (1.25,0.25);
    

    \coordinate [label=left:
        \textcolor{blue}{$A$}] (A) at ($ (0,0) + .1*(rand,rand) $);
    \coordinate [label=right:
        \textcolor{blue}{$B$}] (B) at ($ (1.25,0.25) + .1*(rand,rand) $);
   
    \draw[blue] (A) -- (B); 



    % \draw  let 
    %     \p1 = ($ (B) - (A) $),
    %     \n2 = {veclen(\x1,\y1)}
    %      in
    %      (A) circle (\n2)
    %      (B) circle (\n2);


    % \node [draw,circle through=(B),
    %     label=left:$D$] at (A) {};

    % \node [draw,circle through=(A),
    %     label=right:$E$] at (B) {};

    \draw [name path=A--B] (A) -- (B);
    \node (D) [name path=D,draw,circle through=(B),label=left:$D$] at (A) {}; 
    \node (E) [name path=E,draw,circle through=(A),label=right:$E$] at (B) {};
    \path [name intersections={of=D and E, by={[label=above:$C$]C, [label=below:$C'$]C'}}]; 
    \draw [name path=C--C',red] (C) -- (C');
    \path [name intersections={of=A--B and C--C',by=F}];
    \node [fill=red,inner sep=1pt,label=-45:$F$] at (F) {};


    \foreach \point in {A,B,C}
    \fill [black,opacity=.5] (\point) circle (2pt);

    \begin{pgfonlayer}{background} 
        \fill[triangle!80] (A) -- (C) -- (B) -- cycle;
    \end{pgfonlayer}




\end{tikzpicture}


\begin{tikzpicture}
    \def\A{\textcolor{orange}{$A$}}
    \def\B{\textcolor{input}{$B$}}
    \def\C{\textcolor{input}{$C$}}
    \def\L{\textcolor{output}{$L$}}
    \def\E{$E$}
    \def\G{$G$}
    \def\K{$K$}
    \def\F{$F$} 
    \def\H{$H$}

    \colorlet{input}{blue!80!black}
    \colorlet{output}{red!90!black}



    \coordinate [label=left:$A$] (A) at (0,0);
    \coordinate [label=right:$B$] (B) at (.75,0.25);
    \coordinate [label=above:$C$] (C) at (1,1.5);
    \draw [help lines,opacity=.5]  (A) -- (B);
    \draw [input,thick] (B) -- (C);
    % \node [fill=red,inner sep=1pt,label=below:$X$] (X) at 
    % ($ (A)!.5!(B) $) {};

    % \node [fill=red,inner sep=1pt,label=above:$D$] (D) at 
    % ($ (X) ! {sin(60)*2} ! 90:(B) $) {}; %dis* & rotate

    \node [fill=red,inner sep=1pt,label=above:$D$] (D) at
     ($ (A) ! .5 ! (B) ! {sin(60)*2} ! 90:(B) $) {};
    \draw[help lines,opacity=.5] (A) -- (D) -- (B);
 
    \node (H) [name path=H,label=135:$H$,draw,circle through=(C)] at (B) {};
    \draw [help lines,opacity=.5] (D) -- ($ (D) ! 3.5 ! (B) $)
         coordinate [label=below:$F$] (F);
    \draw[help lines,opacity=.5] (D) -- ($ (D) ! 3.5 ! (A) $) 
        coordinate [label=below:$E$] (E);

    \path [name path=B--F] (B) -- (F); 
    \path [name intersections={of=H and B--F,by={[label=left:$G$]G}}];
    \fill[red,opacity=.5] (G) circle (2pt);



    \node (K) at (D)
     [name path=K,help lines,circle through=(G),draw,label=135:\K] {};
    \path [name path=A--E] (A) -- (E); 
    \path [name intersections={of=K and A--E,by={[label=below:\L]L}}];
    \draw [output,thick] (A) -- (L);

    \foreach \point in {A,B,C,D,G,L}
    \fill [black,opacity=.5] (\point) circle (2pt);

\end{tikzpicture}

\end{center}
\end{document}
```

## code here section eight
```latex
\documentclass{article}
\usepackage{tikz,geometry}
\geometry{left=1cm,right=1cm,top=1cm,bottom=1.5cm}
\usetikzlibrary{
calc,
intersections,
through,
backgrounds,
positioning,
shapes.misc,
graphs,
arrows.meta,
trees,
mindmap,
calendar,
shadows
}

\begin{document}


\begin{center}

\begin{tikzpicture}
    [
    node distance=5mm and 5mm, 
    text height=1.5ex,
    text depth=.25ex,
    nonterminal/.style={ % The shape: 
        rectangle, 
        % The size: 
        minimum size=6mm,
        % The border: 
        very thick, 
        draw=red!50!black!50,
        % rounded corners=3mm,
        % The filling:
        top color=white,
        bottom color=red!50!black!40,
        font=\itshape},
    terminal/.style={ % The shape: 
        rectangle, 
        % The size: 
        minimum size=6mm,
        % The border: 
        very thick, 
        draw=red!50!black!50,
        rounded corners=3mm,
        % The filling:
        top color=white,
        bottom color=red!50!black!40,
        font=\itshape},
    point/.style={
        circle,
        inner sep=0pt, 
        minimum size=2pt
        ,fill=red
    },
    skip loop/.style={to path={-- ++(0,#1) -| (\tikztotarget)}},
    hv path/.style={to path={-| (\tikztotarget)}}, %herizantal first
    vh path/.style={to path={|- (\tikztotarget)}}, %vertical first
    >={Stealth[round]}, black!50,text=black, thick,
        ]
% \node (s) [nonterminal] {unsigned integer};

% \node (dot) [terminal,right=of s] {.};
% \node (digit) [terminal,right=of dot] {digit};
% \node (E) [terminal,right=of digit] {E};
% \node (plus) [terminal,above right=of E]  {+};
% \node (minus) [terminal,below right=of E] {-};
% \node (ui2) [nonterminal,below right=of plus]  {unsigned integer};

\matrix[row sep=1mm,column sep=5mm] { 
% First row: 
& & & & & & & & & & &  \node(plus) [terminal] {+}; & \\
% Second row: 
\path node (p1) [point] {}; &\node(ui1) [nonterminal] {unsigned integer}; & 
\path node (p2) [point] {}; &\node(dot) [terminal] {.};&
\path node (p3) [point] {}; &\node(digit) [terminal] {digit};&
\path node (p4) [point] {}; &\node (p5) [point] {}; &
\path node (p6) [point] {}; &\node (e)[terminal] {E};&
\path node (p7) [point] {}; & &
\path node (p8) [point] {}; &\node (ui2)[nonterminal] {unsigned integer};& 
\path node (p9) [point] {}; &\node (p10) [point] {};  \\
% Third row: 
& & & & & & & & & & & \node (minus)[terminal] {-}; & \\
};


% \draw [->] 
%      ($ (digit.east) + (2mm,0) $)
%     -- ++(0,-.5) 
%     -| ($ (digit.west) - (2mm,0) $)
%     ;

% \draw [->] 
%     (p2) 
%     -- ++(0,-.5) 
%     -| (p1) %two line
%     ;

% \path (p1) edge[->,skip loop=5mm] (p2);


\graph[edges=rounded corners] { (p1) -> (ui1) -- (p2) -> (dot) -- (p3) -> (digit) -- (p4) -- (p5) -- 
    (p6) -> (e) -- (p7) -- (p8) -> (ui2) -- (p9) -> (p10);
    (p4) ->[skip loop=-5mm] (p3);
    (p2) ->[skip loop=5mm] (p5);
    (p6) ->[skip loop=-11mm] (p9); 
    (p7) ->[vh path] (plus) -> [hv path] (p8);
    (p7) ->[vh path] (minus) -> [hv path] (p8);

};

\end{tikzpicture}


    
 
 %-----------------------

    \tikz [>={Stealth[round]}, black!50, text=black, thick,
    every new ->/.style = {shorten >=1pt},
    graphs/every graph/.style = {edges=rounded corners},
    skip loop/.style = {to path={-- ++(0,#1) -| (\tikztotarget)}},
    hv path/.style  = {to path={-| (\tikztotarget)}},
    vh path/.style  = {to path={|- (\tikztotarget)}},
    nonterminal/.style = {rectangle, minimum size=6mm, very thick, draw=red!50!black!50,
        top color=white, bottom color=red!50!black!20, font=\itshape, text height=1.5ex,text depth=.25ex},
    terminal/.style = {rounded rectangle, minimum size=6mm, very thick, draw=black!50, 
        top color=white, bottom color=black!20, font=\ttfamily, text height=1.5ex, text depth=.25ex},
    shape= coordinate
        ] 
    \graph [grow right sep, branch down=7mm, simple] 
    { / -> unsigned integer[nonterminal] -- p1
        -> "." [terminal] -- p2 -> digit[terminal] ->p3
        -- p4 -- p5 -> E[terminal] -- q1  ->[vh path] {[nodes={yshift=7mm}] "+"[terminal], q2, "-"[terminal]
        }  -> [hv path] q3 -- /unsigned integer [nonterminal] -- p6 -> /;

        p1 ->[skip loop=5mm] p4; p3 ->[skip loop=-5mm] p2; p5 ->[skip loop=-11mm] p6;
        q1 -- q2 -- q3; % make these edges plain
    };

 
%-----------------------

\tikz [font=\footnotesize, grow=right, 
level 1/.style={sibling distance=6em}, 
level 2/.style={sibling distance=1em},
level distance=5cm]
\node {Computational Complexity} % root
child {  node {Computational Problems} 
    child { node {Problem Measures} } 
    child { node {Problem Aspects} } 
    child { node {Problem Domains} }
    child { node {Key Problems} }
}
child { node {Computational Models}
    child { node {Turing Machines} } 
    child { node {Random-Access Machines} } 
    child { node {Circuits} } 
    child { node {Binary Decision Diagrams} }
    child { node {Oracle Machines} } 
    child { node {Programming in Logic} }
}
child { node {Measuring Complexity} 
    child { node {Complexity Measures} } 
    child { node {Classifying Complexity} } 
    child { node {Comparing Complexity} } 
    child { node {Describing Complexity} }
}
child { node {Solving Problems} 
    child { node {Exact Algorithms} } 
    child { node {Randomization} } 
    child { node {Fixed-Parameter Algorithms} }
    child { node {Parallel Computation} }
    child { node {Partial Solutions} } 
    child { node {Approximation} }
};

%----------------------------------------
% \tikz [text width=2.7cm, align=flush center, grow cyclic,mindmap, 
% every node/.style=concept, concept color=black!20,
% level 1/.style={level distance=4.5cm,sibling angle=90},
% level 2/.style={text width=3cm, font=\footnotesize, level distance=3cm,sibling angle=30}]
\begin{tikzpicture}





% \clip(-1,-2) rectangle ++ (4,8);
\begin{scope}
[mindmap, 
scale=1,
every node/.style={concept,circular drop shadow,execute at begin node=\hskip0pt}, 
root concept/.append style={ concept color=black, fill=white, line width=1ex, text=black},
text=white,
grow cyclic,
computational problems/.style={concept color=red,faded/.style={concept color=red!50}}, 
computational models/.style={concept color=blue,faded/.style={concept color=blue!50}},
measuring complexity/.style={concept color=orange,faded/.style={concept color=orange!50}},
solving problems/.style={concept color=green!50!black,faded/.style={concept color=green!50!black!50}},
level 1/.append style={level distance=4.5cm,sibling angle=90},
level 2/.append style={level distance=3cm,sibling angle=45}]


\node (Computational Complexity) [root concept] {Computational Complexity} % root
child [concept color=red] {  node (Computational Problems) {Computational Problems} 
    child { node {Problem Measures} } 
    child { node {Problem Aspects} } 
    child { node {Problem Domains} }
    child { node {Key Problems} }
}
child [concept color=blue] { node (Computational Models) {Computational Models}
    child { node {Turing Machines} } 
    child { node {Random-Access Machines} } 
    child { node {Circuits} } 
    child { node {Binary Decision Diagrams} }
    child { node {Oracle Machines} } 
    child { node {Programming in Logic} }
}
child[concept color=orange]  { node {Measuring Complexity} 
    child { node {Complexity Measures} } 
    child { node {Classifying Complexity} } 
    child { node {Comparing Complexity} } 
    child { node {Describing Complexity} }
}
child[concept color=green!50!black]  { node {Solving Problems} 
    child { node {Exact Algorithms} } 
    child { node {Randomization} } 
    child { node {Fixed-Parameter Algorithms} }
    child { node {Parallel Computation} }
    child { node {Partial Solutions} } 
    child { node {Approximation} }
}
;


\end{scope}

%textwidth texthight
\begin{scope}[every annotation/.style={fill=black!40}]
\def\lecture#1#2#3#4#5#6{ 
    \node [annotation, #3, scale=0.65, text width=4cm, inner sep=2mm] at (#4) 
    { Lecture #1: \textcolor{orange}{\textbf{#2}} 
    \list{--}{\topsep=2pt\itemsep=0pt\parsep=0pt \parskip=0pt
                \labelwidth=8pt\leftmargin=8pt
                \itemindent=0pt\labelsep=2pt}
    % Circuits Machines Fixed-    
    % Parameter Algorithms
    % Randomization
    % Describing Complexity
    % Comparing Complexity
    % Exact Algorithms 
    #5 \endlist };
    \node [anchor=base west] at (cal-#6.base east) 
    {\textcolor{orange}{\textbf{#2}}};
}

% \calendar [xshift=-9cm,yshift=9cm,day list downward, name=cal, dates=2009-04-01 to 2009-06-24]
%     if (weekend) [black!25]

\tiny \calendar [
        day list downward,
        month text=\%mt\ \%y0, 
        month yshift=3.5em,
        name=cal,
        at={(-.5\textwidth-5mm,.5\textheight-1cm)},
        dates=2009-04-01 to 2009-06-last]
    if (day of month=1) 
    { \node at (0pt,1.5em) [anchor=base west] 
      {\small\tikzmonthtext};}
    ;%calender end


\lecture{1}{Computational Problems}{above,xshift=-3mm} 
{Computational Problems.north}
{\item Knowledge of several key problems 
\item Knowledge of problem encodings
\item Being able to formalize problems }
{2009-04-08}

\lecture{2}{Computational Models}{above left}
 {Computational Models.west}
 { \item Knowledge of Turing machines 
 \item Being able to compare the computational power of different models
}{2009-04-15}

    % \node [annotation, above] at (Computational Problems.north) 
    % {Lecture 1: Computational Problems
    % \begin{itemize}
    %     \item Knowledge of several key problems
    %      \item Knowledge of problem encodings 
    %      \item Being able to formalize problems
    % \end{itemize}};

\end{scope}



%all the most
\begin{pgfonlayer}{background}
    %  \clip (-1.5,-5) rectangle ++(4,10);
    \clip[xshift=-1cm] (-.5\textwidth,-.5\textheight) 
    rectangle ++(\textwidth,\textheight);


    \colorlet{upperleft}{green!50!black!25} 
    \colorlet{upperright}{orange!25} 
    \colorlet{lowerleft}{red!25} 
    \colorlet{lowerright}{blue!25}
    % The large rectangles:
     \fill [upperleft] (Computational Complexity) rectangle ++(-20,20);
      \fill [upperright] (Computational Complexity) rectangle ++(20,20);
       \fill [lowerleft] (Computational Complexity) rectangle ++(-20,-20); 
       \fill [lowerright] (Computational Complexity) rectangle ++(20,-20);
    % The shadings: 
    \shade [left color=upperleft,right color=upperright] ([xshift=-1cm]Computational Complexity) rectangle ++(2,20);
    \shade [left color=lowerleft,right color=lowerright] ([xshift=-1cm]Computational Complexity) rectangle ++(2,-20);
    \shade [top color=upperleft,bottom color=lowerleft] ([yshift=-1cm]Computational Complexity) rectangle ++(-20,2);
    \shade [top color=upperright,bottom color=lowerright] ([yshift=-1cm]Computational Complexity) rectangle ++(20,2);
\end{pgfonlayer}
 
\end{tikzpicture}

\end{center}

\end{document}
```




# `magic tool` ![](file/齿轮.png)
```
gm convert 齿轮.png -resize 32X32 齿轮.png
```
# `makefile` 
```makefile
all:
    gcc *.cpp -o *.exe
test:
    @echo i am test
```
# `排序`
# 插入  
## 直接
```c++
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
```
## 二分
```c++
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
```
## 二路归并
```c++
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
```
## 表 
```c++
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
//reset position
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
```
## 希尔
```c++
void ShellSort(SqList &L5 ,int dk[]){
    for (int i = 2; i >=0; i--)
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
```
# 交换

## 冒泡
```c++
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
```
## 快速 ![](file/快速.png)
```c++
void Qsort(SqList &L6,int low,int hight){
    if (low <hight) //not while
    {
        int p=Partition(L6,low,hight);
        Qsort(L6,low,p-1);
        Qsort(L6,p+1,hight);
    }
}
int Partition(SqList &L6,int low,int hight){
    L6.r[0]=L6.r[low];
    int p=L6.r[low].key;
    while(low<hight){
        while(low<hight&& LQ(p,L6.r[hight].key)) hight--;
        L6.r[low]=L6.r[hight];
        while(low<hight&& LQ(L6.r[low].key,p)) low++; //repeat 
        L6.r[hight]=L6.r[low];
    }
    L6.r[low]=L6.r[0];  //low = hight h<p low>p
    return low;
}
```
# 选择

## 简单
```c++
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
int FindMin(SqList &L6 ,int low,int hight){
    int min =low;
    low--;
    while (low<hight) // one with me
    if (LT(L6.r[++low].key,L6.r[min].key)) min=low;
    return min;
}
```
## 树形选择(冠军)
## 堆
```c++
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
```
# 归并 ![](file/二路.png)

```c++
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
```
# 基数
# `查找`
# 静态查找
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

# 动态查找
## 二叉排序树
## 平衡二叉树（删，插）
h层  至少  
## B-树（删，插）
+ 多m/节点
## B+树（查找根，链）
+ n子n字
+ 叶全字，链
+ 节点大（小）字
# 哈希表
k→f(K)  
函数
- H(key)=a.key+b
- H(key)=key MOD p(p≦m,m为表长)
- 分析，取中，折叠，随机 
 冲突

# `树`
# 二叉树
# 结构
顺序
链式（二叉→线索，三叉）
## 性质
## 遍历&线索
# 树&森林
## 结构
父，子，兄弟
## 转化（兄弟）
## 遍历
右边兄弟  
树的先根序→森林的先序→二叉树的先序  
树的后根序→森林的中序→二叉树的中序
# 赫夫曼  
## 回溯
## 计数
# `图`

# 定义  
<v,w>弧  v→w  
(v,w)边  v→w  
无向完全图 
有向完全图n.(n-1)  
稀疏图 nlogn  
TD=ID+OD,e 
路径 
回路首尾，简单重复，简单回路   
连通图，连通分量→极大连通子图   
强连通图，强连通分量   
（无向）连通图的生成树→极小连通子图  
有向图生产森林  

# 结构
## 数组
## 邻接表
## 十字链表
## 邻接多重
# 遍历
## DFS
## BFS
# 最小树(P.K→MST)
## 强连通分量
## 重连通图
## Prim 
## Kruskal 
# 拓扑（AOV）
## 有向无环
## 关键路径(AOE)
# 最短(D.F,cost)
## Dij 
## Fro 
# `链`
# `表`
# `栈`



