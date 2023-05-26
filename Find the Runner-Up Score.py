if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    #先用sorted函式將list做大小排序
    arr = sorted(list(set(arr)))
    #排序之後，在找出最大、第二大的值，以此類推
    print(arr[-2])
