#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andmax=0,ormax=0,xormax=0;
    //因為最外層i是從1開始，所以初始值設為1
    for(int i=1;i<=n;i++){
        //j的數都會依照i+1增加，所以j=i+1，然後因為k=4，但and,or,xor都要小於等於4，所以j<=n
        for(int j=i+1;j<=n;j++){
            int and = i&j;
            if(and < k && and > andmax){
                andmax = and;
            }
            int or = i|j;
            if(or < k && or >ormax){
                ormax=or;
            }
            int xor = i^j;
            if(xor < k && xor >xormax){
                xormax=xor;
            }
        } 
    }
    printf("%d\n",andmax);
    printf("%d\n",ormax);
    printf("%d\n",xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
/*
a b(j)  a b(j) a b(j)   a b(j)
1 2
1 3     2 3 
1 4     2 4     3 4
1 5     2 5     3 5     4 5
*/
