# include <stdio.h>
# include <string.h>
//库函数，可以去c plus plus 官网查看
//举例strcpy，经过查找，就是字符串拷贝的意思，strcpy
//char * strcpy ( char * destination, const char * source );
//将 source 指向的 C 字符串复制到 destination 指向的数组中，包括终止 null 字符（并在该点停止）。后面的复制到前面的
//成功了


// //void * memset ( void * ptr, int value, size_t num );
// 将 ptr 指向的内存块的前字节数设置为指定值（解释为 unsigned char）。言简意赅就是num个字节，设置为value的值。传递一个地址，如果是数组的话，就是首地址

// int main()
// {
//     char arr1[] = {"hello,zcf"};
//     char arr2[] = { 0 };

//     strcpy(arr2,arr1);

//     printf("%s\n",arr2);


//     memset(arr2+2,' ',4);
//     printf("%s",arr2);


//     return 0 ;



// }

void fun(int *p , int *q)
{
    int s = *p;

    // *p = s;
    *q = s;
    *p = *q;


}
//有点意思
//形参是实参的一份临时拷贝，并不会改变真正的实参
//自己写的第一个指针函数
int main()
{
    int a = 10;
    int b = 20;
//自定义函数，交换数值
    fun( &a , &b);
    printf("%d",b);

    return 0;




}