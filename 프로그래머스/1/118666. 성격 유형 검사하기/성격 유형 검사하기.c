#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

char *solution(const char *survey[], size_t survey_len, int choices[], size_t choices_len)
{
    int score[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int getscore[9] = {0,3,
                       2,
                       1,
                       0,
                       1,
                       2,
                       3};

    char type[8] = {
        'R',
        'T',
        'C',
        'F',
        'J',
        'M',
        'A',
        'N'};

    char expect[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < survey_len; i++)
    {
        switch (survey[i][0])
        {
        case 'R':
            if (choices[i] < 4)
                score[0] += getscore[choices[i]];
            else
                score[1] += getscore[choices[i]];
            break;

        case 'T':
            if (choices[i] < 4)
                score[1] += getscore[choices[i]];
            else
                score[0] += getscore[choices[i]];
            break;

        case 'C':
            if (choices[i] < 4)
                score[2] += getscore[choices[i]];
            else
                score[3] += getscore[choices[i]];
            break;

        case 'F':
            if (choices[i] < 4)
                score[3] += getscore[choices[i]];
            else
                score[2] += getscore[choices[i]];
            break;

        case 'J':
            if (choices[i] < 4)
                score[4] += getscore[choices[i]];

            else
                score[5] += getscore[choices[i]];
            break;

        case 'M':
            if (choices[i] < 4)
                score[5] += getscore[choices[i]];
            else
                score[4] += getscore[choices[i]];
            break;

        case 'A':
            if (choices[i] < 4)
                score[6] += getscore[choices[i]];
            else if (choices[i] > 4)
                score[7] += getscore[choices[i]];
            break;

        case 'N':
            if (choices[i] < 4)
                score[7] += getscore[choices[i]];
            else if (choices[i] > 4)
                score[6] += getscore[choices[i]];
            break;
        }
    }

    int index = 0;

    for (int i = 0; i < 8; i += 2)
    {
        // printf("%d", score[i]);
        if (score[i] < score[i + 1])
        {
            expect[index] = type[i + 1];
        }

        else
        {
            expect[index] = type[i];
        }
        index++;
    }

    char *answer = calloc(5, sizeof(char));
    strcpy(answer, expect);

    return answer;
}
