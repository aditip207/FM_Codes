#include <stdio.h>  //imports variables and functions to perform input output operations
#include<string.h> //imports string functions
int main() //a function 
{
    char str[100];  // a variable that holds string type values 
    
    printf("Enter the string: "); //print command 
    scanf("%[^\n]s",&str);//%[^\n]It is an edit conversion code:can be used to read a line containing characters like variables and even whitespaces.
    int l = 0; //variable for checking from the start
    int h = strlen(str) - 1; //variable for checking from the end
 while (h > l)//loop for comparing if the first and last letter are the same
  {
        if (str[l++] != str[h--]) 
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}