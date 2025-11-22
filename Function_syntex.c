#include<stdio.h>
void add (int a , int b);  // function declaration
int main(){
  int x = 12 ;
  int y = 13 ;
  add(x , y);   //function call by value  [ we study call by refernece after pointer ]
return 0;
}
// function definition
void add (int a , int b ){
      int sum = a + b ;
      printf ("sum = %d \n " , sum );
return ;
}
