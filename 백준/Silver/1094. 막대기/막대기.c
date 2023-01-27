#include <stdio.h>
int main() 
{int L=64,X,cnt=0;
scanf("%d",&X);

for(;X>0;)
 {
    if(L>X)
    L/=2;
    else
      {   cnt++;
        X-=L;
       }
    
    
}

printf("%d",cnt);


}