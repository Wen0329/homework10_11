/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
  // 宣告變數，用於存儲用戶的輸入資訊
  double distance, gas_price, gas_mileage, parking_fee, toll_fee;

  // 提示用戶輸入資訊
  printf("請輸入您一整天的總里程數（公里）：");
  scanf("%lf", &distance);
  printf("請輸入汽油一公升多少錢（元）：");
  scanf("%lf", &gas_price);
  printf("請輸入平均一公升能行駛多少公里（公里/公升）：");
  scanf("%lf", &gas_mileage);
  printf("請輸入一天的停車費（元）：");
  scanf("%lf", &parking_fee);
  printf("請輸入一天的通行費（元）：");
  scanf("%lf", &toll_fee);

  // 計算一天開車所需的花費，公式為：
  // 花費 = (里程數 / 油耗) * 油價 + 停車費 + 通行費
  double cost = (distance / gas_mileage) * gas_price + parking_fee + toll_fee;

  // 輸出一天開車所需的花費
  printf("您一天開車去工作的花費為：%f元\n", cost);

  return 0;
}