/* syntex:
   Pointer Declaration
     data_type *ptr;
   Pointer Initialization
     ptr = &variable;
   Increment Pointer
     ptr++;
   Decrement Pointer
     ptr--;
   Pointer Addition
     ptr = ptr + n;
   Pointer Subtraction
     ptr = ptr - n;
   Access Value Using Pointer Arithmetic
     *(ptr + i); */
#include<stdio.h>
int main (){
int a[5] = {7 , 77 , 777 , 7777 , 77777};      //THALA FOR A REASON!
int *p = a;
printf("Value at p = %d\n", *p);
printf("After p++  = %d\n", *p++);  
printf("*(p + 1)   = %d\n", *(p + 1));
printf("*(p + 1)   = %d\n", *(p + 1));
return 0;
}


