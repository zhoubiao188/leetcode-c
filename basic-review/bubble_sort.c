/*************************
 * @author zhoubiao
 * @date 2021/12/22
 * @description 冒泡排序
 * 
 * *********************************/

#include<stdio.h>
#include<stdbool.h>
#define MAX_N 10
int n;
int array[MAX_N + 5];

void read_data() {
    int i;
    printf("请输入元素数量：");
    scanf("%d", &n);
    printf("请输入 %d 个整数：\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", array + i);
    }
    while (getchar() != '\n') ;
    return ;
}


/*
 * array 待排序的数组
 * n 数组大小
*/
void bubble_sort(int *array, int n) {
    if(n <= 1) {
        return;
    }

    int i,j,temp;
    for(i = 0; i < n; i ++) {
        bool flag  = false;
        for(j = 0; j < n - i; j ++) {
            //如果大于则交换位置
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = true;
            }
        }
        if(!flag) break;
    }
}


int main() {
    read_data();
    int cnt = 1;
    int i;
    bubble_sort(array, n);
    printf("[");
    for (i = 1; i <= n; i++) {
        printf("%d ", array[i]);
    }
    printf("]");
    return 0;
}