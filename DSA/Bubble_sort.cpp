#include<iostream>
#include<string.h>
using namespace std;
void swap(int arr[],int prev,int next)
{
    int temp=arr[prev];
    arr[prev]=arr[next];
    arr[next]=temp;
}
void bubbleSort(int arr[],int n)
{
    int i=n;/*c=0*/
    while(i>0)
    {  
        int check =0;
       for(int j=0;j+1<n;j++)
       {
         if(arr[j]>arr[j+1])
         {
          swap(arr,j,j+1);
           check=1;
         }
       }
       if(check==0)
        break;
       i--;
       //cout<<"Loop count :- "<<++c<<endl;
    }
    
}
//Using Recursion
void bubbleRec(int arr[],int n)
{
    if(n==0 || n==1)
     return;
    for(int i=0;i+1<n;i++)
     {
        if(arr[i]>arr[i+1])
         swap(arr[i],arr[i+1]);
     }
     bubbleRec(arr,--n);
}
int main()
{
    int arr[5]={15,10,31,25,14};
   // bubbleSort(arr,5);
   bubbleRec(arr,5);
    for(int i=0;i<5;i++)
     cout<<arr[i]<<"  ";
    return 0;
}