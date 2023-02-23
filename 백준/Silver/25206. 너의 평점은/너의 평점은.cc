#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(7);

    string name, grade;
    double credit, sum = 0, total = 0, score, result = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> name >> credit >> grade;
        score = 0;
        switch (grade[0])
        {

        case 'A':
            score = (grade[1] == '+') ? 4.5 : 4;
            break;

        case 'B':
            score = (grade[1] == '+') ? 3.5 : 3;
            break;

        case 'C':
            score = (grade[1] == '+') ? 2.5 : 2;
            break;

        case 'D':
            score = (grade[1] == '+') ? 1.5 : 1;
            break;

        case 'F':
            score = 0;
            break;
        }
        if (grade[0] != 'P')
        {
            sum += credit;
            total += credit * score;
        }
    }
    result = total / sum;
    cout << result;
}