#include<iostream>
#include<cmath>

using namespace std;

int selectionSort(int arr[]){
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
    cout<<selectionSort(arr);
    
    return 0;
}