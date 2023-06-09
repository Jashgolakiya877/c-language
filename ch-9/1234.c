#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int length = 0;
    
   
    while (str[length] != '\0')
    {
        length++;
    }

    int start = 0;
    int end = length - 1;
    
   
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}

int main()
{
    char str[100];
    
    printf("Enter any string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("Given string is a Palindrome.\n");
    }
    else
    {
        printf("Given string is not a Palindrome.\n");
    }
    
    return 0;
}

