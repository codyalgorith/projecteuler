/*contains sum of fac of 1 to 1000
approach can be extended to numbers greater than 1000*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//char fac[1020][4000];
vector<vector<char> > fac;
void init()
{
 
    
    
    vector<char> v;
    v.push_back('6');
    //cout<<v[0]<<"\n";
    for(int i=4;i<=1000;++i)
    {   
       // cout<<"currently v is \n";
        //for(int j=0;j<v.size();++j)
        //{
       //     cout<<v[j];
        //}
        //cout<<"\n";
        int c=0;
    // cout<<"i is "<<i<<"\n";
        for(int j=0;j<v.size();++j)
        {
            int r= (v[j]-'0')*i + c;
            v[j]= (r%10) +'0';
            c= r/10;
            
        }
     
        while(c!=0)
        {
            v.push_back((c%10)+'0');
            c/=10;
        }
     
     fac.push_back(v);
     
    }
   
   
    
}
long long sum[1020]={0};
void calcsum()
{
    sum[0]=sum[1]=1;
    sum[2]=2;
    sum[3]=6;
    for(int i=4;i<=1000;++i)
    {  long long  s=0;
        for(int j=0;j<fac[i-4].size();++j)
        {
            s+=(fac[i-4][j]-'0');
        }
     sum[i]=s;
    }
}

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    init();
   calcsum();
    int t;
    scanf("%d",&t);
    for(int g=0;g<t;++g)
    {
        int n;
        scanf("%d",&n);
      
        //cout<<"\n";
        printf("%lld\n",sum[n]);
    }
    return 0;
}
