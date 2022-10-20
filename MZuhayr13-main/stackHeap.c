#include <stdio.h>
#include <stdlib.h>

struct node_s
{
  char str[101];
  int len;
  struct node_s *next;
};

int prod (int a, int b)
{
  return a*b;
}

int someFunc(int x)
{
   int a = 1, b = 2;
   a = prod (a,b);
   return (x + a + b);
}

int main(int argc, char *argv[])
{
   int x = 10;
   int someArray[10];
   int *arrayOnHeap;
   float y;
   struct node_s someNode;
   arrayOnHeap = (int *)malloc(sizeof(int)*1000000);
   printf("Size of pointer to node_s %d\n", sizeof(struct node_s *));
   printf("Size of node_s %d\n", sizeof(struct node_s));
   while(1)
   {
    sleep(5);
   }
   someFunc(x);
}
