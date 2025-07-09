
//函数可以嵌套使用，但不可以嵌套定义
//链式访问

#include <stdio.h>
#include <string.h>



// 1、int main(void)
 
// 2、int main(int argc, char *argv[])
// // AI写代码
// cpp
// 运行
//         在我们实际写代码时，大都是使用第一种方式，不给main函数传递参数，即 int main()。而实际上main函数也可以接收参数，并有其固定的格式，即第二种形式。

// 可以发现main函数接收两个参数，分别是 argc 和 argv[]：

// argc 表示命令行参数的个数（argument count），包括程序本身。即 argc 的值至少为 1。
// argv[] 是一个指向字符串数组的指针，其中每个元素是一个指向传递给程序的参数的指针（argument vector），这些字符串是命令行参数。
//        到这里先知道 main 函数参数的形式即可，它第一个参数为 int 类型的变量，第二个参数是一个char* 类型的指针数组，关于char* argv[ ] 和 （char*）argv[] 的区别在下面文章中有详细讲解。
// ————————————————

//                             版权声明：本文为博主原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接和本声明。
                        
// 原文链接：https://blog.csdn.net/2301_81723939/article/details/136904123

int main()
{
    int len = strlen("abcdef");

    printf("%d\n",len);
    printf("%d\n",strlen("abcdef"));//这个就是链式访问

    printf("%d",printf("%d",printf("%d",43)));//返回值是个数  第二层返回是43个数，所以返回的是2，返回的是1


    return 0;




}