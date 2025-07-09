// // 判断素数程序
// // 常规判断法
// # include <stdio.h>
// //打印100到200的素数
// int main()
// {
//     // int i = 100;
//     for(int i =100;i<=200;i++)
//     {
//         int is_prime = 1;
//         for(int j=2;j <= i; j++)
//         {
//             if(i % j == 0)
//             {// { printf("%d\n",i);
//             //     break;
//                 is_prime = 0;
//                 break;
//             }



//         }

//         if(is_prime)
//         {
//             printf("%d",i);
//         }

//     }

//     return 0;









// }  自己写的失败了

// 判断素数程序
// 打印100到200之间的素数
// #include <stdio.h>

// int main()
// {
//     for (int i = 100; i <= 200; i++)
//     {
//         int is_prime = 1; // 假设i是素数

//         for (int j = 2; j * j <= i; j++) // 只需检查到sqrt(i)
//         {
//             if (i % j == 0)
//             {
//                 is_prime = 0; // 能被整除，不是素数
//                 break;
//             }
//         }

//         if (is_prime) // 如果仍为素数，则输出
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

# include <stdio.h>
#include <math.h>

int main()
{
    int i = 100;
    for(i = 100;i<=200;i++)
    {
        int flag = 1;
        for(int j = 2;j<= (int)(sqrt(i));j++)
        {

            if(i % j == 0)
            {
                // printf("%d\n",i)
                flag = 0;
                break;
            //             if(flag )
            //     {
            // printf("%d\n",i);


            //     }


            }


        }
        if(flag)
        {
            printf("%d\n",i);


        }





    }
    //天才编译器，闲的没事误报错！！！！！！
    //所以说上述代码其实没问题，思考，判断素数只需要一次遍历到截止数的平方根，这是为什么呢？？，是因为如果是素数，则a*b当中一定有一个数是小于截止数字的平方根的！！！！







}