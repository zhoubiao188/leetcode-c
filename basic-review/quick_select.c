/*************************
 * @author zhoubiao
 * @date 2021/12/20
 * @description 快速选择排序
 * 
 * *********************************/
#include<stdio.h>

/*
* array 待查找数组
* left-right 待查找区间
* k 待查找的元素
*/

int quick_select(int *array, int left, int right, int k) {
    int x = left, y = right, z = array[left];
    while (x < y) {
      while (x < y && array[y] >= z) --y;
      if (x < y) array[x++] = array[y];
      while (x < y && array[x] <= z) ++x;
      if (x < y) array[y--] = array[x];
    }

    array[x] = z;

    int ind = x - left + 1;
    if (ind == k) return array[x];
    if (ind > k) return quick_select(array, left, x - 1, k);
    return quick_select(array, x + 1, right, k - ind);
}
int main() {
    int n, a[100];
    printf("请输入元素数量:");
    scanf("%d", &n);
    printf("请输入 %d 个元素的值:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    printf("\n以下结果，均来自快速选择算法的结果\n");
    for (i = 1; i <= n; i++) {
        printf("排名第 %d 位的元素：%d\n", i, quick_select(a, 0, n - 1, i));
    }
    return 0;
}
