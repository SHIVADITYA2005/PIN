#include <stdio.h>
#include <conio.h>
int main (){
int PIN,initial;
printf("Enter your PIN");
scanf("%d",&PIN);
initial = 1234;
if(PIN == initial){
printf("The PIN entred is correct access granted");
}
else{
    printf("ACCESS DENIED ");
}
return 0;
}