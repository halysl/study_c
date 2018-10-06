//
// Created by light on 2018/10/6.
//

#include <stdio.h>

int max(int num1, int num2)
{
    /* 局部变量声明 */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int main(){
    int result;
    int num1 = 3;
    int num2 = 4;
    result = max(num1, num2);
    printf("num1 is %d\nnum2 is %d\nthe max is %d\n", num1, num2, result);
}