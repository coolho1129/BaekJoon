#include <iostream>
#include <string>

using namespace std;
int white = 0, blue = 0;
void QuadTree(int **input, int starti, int startj, int size);

int main()
{
    int n;
    cin >> n;
    int **input = new int *[n];
    for (int i = 0; i < n; i++)
        input[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> input[i][j];
    }

    QuadTree(input, 0, 0, n);
    cout << white << "\n"
         << blue;
}

void QuadTree(int **input, int starti, int startj, int size)
{

    int count1 = 0, count2 = 0;
    int end = size * size;

    for (int i = starti; i < starti + size; i++)
    {
        for (int j = startj; j < startj + size; j++)
        {
            if (input[i][j] == 0)
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
        // cout << "0";
        white++;
    }

    else if (count2 == end)

    {
        blue++;
        // cout << "1";
    }

    else
    {
        
        size /= 2;
        QuadTree(input, starti, startj, size);
        QuadTree(input, starti, startj + size, size);
        QuadTree(input, starti + size, startj, size);
        QuadTree(input, starti + size, startj + size, size);
       
    }
}