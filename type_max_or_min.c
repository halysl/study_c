//
// Created by light on 2018/10/5.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("\nchar 相关长度\n");
    //char 相关长度
    printf("char bit:%d\n", CHAR_BIT);
    printf("char min:%d\n", CHAR_MIN);
    printf("char max:%d\n", CHAR_MAX);
    printf("signed char min:%d\n", SCHAR_MIN);
    printf("signed char max:%d\n", SCHAR_MAX);
    printf("unsigned char max:%d\n", UCHAR_MAX);

    printf("\nshort 相关长度\n");
    //short 相关长度
    printf("short min:%d\n", SHRT_MIN);
    printf("short max:%d\n", SHRT_MAX);
    printf("unsigned short max:%d\n", USHRT_MAX);

    printf("\nint 相关长度\n");
    //int 相关长度
    printf("int min:%d\n", INT_MIN);
    printf("int max:%d\n", INT_MAX);
    printf("unsigned int max:%d\n", UINT_MAX);

    printf("\nlong 相关长度\n");
    //long 相关长度
    printf("long bit:%d\n", LONG_BIT);
    printf("long min:%lu\n", LONG_MIN);
    printf("long max:%lu\n", LONG_MAX);
    printf("unsigned long max:%lu\n", ULONG_MAX);

    return 0;
}


