#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//定義三角形結構
struct triangle
{
	int a;
	int b;
	int c;
};
// typedef定義triangle別名
typedef struct triangle triangle;

//tr為指標
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double area[n],p;   //area[n]設定陣列存取三角形面積
    //計算三角形面積，並儲存在area陣列中
    for(int i=0;i<n;i++){
        p = (tr[i].a + tr[i].b + tr[i].c) /2.0;
        area[i] = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    double temparea;
    struct triangle temp;
    //進行陣列中三角形面積大小排序
    for(int k=0;k<n;k++){
        for(int j=0;j<n-k-1;j++){
            if(area[j]>area[j+1]){
                temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;

                temparea = area[j];
                area[j] = area[j+1];
                area[j+1] = temparea;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
