#include <iostream>
using namespace std;
#define size 5
char stack[size];
int top = -1;
void push(char value);
char pop();
bool balance(string name);
int main()
{
    string n;
    cin>>n;
    if(balance(n)==false)
    {
        cout<<"not balanced";
    }
    else if(balance(n)==true)
    {
        cout<<"is balanced";
    }
    return 0;
}
bool isempty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    if (top == -1)
    {
        cout << "stack overflow" << endl;
        return false;
    }
    else
    {
        return stack[top--];
    }
}

char beak()
{
    if (top == -1)
    {
        cout << "stack overflow" << endl;
        return false;
    }
    else
    {
        return stack[top];
    }
}

bool taste(char open, char close)
{
    if (open == '[' && close == ']')
    {
        return true;
    }
    else if (open == '{' && close == '}')
    {
        return true;
    }
    else if (open == '(' && close == ')')
    {
        return true;
    }
    return false;
}
bool balance(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == '[' || name[i] == '{' || name[i] == '(')
        {
            push(name[i]);
        }
        else if (name[i] == ']' || name[i] == '}' || name[i] == ')')
        {
            if (isempty())
            {
                return false;
            }
            else if (taste(beak(), name[i]) == false)
            {
                return false;
                
            }
            pop();
        }
    }
    return isempty();
}
