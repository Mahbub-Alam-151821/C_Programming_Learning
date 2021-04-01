#include <stdio.h>

int main()
{
  // if (1)
  // {
  //   printf("i will get a new car\n");
  // }
  // int a = 20;
  // int b = 10;

  // if (a < b)
  // {
  //   printf("you are elder");
  // }
  // else
  // {
  //   printf("your brother is elder");
  // }
  // nested loop int a = 20;
  // int b = 20;

  
  // nested loop
  // if (a < b)
  // {
  //   printf("you are elder");
  // }
  // else
  // {
  //   if (a > b)
  //   {
  //     printf("your brother is elder");
  //   }
  //   else
  //   {
  //     printf("you both are same age");
  //   }
  // }

  // int a = 20;
  // int b = 20;

  // if (a > b)
  // {
  //   printf("a is big brother\n");
  // }
  // else if (a < b)
  // {
  //   printf("b is big brother\n");
  // }
  // else
  // {
  //   printf("they are same age\n");
  // }

  // switch statement

  int day_number;
  printf("enter day number\n");
  scanf("%d", &day_number);

  switch (day_number)
  {
  case 0:
    printf("saturday\n");
    break;
  case 1:
    printf("sunday\n");
    break;
  case 2:
    printf("monday\n");
    break;
  case 3:
    printf("tuesday\n");
    break;
  case 4:
    printf("wednesday\n");
    break;
  case 5:
    printf("thursday\n");
    break;
  case 6:
    printf("fryday\n");
    break;

  default:
    printf("wrong\n");
    break;
  }

  switch (day_number)
  {
  case 0:
  case 6:
    printf("off day\n");
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    printf("working day\n");
    break;
  default:
    printf("wrong\n");
    break;
  }

  return 0;
}
