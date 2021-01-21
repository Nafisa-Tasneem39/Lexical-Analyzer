#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void Nafisa()
{
    int a[20],b,c,d,i,j,k,l;
    int ans_1,ans_2,ans_3,flag_1;
    double aa,bb,cc;
    char a_1[120],b_1[120],c_1[120],d_1[120];
    string keyword[20],store;


    k = 0;
    flag_1 = 0;
    gets(a_1);
    l = strlen(a_1);
    for(i=0; i<l; i++)
    {
        if(a_1[i]!=' ')
        {
            store += a_1[i];
            if(!flag_1)
                flag_1 = 1, j = i;
        }
        else if(a_1[i]==' ')
        {
            flag_1 = 0;
            if(store=="auto","break","case","char","long","continue","default",
							"do","double","else","extern","float","for","goto",
							"if","int","void","short","nafisa")
                k++, keyword[k] = store;
            else
                break;

            store.clear();
        }
    }
    cout<<"Keyword: ";
    for(i=1; i<=k; i++)
    {
        if(i!=k)
            cout<<keyword[i]<<", ";
        else
            cout<<keyword[i]<<nl;
    }
    b = c = k = 0;
    for(i=j; i<l; i++)
    {
        if(a_1[i]>='a' && a_1[i]<='z')
            c++, b_1[c] = a_1[i];
        else if(a_1[i]=='+' || a_1[i]=='-' || a_1[i]=='*' || a_1[i]=='/')
            k++, c_1[k] = a_1[i];
        else if(a_1[i]==';' || a_1[i]==',' || a_1[i]==':')
            b++, d_1[b] = a_1[i];
    }
    cout<<"Variable: ";
    for(i=1;i<=c;i++)
    {
        if(i!=c)
            cout<<b_1[i]<<", ";
        else
            cout<<b_1[i]<<nl;
    }
    cout<<"Operator: ";
    for(i=1;i<=k;i++)
    {
        if(i!=k)
            cout<<c_1[i]<<", ";
        else
            cout<<c_1[i]<<nl;
    }
    cout<<"Punctuation: ";
    for(i=1;i<=b;i++)
    {
        if(i!=b)
            cout<<d_1[i]<<", ";
        else
            cout<<d_1[i]<<nl;
    }
    j = ans_1 = k = 0;
    for(i=l-1;i>=0;i--)
    {
        if(a_1[i]>='0' && a_1[i]<='9')
        {
            aa = pow(10,j);
            b = aa;
            ans_1 += (a_1[i] - 48) * b;
            j++;
        }
        else
        {
            j = 0;
            if(ans_1)
                k++, a[k] = ans_1;
            ans_1 = 0;
        }
    }
    cout<<"Constant: ";
    for(i=1;i<=k;i++)
    {
        if(i!=k)
            cout<<a[i]<<",";
        else
            cout<<a[i]<<nl;
    }

    return;
}

int main()
{
    Nafisa();

    return 0;
}
