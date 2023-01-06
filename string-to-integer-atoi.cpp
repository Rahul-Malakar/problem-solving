// https://leetcode.com/problems/string-to-integer-atoi/description/

// #include <stdlib.h>
// #include <stdio.h>
 
// int main(void)
// {
//     int i;
//     string *s;
 
//     s = " -9885";
//     i = atoi(s);     /* i = -9885 */
 
//     printf("%d\n",i);
// }
 
// /*******************  Output jshould be similar to:  ***************
 
// i = -9885
// */

// above is the way to use in-built atoi function 

class Solution {
public:
    int myAtoi(string str) 
{
    long long int result = 0;
    int flag = 1;
    int i = 0;

    i = str.find_first_not_of(' ');
    if (i == string::npos)
        return result;
    if (str[i] == '-' || str[i] == '+')
    {
        flag = (str[i] == '-') ? -1 : 1;
        i++;
    }   
    while (i < str.size() && isdigit(str[i]))
    {
        result = 10 * result + (str[i] - '0');
        i++;

        if ((flag * result) > INT_MAX)
            return INT_MAX;
        if ((flag * result) < INT_MIN)
            return INT_MIN;
    }   
    result *= flag;
    
    return result;
}
};