#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
            }
            for(i=0;i<n;i++)
            {
                c=0;
                for(j=0;j<n;j++)
                {
if(i!=j){
                    if(arr[i]==arr[j]){
                        c=1;
                    }}
                }
                if(c!=1){
                    printf("%d",arr[i]);

                }
            }
            return 0;
}
