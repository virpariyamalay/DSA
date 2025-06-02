#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << i ;
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout << endl;
    }
}
void print7(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
         cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
    cout<<endl;
    }
}

void print8(int n)
{   
     for(int i=5;i>0;i--)
    {
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
    cout<<endl;
    }
}

void print9(int n)
{
  
    
    //combination of 7&8
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
         cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
    cout<<endl;
    }
    
   for(int i=5;i>0;i--)
    {
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n-i);j++)
        {
        cout<<" ";
        }
    cout<<endl;
    }
}

void print10(int n)
{
    int stars;
    for(int i=1;i<=(2*n)-1;i++)
    {
        if(i<=n)
        {
             stars=i;
        }
        else
        {
             stars=2*n-i;
        }
        
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


void print11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << ((i+j)+1)%2<<" " ;
        }
        cout << endl;
    }
}
void print12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=(2*n)-(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


void print13(int n){
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}
void print15(int n)
{
  for(int i=n;i>0;i--)
  {
      for(char ch='A';ch<'A'+i;ch++)
      {
          cout<<ch<<" ";
      }
      cout<<endl;
  }
}
void print16(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1 ;j<=i;j++)
        {
            char ch='A'+i-1;
            cout<< ch<<" ";
        }
        cout<<endl;
    }
}

void print21(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=1;j<=n-2;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cin >> n;
    
    print10(n);
    
}