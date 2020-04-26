#include<stdio.h>
int main()
{
int a = 3, 
b = 2, 
c = 1;
int d = a>b;
printf("%d", a>b>c);
printf("%d", b>c);
if(a>b>c){
printf("True");
}
else{
printf("False");
}
}
