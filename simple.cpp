#include<stdio.h>
#include<math.h>

void primeGeneration(int n)
{
    int i,j,k;
    printf("2 ");

    bool prime=false;
    for(i=3; i<=n; i+=2 ){

        prime=true;
        for(j=3; j<= sqrt(i); j+=2 ){
            if(i%j==0){
                prime= false;
                break;
                }
        }

        if(prime)
            printf("%d\n",i);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    primeGeneration(n);

    return 0;
}
