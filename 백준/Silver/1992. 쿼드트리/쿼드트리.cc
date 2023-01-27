#include <iostream>
#include <string>

using namespace std;
void QuadTree(string input[], int starti, int startj, int size);

int main()
{
    int n;
    cin >> n;
    string *input = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
 
   

    QuadTree(input, 0, 0, n);
}

void QuadTree(string input[], int starti, int startj, int size)
{

    int count1 = 0, count2 = 0;
    int end = size * size;

    for (int i = starti; i < starti + size; i++)
    {
        for (int j = startj; j < startj + size; j++)
        {
            if (input[i][j] == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }

    if (count1 == end)
    {
        cout << "0";
    }

    else if (count2 == end)

    {
        cout << "1";
    }

    else
    {
        cout << "(";
        size/=2;
        QuadTree(input, starti, startj, size);
        QuadTree(input, starti, startj + size,size);
        QuadTree(input, starti + size, startj, size );
        QuadTree(input, starti + size, startj + size, size);
        cout << ")";
    }
}