#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int k = -1; 
    /*將k=-1是因為需要找到最右邊，以滿足s[i]<s[k+1]的條件，因為假設從0開始會從左邊開始找，無法找到最右邊的字串。
    因此如果將k=-1，會從0開始循環找到n-2，嘖可以確保較小的元素被放在正確的位置上*/
    for(int i=0;i<n-1;i++){ //n-1表示循環找到倒數第二個元素
        if(strcmp(s[i],s[i+1])<0){  // 用strcmp函式表示目前元素s[i]、s[i+1]字典的順序
            k=i;
        }
    }
    if(k == -1){    //如果k的值為-1，則表示沒有找到符合k的條件
        return 0;        
    }
    /*找到k之後繼續找l,以滿足s[k]<s[l]的條件，從k+1開始的數組找到最右邊滿足l的條件*/
    int l=-1;
    for(int i=k+1;i<n;i++){
        if(strcmp(s[k],s[i] )< 0){
            l=i;
        }
    }
    //k和l元素交換
    char *tmp = s[k];
    s[k] = s[l];
    s[l] = tmp;
    // 執行反向操作，將k+1到委末的字串反轉，最後返回1表示計算出下一組字串排列
    int i = k+1,j=n-1;
    while(i<j){
        tmp = s[i];
        s[i++] = s[j];
        s[j--] = tmp;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));   // calloc字串分配記憶體空間，使用calloc初始化，將pointer存在變數s中
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));    //  使用calloc初始化，將字串空間分配為大小11個bytes
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]); //  free函式：釋放字串s的記憶體空間
	free(s);
	return 0;
}
