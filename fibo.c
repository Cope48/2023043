long fibo(int n)  // 注意大小写
{
    if (n < 2)
        return 1L;  // 注意大小写
    else
        return fibo(n - 1) + fibo(n - 2);  // 注意大小写
}
