
### 1.C语言的基本模块是什么?

> C语言包含的一个或者多个函数

### 2.什么是语法错误?写出一个英语例子和C语言

例子。 

> 英文: Bugs frustrate be can 语法错误
C: 违反C规则

> - 用圆括号()代替花括号{}
> - 变量声明写错
int n, n2, n3
或
int n;
int n2;
int n3;
> - main()的注释末尾漏了 */
> - printf 语句末漏分号
> - 注: 千万不要写成中文符号哦

```c_cpp
/*stillbad.c*/
#include <stdio.h>

int main(void)

(
  
  int n,int n2,int n3
  /*该程序有多处错误
  n = 5;
  n2 = n*n;
  n3 = n2*n2;
  printf("n= %d, n squared = %d, n cubed = %d\n", n, n2, n3)
  
  return 0;
)
```

> 程序出错的排查方法: 先浏览源码，再通过编译器排查错误报告信息，指出每一处错误的性质和具体位置。
编译器也会出错: 报错位置经常比真正的错误位置滞后一行。

### 3.什么是语义错误?写出一个英语例子和C语言例子。

> 英文: Scornful derivatives sing greenly(轻蔑的衍生物不熟练地唱歌) 语法正确 可是让人无法理解
C: 遵循了 C 规则，但结果不正确，就是语意错误。
编译器无法检测语意错误

```c_cpp
/*stillbad.c*/
#include <stdio.h>

int main(void)

{
  
  int n, n2, n3
  /*该程序有一个语义错误*/
  n = 5;
  n2 = n*n;
  n3 = n2*n2;
  printf("n= %d, n squared = %d, n cubed = %d\n", n, n2, n3);
  
  return 0;
}

/*output: n = 5, n squared = 25, n cubed = 625*/
n3 不是立方，典型的语义错误
```

<br/>

### 4.Indiana Sloth编写了下面的程序，并征求你的意见。请帮助他评定。

```c_cpp
include studio.h

int main{void} /* 该程序打印一年有多少周 /*
(
int s
s := 56;
print(There are s weeks in a year.);
return 0;
```

> 多处语法错误
> 
> 一个语义错误
> 
> - 一年最多48周到52周

```c_cpp
/*redited*/

#include <stdio.h>

int main(void)/* 该程序打印一年有多少周 */
{
    int f,s;
    f = 48;
    s = 52;
    printf("There are %d - %d weeks in a year.\n",f,s);
    return 0;
}


```

<br/>

### 5.假设下面的4个例子都是完整程序中的一部分，它们都输出什么结果?

```c_cpp
a.printf("Baa Baa Black Sheep.");
  printf("Have you any wool?\n");
b.printf("Begone!\nO creature of lard!\n");
c.printf("What?\nNo/nfish?\n");
d.int num;
  num = 2;
  printf("%d + %d = %d", num, num, num + num);


```

> 我们组装一下它们

```c_cpp
/*s2_5.c*/

#include <stdio.h>

int main(void){
    int num;
    num = 2;

    printf("Baa Baa Black Sheep.");
    printf("Have you any wool?\n");
    printf("Begone!\nO creature of lard!\n");
    printf("What?\nNo/nfish?\n");
    printf("%d + %d = %d", num, num, num + num);

    return 0;

}
```

### 6.在main、int、function、char、=中，哪些是C语言的关键字?

> '关键字' 是语言定义的单词，不能做其他用途。
> 
> int、char 是C语言的关键词(keywords)
> 
> <br/>

<br/>

### 7.如何以下面的格式输出变量words和lines的值(这里，3020和350代表 两个变量的值)?

> 答案: 

```c_cpp
// s2_7.c

/*output: There were 3020 words and 350 lines.*/

#include <stdio.h>

int main(void){
    int words, lines;

    words = 3020;
    lines = 350;

    printf("There were %d words and %d lines.\n",words, lines);

    return 0;
    
}
```

### 8.考虑下面的程序:

```c_cpp
#include <stdio.h>

int main(void)
{
  int a, b;
  a = 5;
  b = 2; /* 第7行 */  a=5, b=2
  b = a; /* 第8行 */  a=5, b=5
  a = b; /* 第9行 */  a=5, b=5 
  printf("%d %d\n", b, a); 
  
  return 0;
}
```

<br/>

### 9.考虑下面的程序:

```c_cpp
#include <stdio.h>

int main(void)
{
int x, y;
x = 10;
y = 5;   /* 第7行 */  x=10, y=5
y = x + y; /*第8行*/  x=10, y=15
x = x*y;  /*第9行*/   x=150, y=15

printf("%d %d\n", x, y);

return 0;
}
```

<br/>

## 编程练习