#include<bits/stdc++.h>
using namespace std;
 
int i,j,m,n,c[100][100];
char x[100],y[100],b[100][100];
 
void print(int i,int j)
{
                if(i==0 || j==0)
                                return;
                if(b[i][j]=='c')
                {
                                print(i-1,j-1);
                                cout<<x[i-1];
                }
                else if(b[i][j]=='u')
                                cout<<i-1<<j;
                else
                                cout<<i<<j-1;
}
 
void lcs()
{
                m=strlen(x);
                n=strlen(y);
                for(i=0;i<=m;i++)
                                c[i][0]=0;
                for(i=0;i<=n;i++)
                                c[0][i]=0;
                                
                for(i=1;i<=m;i++)
                                for(j=1;j<=n;j++)
                                {
                                                if(x[i-1]==y[j-1])
                                                {
                                                                c[i][j]=c[i-1][j-1]+1;
                                                                b[i][j]='c';
                                                }
                                                else if(c[i-1][j]>=c[i][j-1])
                                                {
                                                                c[i][j]=c[i-1][j];
                                                                b[i][j]='u';
                                                }
                                                else
                                                {
                                                                c[i][j]=c[i][j-1];
                                                                b[i][j]='l';
                                                }
                                }
}
 
int main()
{
                cout<<"Enter 1st sequence:";
                cin>>x;
                cout<<"Enter 2nd sequence:";
                cin>>y;
                cout<<"\nThe Longest Common Subsequence is ";
                lcs();
                print(m,n);
		return 0;
}