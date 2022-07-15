// C 程序是函数的集合
// 函数分为两大类：自定义函数和内置库函数

// 一个 C 程序中必须包含 main 函数
// 程序执行时，系统会自动调用 main 函数
// main 函数会在程序终止时向操作系统返回一个状态码

#include <stdio.h>
int main(void) // void 表明 main 函数没有参数
{
    printf("hello world\n"); // 标准输出函数 printf
    return 0;                // 该语句两个作用
                             // 使 main 函数终止，从而结束程序
                             // main 函数的返回值为 0
}