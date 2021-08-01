# include <stdio.h>
# include <stdlib.h>

# define N 5

int main()
{
    int array[N] = {15, 20, 25, 30, 35};
    // 实现数组的逆序
    int temp;
    int i;
    int * ptr_array_start = array;  // 指向数组首元素的指针
    int * ptr_array_end = array + N - 1;  // 指向数组末元素的指针
    while(ptr_array_start != ptr_array_end)
    {
        // 首尾交换，指针分别进行更新
        temp = *ptr_array_start;
        *ptr_array_start = *ptr_array_end;
        *ptr_array_end = temp;
        // 首元素指针要向后移动
        ptr_array_start++;
        // 末元素指针要向前移动
        ptr_array_end--;
    }
    for(i = 0; i < N; i++)
    {
        printf("%d\t", array[i]);
    }
}