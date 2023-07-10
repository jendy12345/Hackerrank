#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;    //  存取書架的總數
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;    //  存取查詢的總數
    scanf("%d", &total_number_of_queries);

    total_number_of_books = (int *)malloc(sizeof(int)*total_number_of_shelves); //  使用malloc做記憶體動態分配，存取書架上書籍的總數，使用sizeof確定整數大小，並乘以total_number_of_shelves為所有的書架分配夠用得記憶體
    total_number_of_pages = (int **)malloc(sizeof(int *)*total_number_of_shelves);  //  存取每本書頁數的總數，用sizeof用於確定每個pointer元素的大小
    for(int i=0;i<total_number_of_shelves;i++){
        *(total_number_of_books + i) = 0;   //  
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            int bookInShelf = *(total_number_of_books + x); //  取得書架目前書籍的數量
            //  使用realloc將調整書架x分配目前圖書館書籍頁數的總量，記憶體大小增加(bookInShelf+1)，以容納新書籍
            *(total_number_of_pages + x) = (int*)realloc(*(total_number_of_pages + x),sizeof(int)*(bookInShelf+1));   
            *(*(total_number_of_pages + x)+bookInShelf) = y;    //  將新書的頁數y除存在x的相對位置
            *(total_number_of_books + x) += 1; 

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y)); 
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}
