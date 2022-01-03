/*************************
 * @author zhoubiao
 * @date 2021/1/3
 * @description 递归
 * 
 * *********************************/
#include<stdio.h>

// 全局变量，表示递归的深度。

int depth = 0
int f(int *n) {
  ++depth；
  if (depth > 1000) return;
  
  if (n == 1) return 1;
  return f(n-1) + 1;
}


void main() {
  f(100);
}

