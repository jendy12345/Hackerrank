#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    //此為上半圈
    //i=外圈，j=內圈
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--){
          printf("%d ",j);
        }
        //2*i-1 => 用來計算外圍圈數
        for(int j=1;j<=2*i-1;j++){
          printf("%d ",i);
        }
        for(int j=i+1;j<=n;j++){
          printf("%d ",j);
        }
        printf("\n");
    }
    //此為下半圈
    for(int i=1;i<n;i++){
      for(int j=n;j>i;j--){
        printf("%d ",j);
      }
      for(int j=1;j<=2*i-1;j++){
        printf("%d ",i+1);
      }
      for(int j=i+1;j<=n;j++){
        printf("%d ",j);
      }
      printf("\n");
    }
    return 0;
}
