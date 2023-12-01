#include <iostream>
using namespace std;
int main()
{
    int a[20],n,i;
    cout << "How many data do you want to insert:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Element["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"ODD numbers are:"<<endl;
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==1)
        {
            cout<<"Odd number:"<<a[i]<<" and position is:"<<i<<endl;
        }
    }
    cout<<"EVEN numbers are:"<<endl;
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"Even number:"<<a[i]<<" and position is:"<<i<<endl;
        }
    }
    return 0;
}

