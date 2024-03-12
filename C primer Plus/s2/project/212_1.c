//212_1.c


/*编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。
再调 用一次 printf()函数，把你的姓名分别打印在两行。然后，再
调用两次printf() 函数，把你的姓名打印在一行。输出应如下所示(
当然要把示例的内容换成 你的姓名)*/

#include <stdio.h>

int main(void){
    
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");

}