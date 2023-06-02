#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int mark = 0;
  // 第一行number_of_students表示學生數量，也代表marks中元素的數量
  for(int i=0;i<number_of_students;i++){
    //gender判斷，男生排序為marks[0],marks[2],marks[4] => 是偶數部份，所以整除2的排序數字相加
    //女生排序為marks[1],marks[3],marks[5] => 是奇數部份，所以除以2於1的排序數字相加
    if(gender=='b'){
        if(i%2==0){
            mark += marks[i];
        }
    }
    if(gender=='g'){
        if(i%2==1){
            mark += marks[i];
        }
    }
  }
  return mark;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
