﻿#include <stdio.h>
#include <stdlib.h>

int A_La_Russe(int src, int tar);

int main()
{
    int src, tar;
    int result;

    printf("Input two integers: ");
    scanf_s("%d %d", &src, &tar);

    result = A_La_Russe(src, tar);

    printf("Multiplication result = %d\n", result);

    return 0;
}

int A_La_Russe(int src, int tar)
{
    int result = 0;

    while (src != 0) {
        if (src % 2 == 1) {
            result += tar;
        }
        src = src >> 1; // 오른쪽 시프트 (2로 나누기)
        tar = tar << 1; // 왼쪽 시프트 (2배 곱하기)
    }
    return result;
}
