#include<stdio.h>
//function decleration;
void display(int arr[], int size);

//function defination :
void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main (){
int a[10] = {1,2,3,4,5,6,7,8,9,0};
//function call :
display(a, 5);   // passing array to function
reyurn 0 ;
}
