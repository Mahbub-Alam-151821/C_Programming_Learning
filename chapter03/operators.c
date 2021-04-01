
/**
 *There are mainly three types of operator available -
 *      - Unary
 *      - Binary
 *      - Ternary
 *
 * **Unary operators: have one operand. Ex: ++, --
 *      what is operand?
 *      a + b :  hear "+" is a  operator, a and b is operand
 * 
 * **Binary operators : have two operand.
 *      there are different type of operators available
 *            -Arithematic  ( + , - , * , / , % )
 *            -Relational   (< , > , <= , >=, == , !=)
 *            -Logical      (&& , || , !)
 *            -Assignment   (= , += , -= , *= , /=, %=)
 *            -Bitwise      (& , | , ^ , ~ ,<< ,>>)
 * 
 * **Ternary operators:
 *      
 */

#include <stdio.h>
int main(void)
{
// Arithematic operators:
    int a = 10;
    int b = 8;

    // Ternary operators:
//    int c = a > b ? 1 : 0 ;

    printf("Addition: %d\n" ,a + b);
    printf("Sabtraction: %d\n" ,a - b);
    printf("Multiplication: %d\n" ,a * b);
    printf("Division: %d\n" ,a / b);
    printf("Reminder: %d\n" ,a % b);

    // other are same

   char c = 'm';
   short s = 120;
   int i = 364;
   long l = 4565L;
   long long ll = 2345555678;

   printf("size of char = %d\n",(int)sizeof(c));
   printf("size of short = %d\n",(int)sizeof(s));
   printf("size of int = %d\n",(int)sizeof(i));
   printf("size of long = %d\n",(int)sizeof(l));
   printf("size of long long = %d\n",(int)sizeof(ll));
    return 0;
}
