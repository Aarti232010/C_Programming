#include <stdio.h>

#define BIT  8*sizeof(int)

void leastSigfBit()
{
    int n, result;
    printf("Enter the Number to check LSB: ");
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

void mostSignfBit(){
    int n;
    printf("Enter the Number to check MSB: ");
    scanf("%d", &n);

    int mask = 1 << (BIT-1);

    if(n & mask){
        printf("MSB is 1\n");
    }else{
        printf("MSB is 0\n");
    }
}

void getNthBit(){
    int num , n;
    printf("Enter the number for get the bit: ");
    scanf("%d", &num);

    printf("Nth bit: ");
    scanf("%d", &n);

    num = num >> n;
    if(num&1){
        printf("Nth bit is set(1)\n");
    }else{
        printf("Nth bit is set(0)\n");
    }

}

void setNthBit(){
    int num , n;
    printf("Enter the number for set bit: ");
    scanf("%d", &num);

    printf("Nth bit: ");
    scanf("%d", &n);

    n = 1 << n;
    num = num|n;

    printf("Ater Nth bit set: %d\n", num);
}

void clearNthBit(){    // make nth bit 0
    int num , n;
    printf("Enter the number for clear bit: ");
    scanf("%d", &num);

    printf("Nth bit: ");
    scanf("%d", &n);

    n = 1 << n;
    n = ~n;
    num = num&n;
    printf("Ater Nth bit clear: %d\n", num);
}

void toggleNthBit(){
    int num , n;
    printf("Enter the number for toggle bit: ");
    scanf("%d", &num);

    printf("Nth bit: ");
    scanf("%d", &n);

    n = 1 << n;
    num = num^n;
    printf("After Nth bit toggle: %d\n", num);
}

void highestSetBit(){
    int num, order = -1;
    printf("Enter the Number for highest set bit: ");
    scanf("%d", &num);

    for(int i=0;i<BIT;i++){
        if((num >> i)&1){
            order = i;
        }
    }

    if(order != -1){
        printf("Highest order set bit: %d\n", order);
    }else{
        printf("Not set bit\n");
    }
}

void lowestSetBit(){
    int num, order = -1;
    printf("Enter the number for lowest set bit: ");
    scanf("%d", &num);

    for(int i=0;i<BIT;i++){
        if((num >> i)&1){
            order = i;
            break;
        }
    }

    if(order != -1){
        printf("The lowest set bit: %d\n", order);
    }else{
        printf("Not set Bit\n");
    }
}

void trailingZero(){
    int num, count = 0;
    printf("Enter the Number for trailing Zero: ");
    scanf("%d", &num);

    for(int i=0;i<BIT;i++){
        if((num >> i)&1){
            break;
        }
        count++;
    }

    printf("Number of trailing Zeros: %d\n", count);
}

void leadingZero(){
    int num, count = 0;
    printf("Enter the number for leading zeros: ");
    scanf("%d", &num);

    int mask = 1 << (BIT-1);
    for(int i=0;i<BIT;i++){
        if((num << i)&mask){
            break;
        }
        count++;
    }

    printf("Number of leading zeros: %d\n", count);
}

void countOneZero(){
    int num, zeros = 0, ones = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for(int i=0;i<BIT;i++){
        if((num >> i)&1){
            ones++;
        }else{
            zeros++;
        }
    }

    printf("Number of Ones %d and Zeros %d\n", ones, zeros);
}

void decimalToBinary(){
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    int arr[BIT] = {0};

    for(int i = BIT-1;i>=0;i--){
        arr[i] = num&1;
        num = num >> 1;
    }

    printf("Decimal to Binary: ");
    for(int i=0;i<BIT;i++){
        printf("%d", arr[i]);
    }
}

void swapNo(){
    int a, b;
    printf("Enter the two Number: ");
    scanf("%d %d", &a, &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("a: %d, b: %d\n", a , b);
}

void chechEvenNo(){
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if(num&1){
        printf("Number is odd\n");
    }else{
        printf("Number is even\n");
    }
}

void flipBitAtoB(){
    int a, b, count = 0, mask = 0;
    printf("Enter the Number: ");
    scanf("%d %d", &a, &b);

    mask = a^b;
    while(mask){
        count += mask&1;
        mask = mask >> 1;
    }

    printf("Number of bit for flip a to b: %d\n", count);
}

void flipAllBit(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    num = ~num;
    printf("Number: %d\n", num);
}
int main(){
    leastSigfBit();
    mostSignfBit();
    getNthBit();
    setNthBit();
    clearNthBit();
    toggleNthBit();
    highestSetBit();
    lowestSetBit();
    trailingZero();
    leadingZero();
    countOneZero();
    decimalToBinary();
    swapNo();
    chechEvenNo();
    flipBitAtoB();
    flipAllBit();
}