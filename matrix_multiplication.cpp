#include<iostream>
using namespace std;
int main()
{
int a[10][10],b[10][10],mul[10][10], r1,c1,r2,c2,i,j,k;
cout<<"Enter rows and columns of matrix 1:";
cin>>r1>>c1;
cout<<"Enter rows and columns of matrix 2:";
cin>>r2>>c2;
if(r2!=c1)
cout<<"Matrix cannot be multiplied";
else
{
cout<<"Enter elements of matrix 1";
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
cout<<"Enter element a"<< i+1<< j+1<<":";
cin>>a[i][j];
}
}
cout<<"Enter elements of matrix 2";
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
cout<<"Enter element b"<<i+1<<j+1<<":";
cin>>b[i][j];
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
mul[i][j]=0;
for(k=0;k<c1;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
cout<<"Output matrix is "<<endl;
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
cout<<" "<<mul[i][j];
}
}
if(j==c2-1)
cout<<endl;
}
}
