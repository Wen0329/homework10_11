/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

// 定義一個函數，根據BMI值返回相應的分類
char* get_category(double bmi) {
  if (bmi < 18.5) {
    return "Underweight";
  } else if (bmi >= 18.5 && bmi <= 24.9) {
    return "Normal";
  } else if (bmi >= 25.0 && bmi <= 29.9) {
    return "Overweight";
  } else {
    return "Obese";
  }
}

int main() {
  // 宣告變數，用於存儲用戶的體重和身高
  double weight, height;

  // 提示用戶輸入體重和身高
  printf("請輸入您的體重（公斤）：");
  scanf("%lf", &weight);
  printf("請輸入您的身高（米）：");
  scanf("%lf", &height);

  // 計算BMI值，公式為體重除以身高的平方
  double bmi = weight / pow(height, 2);

  // 輸出BMI值和相應的分類
  printf("您的BMI值為：%f\n", bmi);
  printf("您的BMI分類為：%s\n", get_category(bmi));


  return 0;
}
