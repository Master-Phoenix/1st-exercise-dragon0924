#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b){
   return a+b;
}

int main(int argc, char *argv[])
{
   int a = stoi(argv[1]);
   int b = stoi(argv[2]);
   int c = a+b;
   return c;
}
