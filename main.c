#include <stdlib.h>
#include <stdio.h>
#include "fibo.h"  // 注意双引号的使用

int main(int argc, char *argv[])  // 注意函数名和参数的大小写
{
    long ret;  // 注意大小写
    int n;     // 注意大小写
    if (argc < 2) {  // 注意大小写和括号的使用
        fprintf(stderr, "missing index.\n");  // 注意大小写和函数名
        return -1;
    }
    n = atoi(argv[1]);  // 注意大小写和函数名
    ret = fibo(n);  // 注意大小写
    printf("Fibo(%d) is %ld\n", n, ret);  // 注意大小写和函数名
    return EXIT_SUCCESS;
}
