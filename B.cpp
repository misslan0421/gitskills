#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000000007

typedef long long lx;

lx c[10];

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        memset(c, 0, sizeof(c));
        lx n;
        lx sum = 0;

        scanf("%lld", &n);

        while(n--)
        {
            int d;
            scanf("%d", &d);
            c[d]++;

            for(int i = d+1; i < 10; i++)
                sum = (sum + c[i])%MAX;
        }

        printf("%lld\n", sum);
    }
}
