#include <stdio.h>
 int main()
{

  int var =100;
  int *p = &var;

  int *q =p;
  q++;

  

  /*
   What would be the value of var;
   What would be the value of &var;
   What would be the value of p;
   What would be the value of &p;
   What would be the value of *p;
   What would be the value of **p;
   What would be the value of *var;
  */

 /* printf("var = %d\n", var);
  printf("var = %d\n", &var);
  printf("var = %d\n", p);
  printf("var = %d\n", &p);
 
  printf("var = %d\n", *p);

  printf("var = %d\n",*(int *)*p);
  printf("var = %d\n", *(int *)var);
*/

  q = p;
  q++;
  printf("\n\n");
  printf("p = %p\n", p);
  printf("q = %p\n", q);
  printf("intptr q-p = %ld\n", q-p);

  printf("charptr q-p = %ld\n", (char *)q -(char *)p);
  printf("voidptr q-p = %ld\n", (void *)q -(void *)p);

  printf("q+p - %ld\n", q + p);

}


