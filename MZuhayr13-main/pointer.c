#include <stdio.h>
#include <stdlib.h>

void setNumberByValue( int x )
{
   x  = 7;
}

void setNumberByReference( int *x )
{
   *x  = 7;
   x[0] = 11;
}


int main(int argc, char *argv[])
{
   int a = 5;
   int *b = &a;
   printf("a %d sizeof(a) %d address of a %p\n", a, sizeof(a), &a );
   printf("b %p \n", b );
   printf("sizeof(char) %d\n", sizeof(char));
   printf("sizeof(float) %d\n", sizeof(float));
   printf("sizeof(double) %d\n", sizeof(double));

   setNumberByValue(a);
   printf("a after setNumberByValue %d \n", a );

   setNumberByReference(&a);
   printf("a after setNumberByReferenceValue %d \n", a );

   return 0;
}
