/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 9;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i==0|i==4)
                printf("W");
            else if(i==1|i==3){
                if(j>1&j<5)
                    printf("W");
                else
                    printf(" ");
            }
            if (i==2){
                if(j>4&j<8)
                    printf("W");
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i==0|i==4)
                printf("W");
            else if(i==1|i==3){
                if(j>1&j<5)
                    printf("W");
                else
                    printf(" ");
            }
            if (i==2){
                if(j>4&j<8)
                    printf("W");
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i==0){
                if(j>4&j<8)
                    printf("s");
                else 
                    printf(" ");
            }
            if(i==1){
                if(j==4|j==8)
                    printf("s");
                else
                    printf(" ");
            }
            if (i==2){
                if(j==4|j==0|j==8)
                    printf("s");
                else
                    printf(" ");
            }
            if (i==3){
                if(j==4|j==0)
                    printf("s");
                else
                    printf(" ");
            }
            if (i==4){
                if(j>0&j<4)
                    printf("s");
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}




