#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a,b;
    scanf("%d\n%d", &a,&b);
      // Complete the code.
    for(int i=a;i<=b;i++){
      //從a的直到b的值（包括邊界），使用if else印出數字的英文，並如果超過9的話也會判斷是整數還是偶數
        if(i==1){
            printf("one\n");
        }
        else if(i==2){
            printf("two\n");
        }
        else if(i==3){
            printf("three\n");
        }
        else if(i==4){
            printf("four\n");
        }
        else if(i==5){
            printf("five\n");
        }
        else if(i==6){
            printf("six\n");
        }
        else if(i==7){
            printf("seven\n");
        }
        else if(i==8){
            printf("eight\n");
        }
        else if(i==9){
            printf("nine\n");
        }
        else if(i%2==0){
          printf("even\n");
        }
        else{
          printf("odd\n");
        }
    }

    return 0;
}



