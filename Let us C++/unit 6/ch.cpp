#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count=0,a[30];
    for(i=0;i<5;i++)
    {
        if(a[i]%4==0||a[i]%5==0||a[i]%3==0||a[i-1]%4==0||a[i-1]%5==0||a[i-1]%3==0||a[i+1]%4==0||a[i+1]%5==0||a[i]%3==0)
          count++;
    }
    cout<<count;
    return 0;
}
