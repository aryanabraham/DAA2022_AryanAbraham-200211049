//Given an unsorted array of integers, design an algorithm and a program to sort the array using 
//insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total 
//number of times the array elements are shifted from their place) required for sorting the array.

#include <iostream>
using namespace std;

int iSort(int a[], int n)
{
    int i;
    int j;
    int curr;
    int comp=0;

    for(i=1;i<n;i++){
        j=i-1;
        curr=a[i];
        while((j>-1)&&(curr<a[j])){
            a[j+1]=a[j];
            j--;
            comp++;
        }
        a[j+1]=curr;
    }
    return comp;
}

int main ()
{
    int i;
    int n;

    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Number of comparisions: "<<iSort(a, n);
    cout<<"\nSorted Array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
