#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);     //return 英文字母大小順序排序，使用strcmp函示來比較字串a,b的大小順序
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);     //英文字母大小順序顛倒
}

int character(const char *s){   // 用來計算不同字串數字的數量，
    int n=0;
    int count[128] = {0};   //使用128長度的陣列，用來記錄每個字是否都出現過
    if(NULL == s){  
        return -1;
    }
    while(*s != '\0'){  //進入迴圈，遍歷字串中的每個字元，直到遇到字串結尾標誌'\0'
        if(!count[*s]){ // 如果count字串中對應字元的位置為0，表示該字串未出現過
            count[*s]++;    // 將該出現過的字元計數+1，表示已經出現過一次
            n++;    //不同字元數兩+1
        }
        s++;    //移動到下個字串
    }
    return n;   // 返回不同字串數量
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int con = character(a) - character(b);  // 計算兩個字串數量，並根據不同字串大小進行排序
    return (con ? con : lexicographic_sort(a,b));
}
// 如果字串長度相同，則比較字母順序
int sort_by_length(const char* a, const char* b) {
    int len = strlen(a) - strlen(b);
    return (len ? len : lexicographic_sort(a,b));
}
// 使用泡沫排序的方法，比較字串長短，較長字串放後面，再依字母大小作排序
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int mid = len / 2;
    int con = 0;
    while(!con){
        con = 1;
        for(int i=0;i<len - 1;i++){
            if(cmp_func(arr[i],arr[i+1])>0){
                char *temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                con = 0;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));    //動態記憶體分配
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
