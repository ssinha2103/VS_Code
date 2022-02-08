#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    int n;
    int r = 0;
    cin>>n;
    while (n>0)
    {
        int m = n%10;
        n = (n-m)/10;
        r = (r*10)+m;
    }
    cout<<r;
    
    
    
    
    return 0;
}