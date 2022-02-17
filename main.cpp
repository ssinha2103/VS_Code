#include<iostream>
#include<cmath>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int s =0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid]==key)   
        {
            return mid;
        }else if (arr[mid]<key)
        {
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)+1;
    
    return 0;
}