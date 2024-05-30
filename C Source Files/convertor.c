
#include <stdio.h>
#include <ctype.h>
#define size 50

char stack[size];
int top = -1;
int Op;

void push(char ch)
{
    stack[++top] = ch;
}

char pop() // A+B top = 1
{
    char ch = stack[top];
    top = top - 1;
    stack[top+1] = '\0';
    return ch;
}

int pr(char ch)
{

    switch(ch)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;

    }
}

char revInfix(char infExp[50])
{
    int len = strlen(infExp);
    char infix[50]; int i,j;
    for(i = 0, j = len-1; j>=0; i++,j--)
    {
        if(infExp[j]==')')
            infix[i] = '(';
        else if(infExp[j] == '(')
            infix[i] = ')';
        else infix[i] = infExp[j];
    }
    infix[i] = '\0';
    printf(" Reverse Expression: %s\n",infix);
    infixToPostfix(infix);

}

void infixToPostfix(char infix[50])
{
    char postfix[50], ch, elem;
    int i = 0, k = 0;
    push('#');
    printf("\n Symbol\t\tStack\t\tOutput\n");
    while((ch = infix[i])!='\0')
    {

        if(ch == '(') push(ch);

        else if(isalnum(ch)) postfix[k++] = ch;

        else if(ch == ')')
        {
            while(stack[top]!='(')
            {
                postfix[k++] = pop();
            }
            elem = pop();
        }

        else
        {
            while(pr(stack[top]) >= pr(ch))
            {
                postfix[k++] = pop();
            }
            push(ch);
        }
        postfix[k] = '\0';
        printf(" %c\t\t%s\t\t%s\n\n",ch,(stack+1),postfix);
        i++;
    }

    while((ch=stack[top])!='#')
    {
        postfix[k++] = pop();
        postfix[k] = '\0';
        printf(" \t\t\t\t%s\n\n",postfix);

    }
    pop();
    postfix[k] = '\0';
    if(Op==1) {
        printf(" Postfix Expression: %s\n",postfix);
        return;
    }
    infixToPrefix(postfix);

}

void infixToPrefix(char postfix[50]) {
    int len = strlen(postfix);
    int i,j; char prefix[50];
    for(i = 0, j = len-1; j>=0; i++,j--) {

        if(postfix[j]==')')
            prefix[i] = '(';
        else if(postfix[j] == '(')
                prefix[i] = ')';
        else prefix[i] = postfix[j];
    }

    prefix[i] = '\0';
    printf(" Prefix Expression: %s\n",prefix);
}

int main()
{
    char infix[50];

    do
    {
        printf("\n ***Stack Operation***\n");
        printf("\n press 1-Infix to postfix conversion\n");
        printf("\n press 2-Infix to prefix conversion\n");
        printf("\n press 3-Exit\n");
        printf("\n\n Press: ");
        scanf("%d",&Op);
        switch(Op)
        {
        case 1:
            printf(" -----------------------------------------------\n");
            printf("\n Enter Infix Expression: ");
            scanf("%s",infix);
            infixToPostfix(infix);
            printf(" -----------------------------------------------\n");
            printf("\n Press any to continue....\n");
            break;
        case 2:
            printf("\n-----------------------------------------------\n");
            printf(" Enter Infix Expression: ");
            scanf("%s",infix);
            revInfix(infix);
            printf("\n-----------------------------------------------\n");
            break;
        case 3:
            printf(" Terminating\n");
            break;

        }
    }
    while(Op!=3);

    return 0;
}
