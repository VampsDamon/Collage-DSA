#include<iostream>
#include<string.h>
using namespace std;
void InsertionSort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        for( j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else 
             break;
        }
        arr[j+1]=temp;
    }
}
void Insertion_Recur(int arr[],int n,int i)
{
       if(i==n)
        return;
       int temp=arr[i],j;
        for( j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else 
             break;
        }
        arr[j+1]=temp;
        Insertion_Recur(arr,n,i+1);
}
int main()
{
    int arr[6]={5,4,10,1,6,2};
    //InsertionSort(arr,6);
    Insertion_Recur(arr,6,1);
    for(int i=0;i<6;i++)
     cout<<arr[i]<<"  ";   
    return 0;
}