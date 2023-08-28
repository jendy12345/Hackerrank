if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    t = tuple(integer_list) # create tuple "t",
    print (hash(t)) #印出計算完後的hash(t)
