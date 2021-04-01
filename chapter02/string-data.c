// #include <stdio.h>
// int main(void){
//     return 0;
// }

#include <stdio.h>
int main(void){
    char name[20];
     name[0] ='M';
     name[1] ='a';
     name[2] ='h';
     name[3] ='b';
     name[4] ='u';
     name[5] ='b';
     name[6] =' ';
     name[7] ='A';
     name[8] ='l';
     name[9] ='a';
     name[10] ='m';

     printf("%s\n", name);

    char name1[20] = {'M','a','h','b','u','b'};
    printf("%s\n", name1);

    char name2[20] = "Mahbub Alam";
    printf("%s\n", name2);
    // printf("%c\n", name2[5]);

   char my_name[30];
   printf("what is your name? ");
   scanf("%s",&my_name);
   printf("Thank you ,%s\n",&my_name);

    return 0;
}