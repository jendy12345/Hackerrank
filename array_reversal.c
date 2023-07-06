#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;   //num = 表示要存取的陣列,*arr = 動態陣列記憶體分配,i則用於會圈計算 
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int)); // 用malloc函式來做動態配置num的整數記憶體空間，將返回的指標轉換為int類型的指標，並存於arr變數中
    for(i = 0; i < num; i++) {  // i < num => 重複num次，將輸入的整數存在arr+i陣列鐘相對應的元素
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */

    for(i = num-1; i >=0; i--)  
        printf("%d ", *(arr + i));

    return 0;
}
