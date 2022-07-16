// 为了获取用户的输入，需要用到 scanf 函数
// scanf 与 printf 相对应，两者都是 stdio.h 库中的函数
// 两者的 f 都是格式化的意思，都需要格式串来指定输入或输出的格式

#include <stdio.h>
int main(void)
{
    int i;
    scanf("%d", &i); // 读入一个 int 型值，%d 表示读入一个整数，int 型变量 i 用来存储 scanf 读入的输入
                     // & 运算符用于输入
    printf("i=%d\n", i);

    float x;
    scanf("%f", &x); // 读入一个 float 型值，%f 只用于 float 型变量
    printf("x=%f\n", x);
    return 0;
}
