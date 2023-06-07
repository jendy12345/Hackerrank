#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int a[1000];
    scanf("%d",&n);
    //輸入陣列
    for(int i=0;i<n;i++){
        scanf("%d",&(a[i]));
    }
    int sum=0;
    //將輸入的陣列做加總
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    printf("%d\n",sum);
    return 0;
}
