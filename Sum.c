#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b){
   return a+b;
}

int main(int argc, char **argv)
{
   for (int i = 1; i < argc; ++i)
   {
      printf("argv[%d]: %s\n", i , argv[i]);
   }
}
