def swap_case(s):
    x=''
    for i in s:
        if i.isupper(): #用來判斷字串字母大小寫 
            x += i.lower()  #執行迴圈，每個字母往下逐一檢查
        else:
            x += i.upper()
    return x

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
