#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;    //宣告pointer變數
    s = malloc(1024 * sizeof(char));    //使用malloc建立動態分配
    scanf("%[^\n]", s); //讀取輸入及存取倒s中
    s = realloc(s, strlen(s) + 1);  //使用realoc函數將s重新分配memory
    //Write your logic to print the tokens of the sentence here.
    for(char *c=s;*c != '\0';c++){  //使用for迴圈重複字串，並用if檢查C指向的字串是否為空字串，將*c != NULL改為*c != '\0',代表string中指符號
        if(*c==' '){
            *c = '\n';
        }
    }
    printf("%s",s);
    return 0;
}
