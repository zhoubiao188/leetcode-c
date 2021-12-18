#include<stdio.h>

#define MAX_N 10000
int array[MAX_N + 5];
int n;
/*
* array 待排序的数组
* left 待排序起始坐标
* right 待排序的结束坐标
*/
void quikc_sort(int *array, int left, int right) {
    if(left >= right) return;
    int x = left, y = right, z = array[left];
    while(x < y) {

    }
}

void read_data() {
    printf("请输入元素数量：");
    scanf("%d", &n);
    printf("请输入 %d 个整数：\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", array + i);
    }
    while (getchar() != '\n') ;
    return ;
}

void main() {
    read_data();
}
