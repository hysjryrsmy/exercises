
//1.N阶数字正方形 (练习使用 if 控制行尾是否输出空格)
//  提示：请注意每行的末尾不要有多余的空格。
//样例输入：3
/*样例输出
1 1 1
2 2 2
3 3 3
*/
//  1）网上查询的代码
/*
#include <stdio.h>
int main() {
    int n;
    int i, j;
    int c; // i value and number of row and column, j value in row
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        for (j = i, c = 1; c < n; c++)
        {
            if (c <= n - 1)
            {
                printf(" ");
            }
            printf("%d", j);
        }
        if (i <= n - 1)
        {
            printf("\n");
        }
    }
    return 0;
}
*/

//  2)自己写的代码
/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)	//行数
    {
        for (int i = 1; i <= n; i++)	//列数
        {
            printf("%d", j);
            //判断是否换行
            //如果不为最后一列，输出空格
            //否则不输出空格
            if (i != n) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


//  2.N阶数字三角形
//  1)
/*
#include <stdio.h>
int main() {
    int n, c;
    int i, j;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        for (j = i, c = n - i; c > 0; c--)
        {
            if (i < n)
            {
                printf(" ");
            }
            printf("%d", j);
        }
        if (i < n)
        {
            printf("\n");
        }
    }

    return 0;
}
*/

//  2)
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)	//行数
    {
        for (int i = j; i <= n; i++)	//列数
        {
            printf("%d", j);
            //判断是否换行
            //如果不为最后一列，输出空格
            //否则不输出空格
            if (i != n) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//  3. N阶数字递减三角形
/* 1)
#include <stdio.h>
int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = n; i > 0; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" ");
        }
        for (j = i-1; j > 0; j--){
            printf("%d", j);
            if (j > 1)  {
                printf(" ");
            }
        }
        if (j = 1){
            printf("\n");
        }
    }

    return 0;
}
}
*/

/*  2)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = n; j > 0; j--)	//行数
    {
        for (int i = j; i > 0; i--)	//列数
        {
            printf("%d", i);
            //判断是否换行
            //如果不为最后一列，输出空格
            //否则不输出空格
            if (i != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


// 4.乘法表
/*  1)
#include <stdio.h>
int main() {
int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d*%d=%d",i,j,i*j);
            if(j!=n){
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*  2)
#include <stdio.h>
int main()
{
    int N;//键盘输入的数
    int k=1;//用于判断空格输出

    scanf("%d",&N);

    if(k<=N)
    {
        for(int i=1;i<=N;i++)//外循环用于控制输出的行数
        {

            for(int j=k;j<=N;j++)//内循环用于控制每行输出的内容，以及每行输出的数字个数
            {

                printf("%d*%d=%d",i,j,i*j);
                if(j!=N)//用于判断是否输出空格   注：每行最后一个数后不输出空格
                {
                    printf("\t");

                }else
                {
                   printf("\n");
                }
            }
                 k++;
          }

       }

    return 0;
}

*/