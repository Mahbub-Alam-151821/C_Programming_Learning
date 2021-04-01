#include <stdio.h>
int main(void)
{
    //signed integer(we can store hear both positive and negative) data

    //short - %hi , %d
    short a = 45;
    printf("i am short - %hi\n", a);

    //int - %d , %i
    int b = 100 * 4;
    printf("i am int - %d\n", b);

    //long - %ld, %li
    long c = 10000 * 4L;
    printf("i am long - %ld\n", c);

    //long long - %lld , %lli
    long long d = 54763LL;
    printf("i am long long - %lld\n", d);

    //octal int - %o
    int o = 0653;
    printf("i am octal-%o\n", o);
    printf("i am decimal of this octal - %d\n", o);

    //Hexadecimal int - %x,%X
    int h = 0XAFFE;
    printf("i am HEX - %X\n", h);
    printf("i am Decimal of this HEX - %d\n", h);

    // unsigned intiger
    printf("unsigned intigers\n");

    // unsigned short -%hu
    unsigned short us = 45;
    printf("unsigned short -%hu\n", us);

    // unsigned int -%u
    unsigned int u = 4455;
    printf("unsigned int -%u\n", u);

    // unsigned long -%lu
    unsigned long ul = 4455;
    printf("unsigned long -%lu\n", ul);

    // unsigned long long -%llu
    unsigned long ull = 446458355;
    printf("unsigned long long -%llu\n", ull);

    unsigned short negative = -2;
    printf("negative unsigned -%hu\n",negative);


    return 0;
}