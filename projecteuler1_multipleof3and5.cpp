/*in this problem we have to find the sum of multiples of 3 and 5 less than n
so I HAVE USED a little Arithmetic progression formulae plus inclusion exclusion
since when summing multiples of 3 and 5 ,we added multiplesof 15 twice thus overcounting
therfore I hve decreased the answer by sum of multiples of 15 less than n


*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int t;
    scanf("%d",&t);
    for(int g=0;g<t;++g)
    {
        long long n;
        scanf("%lld",&n);
        
       long long num_3=(n-1)/3;
        
        long long sum= ((num_3)*(3*num_3+3))/2;
        //cout<<"sum till 3 "<<sum<<"\n";
        long long num_5=(n-1)/5;
        
        sum+=((num_5)*(5*num_5+5))/2;
       // cout<<"sum till 5 "<<sum<<"\n";
        long long num_15=(n-1)/15;
        
        sum-=((num_15)*(15*num_15 +15))/2;
       // cout<<"sum till 15 "<<sum<<"\n";
        printf("%lld\n",sum);
        
    }
    return 0;
}
