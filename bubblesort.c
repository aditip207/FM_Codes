#include<stdio.h> //imports input output functions
#include<conio.h>
int main()
{
  int n,arr[100],i,j,temp; //initializing variables
printf("Enter number of elements in array\n");//command to enter number of elements in array
scanf("%d",&n);//command that stores inputted value
printf("Enter %d elements in the array:",n); //command to enter elements of array
for(i=0;i<n;i++) //loop to store values in array
scanf("%d",&arr[i]); //stores array values which are inputted

for(i=0;i<(n-1);i++) //loop for handling iterations
{
  for(j=0;j<(n-1-i);j++) //loop that compares two adjacent numbers 
  {
    if(arr[j]>arr[j+1]) //compares adjacent numbers
    {
    temp=arr[j];//swapping of numbers  
    arr[j]=arr[j+1];
    arr[j+1]=temp;
  }
}

}
printf("The array has been bubble sorted\n"); //prints the sorted array 
for(i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}

