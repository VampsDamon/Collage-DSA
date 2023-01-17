#include<iostream>
#include<string.h>
using namespace std;
void merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int arr1[len1];
    int arr2[len2];
    int k=s;
    //copy element from array
    for(int i=0;i<len1;i++)
      arr1[i]=arr[k++];
    k=mid+1;
    for(int j=0;j<len2;j++)
      arr2[j]=arr[k++]; 
    //merge 
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2)
    {
         if(arr1[index1]<arr2[index2])
           arr[k++]=arr1[index1++];
         else
           arr[k++]=arr2[index2++];
    }
    while(index1<len1)
     arr[k++]=arr1[index1++];
    while(index2<len2)
    arr[k++]=arr2[index2++];
}
void mergedSort(int arr[],int s,int e)
{
    if(s>=e)
     return;
    int mid=(s+e)/2;
   //Sort first Part 
    mergedSort(arr,s,mid);
    //Sort Second Part
    mergedSort(arr,mid+1,e);
    //Merging the both part
    merge(arr,s,e);
} 
int main()
{
    int n=7;
    int arr[n]={38,27,43,3,9,82,10};
    mergedSort(arr,0,n-1);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<"  ";
    return 0;
}