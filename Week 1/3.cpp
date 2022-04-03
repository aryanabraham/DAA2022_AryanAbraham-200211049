#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,n,m,key,flag=-1;

    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    m=sqrt(n);
    cout<<"Enter key to be found: ";
    cin>>key;   

    for(i=0; i<n; i+=m)
    {
        if(arr[i]==key)
        {
            flag=i;
            break;
        }
        else if(arr[i]>key)
        {
            for(j=(i/m)+1; j<i;j++)
            {
                if(arr[j]==key)
                    flag=j;
                    break;
            }
        }
    }

    if(flag==-1)
        cout<<"Key not found";
    else
        cout<<"Key found at %d index"<<flag;

    return 0;
}
