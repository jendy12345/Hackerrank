if __name__ == '__main__':
    N = int(input())
    #設一個陣列存
    l=[]
    for i in range(N):
        #input().split()一行內輸入多個字元
        s = list(input().split())
        #insert字串做數值插入，int(s[1]) => 表示要插入的位置(位置)，int(s[2]) => 要插入的數字(value)
        if s[0]=='insert':
            l.insert(int(s[1]),int(s[2]))
        #remove數字，將其中一個數字移除
        if s[0]=='remove':
            l.remove((int(s[1])))
        #append數字進來，加入一個新的數字
        if s[0]=='append':
            l.append(int(s[1]))
        #做由小到大排序
        if s[0]=='sort':
            l.sort()
        #將最後一位數字清掉
        if s[0]=='pop':
            l.pop()
        #將數字大小做反轉
        if s[0]=='reverse':
            l.reverse()
        if s[0]=='print':
            print(l)
