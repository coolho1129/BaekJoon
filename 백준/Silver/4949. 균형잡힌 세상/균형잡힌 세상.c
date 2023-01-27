#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;
typedef struct {

	char* data;
	int top;
	int capacity;

}stack;

void init_stack(stack* s)
{
	s->top = -1;
	s->capacity = 1;
	s->data = (element*)malloc(s->capacity * sizeof(element));

}

int is_empty(stack* s)
{
	return (s->top == -1);
}

int is_full(stack* s)
{
	return (s->top == (s->capacity - 1));
}

void push(stack* s, char input)
{
	if (is_full(s))
	{
		s->capacity *= 2;
		s->data = (element*)realloc(s->data, s->capacity * sizeof(element));
	}

	s->data[++(s->top)] = input;
}


element pop(stack* s)
{
	if (is_empty(s))
	{
		exit(1);

	}
	
		return s->data[(s->top)--];
}

int checkmatching(char str[])
{
	stack s;
	int len = strlen(str);
	char ch, open_ch;
	init_stack(&s);

	for (int i = 0; i < len; i++)
	{
		ch = str[i];
		
		switch (ch)
		{
		case'(':case'[':
			//printf("%c", ch);
			push(&s, ch);
			break;


		case')':case']':
			if (is_empty(&s))
				return 0;
			else
			{
				open_ch = pop(&s);
				//printf("%c %c", open_ch, ch);
				if ((open_ch == '(' && ch != ')') || (open_ch == '[' && ch != ']'))
					return 0;

			}
			break;
		
		default:
			break;

		}
	}

	if (str[len - 1] != '.')
		return 0;
	if (!is_empty(&s))
	{
		return 0;
	}
	return 1;
}



int main() {

	char str[101] = { 0 };
	
	for (;;) {
		gets(str);
		if (strlen(str)==1&&str[0] == '.')
			break;
        if (checkmatching(str)) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
		
		
	}
	return 0;
}