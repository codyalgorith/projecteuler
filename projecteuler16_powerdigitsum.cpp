//IN THIS PROBLEM WE HAVE TO FIND THE SUMS OF DIGITS IN POWER OF 2
//SO I HAVE USED AN ARRAY(ACTUALLY A VECTOR) AND STORED THE POWER OF 2 IN BOTTOM UP MANNER
//AND THEN STORED THE SUM FOR EVERY N(0<=N<=10000) IN A NEW ARRAY 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
long long sum[10010]={0};
void init()
{
    
   vector<char> s;
    s.push_back('1');
    
    for(int i=1;i<=10000;++i)
    {  int c=0;
       // cout<<"\t\t\t i is "<<i<<" )\n";
        for(int j=0;j<s.size();++j)
        {
            int x= 2*(s[j]-'0');
            s[j]=x%10 + c +'0' ;
            c=x/10;
        }
        while(c!=0)
        {
            s.push_back((c%10)+'0');
            c=c/10;
        }
   //  cout<<s<<"\n";
        long long v=0;
        for(int j=0;j<s.size();++j)
        {
            v+=(long long )(s[j]-'0');
        }
     
     sum[i]=v;
     
    }
    
    
    
    
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    init();
    
    int t;
    scanf("%d",&t);
    for(int g=0;g<t;++g)
    {
        int n;
        scanf("%d",&n);
        cout<<sum[n]<<"\n";
    }
    return 0;
}
