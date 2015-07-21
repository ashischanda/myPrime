#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define N 10000

bool prime[N]= {false};
int store[N];

void sieve()
{
    int i,j,k;
    int sqr= sqrt(N);                    // We have to check primes up to (sqrt(N))
                                    	// **********************  prime
    for(i=3; i<= sqr; i+=2 ){
        if( !prime[i]){
            for(j= i*i; j<N; j+= i*2)
                prime[j]=true;
        }
    }	// **********end of prime

    store[1]=2;
    k=2;
    for(i=3; i<N ; i+=2)
        if( !prime[i])    store[k++]=i;
}

int main()
{
    int n;
    sieve();
    while(scanf("%d",&n) !=EOF )
        printf("prime[%d] = %d\n",n,store[n]);		// n th num of prime

return 0;
}
