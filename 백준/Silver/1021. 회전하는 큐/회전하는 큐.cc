#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int N, M, pop, count = 0, size = 0, option = 0, index = 0;
    deque<int> deq;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        deq.push_back(i + 1);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> pop;
        size = deq.size();
        option = 0;
        index = 0;

        if (deq.front() == pop)
        {
            deq.pop_front();
        }

        else
        {
            for (int j = 1; j < size; j++)
            {
                if (deq[j] == pop)
                {
                    count += j;
                    option = 1;
                    index = j;
                    break;
                }

                else if (deq[size - j] == pop)
                {
                    count += j;
                    option = 2;
                    index = j;
                    break;
                }
            }
        }

        switch (option)
        {
        case 1:
            for (int i = 0; i < index; i++)
            {
                int temp = deq.front();
                deq.push_back(temp);
                deq.pop_front();
            }
            deq.pop_front();
            break;

        case 2:
            for (int i = 0; i < index; i++)
            {
                int temp = deq.back();
                deq.push_front(temp);
                deq.pop_back();
            }
            deq.pop_front();
            break;
        }
    }

    cout << count;
}