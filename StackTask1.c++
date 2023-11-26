#include <iostream>
using namespace std;
#define size 5
char stack[size];
int top = -1;
void push(char value);
char pop();
int main()
{
    push('A');
    push('m');
    push('m');
    push('a');
    push('r');
    while(top!=-1)
    {
        cout<<pop();
    }


    return 0;
}

void push(char value)
{
    if (top == size - 1)
    {
        cout << "stack underflow!" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

char pop()
{
    if(top==-1)
    {
        cout<<"stack overflow"<<endl;
        return false;
    }
    else
    {
        return stack[top--];
    }
}

















