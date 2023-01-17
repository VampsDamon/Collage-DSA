#include<iostream>
#include<string.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        
        for(int j=i+1;j<n;j++)
        {
           if(arr[minIndex]>arr[j])
           {
             minIndex=j;
           }
        }
        swap(arr[i],arr[minIndex]);
    }
}
void selection_recur(int arr[],int n,int i)
{
      if(i==n || n==0 || n==1)
       return ;
        int minIndex=i; 
        for(int j=i+1;j<n;j++)
        {
           if(arr[minIndex]>arr[j])
           {
             minIndex=j;
           }
        }
        swap(arr[i],arr[minIndex]);
        selection_recur(arr,n,i+1);
}
int main()
{
    int arr[5]={15,10,31,25,14};
    //selectionSort(arr,5);
    selection_recur(arr,5,0);
    for(int i=0;i<5;i++)
     cout<<arr[i]<<"  ";
    return 0;
}