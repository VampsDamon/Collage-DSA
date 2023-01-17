#include<iostream>
#include<string.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
     {
        if(pivot>arr[i])
         count++;
     }
     int pivotIndex=count+s;
     swap(arr[s],arr[pivotIndex]);
     int i=s,j=e;
     while(i<= pivotIndex && j>=pivotIndex)
     {
        while(arr[pivotIndex]>=arr[i])
         i++;
        while(arr[pivotIndex]<=arr[j])
         j--;
        if(i<= pivotIndex && j>=pivotIndex)
        {
            swap(arr[i],arr[j]);
             i++;
             j--;
        }
     }
     return pivotIndex;
}
void quickSort(int arr[],int s,int e)
{
    if(s>=e)
     return ;
    int p=partition(arr,s,e);
    quickSort(arr,s,p);
    quickSort(arr,p+1,e);

}
int main()
{
    int n=7;
    int arr[n]={38,27,43,3,9,82,10};
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<"  ";
    return 0;
}