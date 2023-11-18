#include<stdio.h> //imports input output functions
int main()
{
    int i,wcount=0; //initializing variables
    char str[2000];
    printf("Enter Text: "); //user input
    gets(str); //gets string with whitespaces also
    for(i=0;str[i]!='\0';i++) //loop to count the number of words in text
    {
    if(str[i]==' '&& str[i+1]!=' ')
    wcount++; //increment operator 
    }
    printf("Number of words in the above text:%d",wcount+1); //output display 
    return 0;

}
