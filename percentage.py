if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        #輸入名字
        name, *line = input().split()
        #以list的方式輸入成績
        scores = list(map(float, line))
        #由於要輸入學生名字計算出成績，所以學生姓名=成績
        student_marks[name] = scores
    #輸入姓名
    query_name = input()
    #因為計算平均，所以先計算成績的長度，也就是成績的個數
    grade = len(student_marks[query_name])
    #將學生成績用sum()函式做加總
    sum = sum(student_marks[query_name])
    average = sum/grade
    #此print方法取到小數點後兩位，取到後幾位以此類推
    print(f'{average:.2f}')
