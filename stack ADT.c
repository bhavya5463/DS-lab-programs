#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int a[MAX],top=-1;
void push(int x)
{
        if(top==MAX-1)
        {
                printf("stack overflow");
        }
        else
        {
                a[++top]=x;
        }
}
int pop()
{
        if(top==-1)
        {
                return -1;
        }
        else
        {
                return a[top--];
        }
}
int peak()
{
        return a[top];
}
void display()
{
        int i;
        if(top==-1)
        {
                printf("no elements in the stack");
        }
        else
        {
                for(i=top;i>=0;i--)
                {
                        printf("\n%d",a[i]);
                }
        }
}
int main()
{
        int x,ch;
        while(1)
        {
                printf("\n 1.push ,\n 2.pop \n 3.peak ,\n 4.display");
                printf("\nenter choice");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:printf("\nenter element to insert");
                               scanf("%d",&x);
                               push(x);
                               break;
                        case 2:x=pop();
                               if(x==-1)
                               {
                                       printf("stack underflow");
                               }
                               else
                               {
                                       printf("\nelement %d deleted",x);
                               }
                               break;
                        case 3:x=peak();
                               printf("the element on the top of the stack is %d",x);
                               break;
                        case 4:printf("the leemnr sin stack are :");
                               display();
                               break;
                        case 5:exit(1);
                               break;
                }
        }
}


