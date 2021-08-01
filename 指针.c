#include <stdio.h>
const int MAX = 3;

int main()
{
    // int var = 20;  // 实际变量的生命
    // int *ip;  // 指针变量的声明
    // int  *ptr = NULL; // 空指针
    // ip = &var;  // 在指针变量中存储var的地址

    // printf("var变量的地址：%p\n", &var);

    // printf("ip变量存储的地址：%p\n",ip);
    // printf("ptr变量存储的地址：%p\n",ptr);

    // printf("*ip变量的值：%d\n", *ip);
    // ---------------------------------------
    // int  var[] = {10, 100, 200};
    // int  i, *ptr;

    /* 指针中的数组地址 */
    // ptr = var;
    // for ( i = 0; i < MAX; i++)
    // {

    //     printf(" 存储地址：var [% d] = % p\n", i, ptr );
    //     printf(" 存储值：var [% d] = % d\n", i, *ptr );

    //     /* 指向下一个位置 */
    //     ptr++;
    // }
    // ---------------------------------------

    int  V;
    int  *Pt1;
    int  **Pt2;

    V = 100;

    /* 获取 V 的地址 */
    Pt1 = &V;

    /* 使用运算符 & 获取 Pt1 的地址 */
    Pt2 = &Pt1;

    /* 使用 pptr 获取值 */
    printf("var = %d\n", V );
    printf("Pt1 = %p\n", Pt1 );
    printf("*Pt1 = %d\n", *Pt1 );
    printf("Pt2 = %p\n", Pt2 );
    printf("**Pt2 = %d\n", **Pt2);

    return 0;
}