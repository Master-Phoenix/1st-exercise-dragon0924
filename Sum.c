#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b){
   return a+b;
}

int main(int argc, char **argv)
{
   int a = atoi(argv[0]);
   int b = atoi(argv[1]);
   int c = a+b;
   printf('%d', c);
}
