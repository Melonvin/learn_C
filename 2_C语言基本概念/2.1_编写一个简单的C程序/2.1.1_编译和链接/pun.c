#include <stdio.h> // C 语言标准输入/输出库
int main(void)
{
    printf("hello world\n"); // 来自标准输入/输出库的函数，产生格式化输出
    return 0;                // 表示程序终止时会向操作系统返回 0
}

// C 程序转化为机器可执行的形式的 3 个步骤：
// 预处理、编译、链接

// UNIX 系统环境下，通常把 C 编译器命名为 cc
// 编译和链接 pun.c 的命令：cc pun.c
// 编译和链接后，编译器 cc 会把可执行程序放到默认名为 a.out 的文件中

// 通过 cc 命令选项可以指定生成的可执行文件名
// cc -o pun pun.c

// GCC 编译器是最流行的 C 编译器之一，使用与传统的 UNIX cc 编译器相似
// gcc -o pun pun.c