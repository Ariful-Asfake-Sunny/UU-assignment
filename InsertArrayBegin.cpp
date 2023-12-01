#include <iostream>
using namespace std;
int main()
{
    int a[30],n,i,item;
    cout << "How many data do you want to insert:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout << "NUMBER["<<i<<"]:";
        cin>>a[i];
    }
    cout << "Which data do you want to insert:";
    cin>>item;
    for(i=n; i>=1; i--)
    {
       a[i+1]=a[i];
    }
        a[1]=item;
        n=n+1;
    cout << "After insert, Data elements are:"<<endl;

    for(i=1; i<=n; i++)
    {
        cout << "NUMBER["<<i<<"]:"<<a[i]<<endl;

    }
    return 0;
}
