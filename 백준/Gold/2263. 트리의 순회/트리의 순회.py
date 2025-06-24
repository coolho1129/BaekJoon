import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def Preorder(inL, inR, postL, postR, inorder, postorder, index, result):
    if inL > inR or postL > postR:
        return
    root = postorder[postR]
    result.append(root)
    k = index[root]
    left = k - inL
    Preorder(inL, k - 1, postL, postL + left - 1, inorder, postorder, index, result)
    Preorder(k + 1, inR, postL + left, postR - 1, inorder, postorder, index, result)

def TreePreorder(inorder, postorder, n):
    index = {num: i for i, num in enumerate(inorder)}
    result = []
    Preorder(0, n - 1, 0, n - 1, inorder, postorder, index, result)
    return result

def main():
    n = int(input())
    inorder = list(map(int, input().split()))
    postorder = list(map(int, input().split()))
    result = TreePreorder(inorder, postorder, n)
    print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()
