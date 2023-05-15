#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    d = n/10000;
    printf("%d\n",d);
    a = (n/1000)%10;
    printf("%d\n",a);
    b = (n/100)%10;
    printf("%d\n",b);
    c = (n/10)%10;
    printf("%d\n",c);
    e = (n%10);
    printf("%d\n",e);
    printf("%d\n",d+a+b+c+e);
    return 0;
}
