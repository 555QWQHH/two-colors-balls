#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int b;
    srand(time(0));
    int a[6] = { 0 };
    printf("∫Ï«Ú:");
    for (int i = 0; i < 6; i++)
    {
        a[i] = rand() % 34;
        while (a[i] == 0)
        {
            a[i] = rand() % 34;
        }
        if (i == 0)
        {
            printf("%d ", a[i]);
            continue;
        }
        for (int j = 0; j < 6; j++)
        {
            if (i > j)
            {
                while (a[i] == a[j])
                {
                    a[i] = rand() % 34;
                    while (a[i] == 0)
                    {
                        a[i] = rand() % 34;
                    }
                }

            }
            else
                break;
        }
        printf("%d ", a[i]);

    }
    printf("\n");
    b = rand() % 17;
    while (b == 0)
    {
        b = rand() % 17;
    }
    printf("¿∂«Ú:%d ", b);
    printf("\n");
    return 0;
}