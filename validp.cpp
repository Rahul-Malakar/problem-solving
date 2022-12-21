#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std;

bool isValid(string s)
{

    string stack = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (stack == "")
        {
           stack.push_back(s[i]);
        }
        else if (s[i] == ')')
        {
            if (stack[stack.size() - 1] != '(')
                return false;
            else
            {
                stack.erase(stack.size() - 1);
            }
        }
        else if (s[i] == ']')
        {
            if (stack[stack.size() - 1] != '[')
                return false;
            else
            {
                stack.erase(stack.size() - 1);
            }
        }
        else if (s[i] == '}')
        {
            if (stack[stack.size() - 1] != '{')
                return false;
            else
            {
                stack.erase(stack.size() - 1);
            }
        }
        else
        {
            stack.push_back(s[i]);
        }
    }
    if (stack == "")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    bool s = isValid("([]}}}})");
    cout << s << endl;

    return 0;
}