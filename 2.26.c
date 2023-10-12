/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b; // 宣告兩個整數變數
    printf("請輸入兩個整數：\n"); // 提示使用者輸入
    scanf("%d %d", &a, &b); // 讀入兩個整數
    if (b == 0) // 如果第二個整數為零，則無法判斷倍數關係，並結束程序
    {
        printf("第二個整數不能為零！\n");
        return 0;
    }
    if (a % b == 0) // 如果第一個整數除以第二個整數的餘數為零，則表示第一個整數是第二個整數的倍數
    {
        printf("%d是%d的倍數\n", a, b); // 列印結果
    }
    else // 否則，表示第一個整數不是第二個整數的倍數
    {
        printf("%d不是%d的倍數\n", a, b); // 列印結果
    }
    return 0;
}
