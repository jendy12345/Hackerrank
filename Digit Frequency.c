#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];       // 宣告儲存字串的大小
    int freq[10] = {0}; //  宣告整數數列，用於儲存0~9出現的頻率，並初始化為0
    scanf("%[^\n]", s); //  %[^\n]這是scanf函式中的格式化輸入指示，用於讀取一行文字，遇到'\n'換行
    for (int i = 0; i < strlen(s); i++)
    { //  strlen函式是用來計算字串長度，檢查s[i]是否為數字，如果為數字將對應的freq陣列元素+1
        if (s[i] >= '0' && s[i] <= '9')
        {
            freq[s[i] - '0']++; //  s[i]和freq是透過(s[i]-'0')的ASCLL碼值得到
        }
    }
    for (int i = 0; i < 10; i++)
    { //  計算每個數字出現的頻率
        printf("%d ", freq[i]);
    }
    return 0;
    //  文字頻率計算方式：
    //  將數字出現的頻率在該數字位置+1
    //  EX:
    //  a11472o5t6 => 0 2 1 0 1 1 1 1 0 0 
    //  lw4n88j12n1 => 0 2 1 0 1 0 0 0 2 0 
    //  1v88886l256338ar0ekk => 1 1 1 2 0 1 2 0 5 0 

}
