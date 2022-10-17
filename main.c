#include <stdio.h>

int isodd(int);

int main(int argc, char *argv[])
{
    long unsigned int val, ret;

    val = 3;

    ret = isodd(val);
    if(ret == 0)
        printf("%d is even\n", val);
    else
        printf("%d is odd\n", val);
    
    return 0;
}

int isodd(int x)
{
    if(x % 2 == 0)
        return 0;

    return 1;
}