#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    int n,i,a[100],j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        count=0;
       scanf("%s",str);
        for(j=0;j<strlen(str);j++)
        {
            if(str[j+1]==str[j])
            {
                count++;
            }
        }
        a[i]=count;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}
