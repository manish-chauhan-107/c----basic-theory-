#include<stdio.h>
int main (){
    int a , b ;

    //take input use input and output function
    printf ("Enter a: ");
    scanf ("%d" , &a );          
    printf ("Enter b: ");
    scanf ("%d" , &b );
   
    // use of arthmetic operators
    int ans = (a/2)+(b*(b+6*a)-b) ;  //take a new variable ans and store answer in it.
    printf ("%d \n" , ans);

    // use of Relational Operators (give answer in 0 and 1 {1 --> true , 0 --> false})
      printf("\n--- relational operators ---\n");
    printf("a == b : %d\n", a == b);  // equal
    printf("a != b : %d\n", a != b);  // not equal
    printf("a > b  : %d\n", a > b);   // greater
    printf("a < b  : %d\n", a < b);   // smaller
    printf("a >= b : %d\n", a >= b);  // greater or equal
    printf("a <= b : %d\n", a <= b);  // smaller or equal

    //use of Bitwise operators
     printf("\n--- Bitwise Operations ---\n");

    printf("a & b  = %d\n", a & b);   // AND
    printf("a | b  = %d\n", a | b);   // OR
    printf("a ^ b  = %d\n", a ^ b);   // XOR
    printf("~a     = %d\n", ~a);      // NOT
    printf("~b     = %d\n", ~b);      // NOT
    printf("a << 1 = %d\n", a << 1);  // Left shift
    printf("b << 1 = %d\n", b << 1);  // Left shift
    printf("a >> 1 = %d\n", a >> 1);  // Right shift
    printf("b >> 1 = %d\n", b >> 1);  // Right shift

    // use of Increment and Decrement Operators 
    a = a++;   // post-increment   (we also use assignment operator{=} here.)
    b = b++;   // post-decrement

    printf("\n--- After Increment (a++ ) and decrement (b--) ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
