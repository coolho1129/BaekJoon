import sys
input=sys.stdin.readline

def check(word, start, end):
    length = (end - start + 1) // 4
    new_word = 'w' * length + 'o' * length + 'l' * length + 'f' * length
    if word[start:end+1] == new_word:
        return True
    return False

def main():
    word = input().strip()
    
    f_indexs = []
    for i in range(len(word)):
        if word[i] == 'f' and (i == len(word) - 1 or word[i + 1] != 'f'):
            f_indexs.append(i)
    f_indexs.append(len(word) - 1)
    
    prev = 0
    for f_index in f_indexs:
        
        if (f_index + 1) % 4:
            print(0)
            return
       
        if not check(word, prev, f_index):
            print(0)
            return
        prev = f_index + 1
    print(1)


main()