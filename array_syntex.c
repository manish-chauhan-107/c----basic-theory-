#include<stdio.h>
int main ()
{
  int a[5] = {1,2,3,4,5};  // one dimenssion array
  int b[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}}; // two dimenssion array
  for (int i=0 ; i<5 ; i++){
         printf ("%d\t" , a[i]);       //print 1-d array
  }
  printf("\n");
 for (int m=0 ; m<4 ; m++){
    for (int n=0 ; n<3 ; n++){
           printf ("%d \t" , b[m][n]); 
    }
    printf("\n");
 }
return 0;
}
