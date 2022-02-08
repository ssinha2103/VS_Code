#include<iostream>
#include<cmath>

using namespace std;

bool check_prime(int a){
        int f=0;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a%i==0)
            {       
                return false;
            }
            
        }
        return true;
    }

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (check_prime(i))
        {
            cout<<i<<endl;
        }
        
    }

    
    
    return 0;
}