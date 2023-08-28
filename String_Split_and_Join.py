

def split_and_join(line):
    # write your code here
    a = line.split() #字串分開的部分
    b = "-".join(a) #在空白字串中加入-
    return b

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
