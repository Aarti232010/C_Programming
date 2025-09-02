#include <stdio.h>


void leastSigfBit()
{
    int n, result;
    scanf("%d", &n);

    result = n & 1;
    if (result == 1)
    {
        printf("LSB is 1\n");
    }
    else
    {
        printf("LSB is 0\n");
    }
}

int main(){
    leastSigfBit();
}