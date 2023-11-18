#include <stdio.h>
void bubblesort(int arr[],int ele);
void selecsort(int arr[],int ele);
int main()
{
int arr[50],n,ele,i;
printf("Enter number of elements\n");
scanf("%d",&ele);
printf("Enter elements in array\n");
for(i=0;i<ele;i++)
scanf("%d",&arr[i]);
printf("Enter 1 for bubble sort and 2 for selection sort: \n"); 
scanf("%d",&n);
if(n==1)
{
    bubblesort(arr,ele);
    return 0;
    }
else
{
selecsort(arr,ele);
return 0;
}
}

void bubblesort(int arr[],int ele)
{
    int i,j,temp;
for(i=0;i<(ele-1);i++) //loop for handling iterations
{
  for(j=0;j<(ele-1-i);j++) //loop that compares two adjacent numbers 
  {
    if(arr[j]>arr[j+1]) //compares adjacent numbers
    {
    temp=arr[j];//swapping of numbers  
    arr[j]=arr[j+1];
    arr[j+1]=temp;
  }
}
}
printf("Bubble sorted array:");
for(i=0;i<ele;i++)
printf("%d",arr[i]);
}

void selecsort(int arr[],int ele)
{
    int i, j, position, swap;
for(i = 0; i < (ele - 1); i++)
{
position=i;
for(j = i + 1; j < ele; j++)
{
if(arr[position]>arr[j])
position=j;
}
if(position != i)
{
swap=arr[i];
arr[i]=arr[position];
arr[position]=swap;
}
}
printf("Selection sorted array:");
for(i = 0; i < ele; i++)
printf("%d", arr[i]);
}
