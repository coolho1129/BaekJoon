import sys
input=sys.stdin.readline

def main():
    n = int(input())
    cmds = []
    indexs = set()
    for i in range(n):
        cmds.append(input().strip())
    
    if n == 1:
        print(cmds[0])
        return
    
    for i in range(1, n):
        for j in range(len(cmds[0])):
            if cmds[i][j] != cmds[i-1][j]:
                indexs.add(j)

    for i in range(len(cmds[0])):
        if i in indexs:
            print('?', end='')
        else:
            print(cmds[0][i], end='')
    
    
if __name__ == '__main__':
    main()