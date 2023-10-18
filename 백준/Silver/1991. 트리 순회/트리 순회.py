import sys
input=sys.stdin.readline


class Node:
    def __init__(self,key):
        self.key=key
        self.left=None
        self.right=None
        
class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self, key, left, right):
        if self.root ==None:
            self.root = Node(key)
        self.maketree(self.root, key, left, right)

    def maketree(self, current, key, left, right):
        if current == None:
            return None
        if current.key == key:
            if left != None:
                current.left = Node(left)
            if right != None:
                current.right = Node(right)
        else:
            self.maketree(current.left, key, left, right)
            self.maketree(current.right, key, left, right)

    def preorder(self, node):
        if node and node.key!='.':
            print(node.key, end="")
            self.preorder(node.left)
            self.preorder(node.right)

    def inorder(self, node):
        if node and node.key!='.':
            self.inorder(node.left)
            print(node.key, end="")
            self.inorder(node.right)

    def postorder(self, node):
        if node and node.key!='.':
            self.postorder(node.left)
            self.postorder(node.right)
            print(node.key, end="")
        

def main():
    n=int(input())
    tree=BinaryTree()
    for _ in range(n):
        p,l,r=input().split()
        tree.insert(p,l,r)
            
    tree.preorder(tree.root)
    print()
    tree.inorder(tree.root)
    print()
    tree.postorder(tree.root)
            
main()