//string
#include<stdio.h>
int main(){
char a[] = "manish";
     //printf("enter string");          we can use these syntex for 
    // scanf ("%s" , a)                  taking string from user 
printf("%s " , a );
return 0 ;
}

//string with pointer :
#include <stdio.h>
int main() {
    char *name = "Manish";   
    printf("%s\n", name);   // print full string
    // for  printing characters using pointer
    while (*name != '\0') {
        printf("%c ", *name);
        name++;
    }
    return 0;
}
