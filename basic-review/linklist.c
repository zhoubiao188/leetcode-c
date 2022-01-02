/*************************
 * @author zhoubiao
 * @date 2021/1/2
 * @description 链表的实现
 * 
 * *********************************/
#include<stdio.h>

void main() {}


// 在数组a中，查找key，返回key所在的位置
int find(char* a, int n, char key) {
  if(a == null || n <= 0) {
    return -1;
  }
  
  if (a[n-1] == key) {
    return n-1;
  }
  
  char tmp = a[n-1];
  a[n-1] = key;
  
  int i = 0;
  while (a[i] != key) {
    ++i;
  }
  
  a[n-1] = tmp;
  
  if (i == n-1) {
    return -1;
  } else {
    return i;
  }
}