if __name__ == '__main__':
    student = []     #存取名字列表
    score_list = [] #設定要存入的score的列表
    for _ in range(int(input())):
        name = input()
        score = float(input())
        student.append([name,score])    #將姓名和分數append在一起,append可以用來增加元素，要用[]
        score_list.append(score)    #單獨存取value的list
    score_val = sorted(set(score_list))[1]  #將val轉為set做排序，用來避免重複問題，[1]表示取第二小的成績(index : 0,1,2,...)
    for name,score in (sorted(student,key=lambda x:x[0])):  #分別為列表排序[name, score]，sorted內為將student列表去做排序，排序的標準用第一項元素來排列(x[0])
        #假設score是第二小，則印出成績第二小的student名字
        if score_val == score:
            print(name)
    
