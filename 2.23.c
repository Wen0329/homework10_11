/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3];
    int b,j,i;
    printf("輸入第一個數字:");
    scanf("%d",&a[0]);
    printf("輸入第二個數字:");
    scanf("%d",&a[1]);
    printf("輸入第三個數字:");
    scanf("%d",&a[2]);
    for (j=0;j<2;j++){
        for (i=0;i<2-j;i++){
            if(a[i]>a[i+1]){
                b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
            }
        }
    }
    printf("最大值:%d\n",a[2]);
    printf("最小值:%d\n",a[0]);
    return 0;
}