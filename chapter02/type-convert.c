#include <stdio.h>
int main(void){

    char ch = 'M';
    int r = ch + 100;
    // int r = (int)ch + 100;
    printf("%c %d %x\n", ch, ch, ch);
    printf("Result: %d\n", r);

    float f = (float)r;
    printf("Float:%f\n", f);

    // float f = (float)r;
    printf("Float:%f\n", (float)f);

    float a = 4.5f;
    float b = 6.5f;
    float c = 8.5f;
    float d = 9.5f;

    int result = a + b + c + d ;
    printf("Total(no conversion): %d\n",result);

    int result2 = (int)a + (int)b + (int)c + (int)d ;
    printf("Total: %d\n",result2);



    return 0;
}