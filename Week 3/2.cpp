//Given an unsorted array of integers, design an algorithm and implement a program to sort this 
//array using selection sort. Your program should also find number of comparisons and number of 
//swaps required.

#include <iostream>
using namespace std;

int sSort (int a[], int n){
    int i;
    int j;
    int sml;
    int pos;
    int comp=0;

    for(i=0;i<n;i++){
        pos=i;
        sml=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]<sml){
                sml=a[j];
                pos=j;
            }
            comp++;
        }
        if(pos!=i){
            a[pos]=a[i];
            a[i]=sml;
        }
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

    cout<<"Number of comparisions: "<<sSort(a, n);
    cout<<"\nSorted array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
