#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b){
   return a+b;
}

int main(int argc, char **argv)
{
   for (int i = 0; i < argc; i++){
      printf("%s", argv[i]);
   }
   int a = atoi(argv[0]);
   int b = atoi(argv[1]);
   printf("%d", Sum(a, b));
}
