//using stack 
#include <stdio.h>
#include <string.h>
#define MAX 100 

char stack[MAX];
int top = -1;

void push (char v) //push function
    {
        if (top == MAX -1)
            printf("stack overflow\n"); 
        else
            stack[++top] = v;
    }

char pop () //pop function
    {
        if ( top == -1 )
            { 
                printf("stack underfow\n");
                return '\0';
            }
        else
            return stack[top--];
    }

int isBalanced(char expr[])
{
    top = -1;   // reset stack before checking

    for (int i = 0; i < strlen(expr); i++)
    {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[')   // If opening bracket, push 
        {
            push(ch);
        }

        else if (ch == ')' || ch == '}' || ch == ']')  // If closing bracket matches, pop =opening bracket and check 
        {
            char lastBracket = pop();

            if ((ch == ')' && lastBracket != '(') ||
                (ch == '}' && lastBracket != '{') ||
                (ch == ']' && lastBracket != '['))
            {
                return 0;   // not balanced
            }
        }
    }

    //  balanced 
    return top == -1;
}

int main(){
    char expr[100];

    printf("Enter expression: ");
    scanf("%s", expr);  // reads input without spaces

    if (isBalanced(expr))
        printf("The parentheses are balanced\n");
    else
        printf("The parentheses are not balanced\n");

    return 0;
}
