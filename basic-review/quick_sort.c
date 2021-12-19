/*************************
 * @author zhoubiao
 * @date 2021/12/19
 * @description 快速排序
 * 
 * *********************************/

#include<stdio.h>

#define MAX_N 10000
int array[MAX_N + 5];
int n;
#define DEBUG 1
void output(int, int, int);
/*
* array 待排序的数组
* left 待排序起始坐标
* right 待排序的结束坐标
*/
void quick_sort(int *array, int left, int right) {
    if(left >= right) return;
    int x = left, y = right, z = array[left];
    while(x < y) {
        while (x < y && array[y] >= z) --y;
        if (x < y) array[x++] = array[y];
        while (x < y && array[x] <= z) ++x;
        if (x < y) array[y--] = array[x];
    }

    array[x] = z;
    output(left, x, right);
    quick_sort(array, left, x - 1);
    quick_sort(array, x + 1, right);
    return ;
}


void output(int l, int x, int r) {
    if (!DEBUG) return ;
    printf("\n待排序区间范围 [%d, %d]\n", l, r);
    printf("基准值：%d\n", array[x]);
    
    char str[30];
    int cnt = 1;
    int i;
    for (i = 1; i < x; i++) {
        cnt += sprintf(str, "%d ", array[i]);
    }
    for (i = 1; i < l; i++) printf("%d ", array[i]);
    printf("[");
    for (i = l; i <= r; i++) {
        printf("%d ", array[i]);
    }
    printf("]");
    for (i = r + 1; i <= n; i++) printf("%d ", array[i]);
    printf("\n");
    for (i = 0; i < cnt; i++) printf(" ");
    printf("^\n");
    for (i = 0; i < cnt; i++) printf(" ");
    printf("|\n");
    printf("\n");
    printf("按回车继续...");
    while (getchar() != '\n') ;
    return ;
}

void read_data() {
    printf("请输入元素数量：");
    scanf("%d", &n);
    printf("请输入 %d 个整数：\n", n);
    int i;
    for (i = 1; i <= n; i++) {
        scanf("%d", array + i);
    }
    while (getchar() != '\n') ;
    return ;
}

int main() {
    read_data();
    quick_sort(array, 1, n);
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
