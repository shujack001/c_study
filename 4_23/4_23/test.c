#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
//int main()
//{
//    int n, x, i;
//     scanf("%d\n", &n);
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//    scanf("%d\n", &x);
//    for (i = n; i > 0; i--)  //�Ӻ���ǰ������x�Ƚ�
//    {
//        if (arr[i - 1] >= x)  //x��Сʱ��Ԫ�غ���һλ
//            arr[i] = arr[i - 1];
//        else {
//            arr[i] = x;    //x����ʱ����x���룬����ѭ��
//            break;
//        }
//    }
//    if (i == 0)  arr[i] = x; //�״�㣬forѭ���в�����i=0�������Ҫ��������
//    for (i = 0; i <= n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int arr[100] = { 0 };
        int i = 0;
        int count = 0;
        for (i = 2; i < n; i++)
        {
            int j = 0;
            for (j = i + 1; j <= n; j++)
            {
                if (j % i == 0)
                {
                    arr[count] = j;
                    count++;
                }
            }
        }

        for (i = 2; i <= n; i++)
        {
            int m = 1;
            int j = 0;
            for (j = 0; j < count; j++)
            {
                if (i == arr[count])
                {
                    m = 0;
                }
            }
            if (m)
            {
                printf("%d ", i);
            }
        }
        printf("\n%d\n", count);
    }
    return 0;
}