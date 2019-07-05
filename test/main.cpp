#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? 7 : 9)

int main(){
int a=10,b=20;
a += MAX(a,b);
b += MAX(a,b);
printf("%d %d",a,b);
return 0;
}
