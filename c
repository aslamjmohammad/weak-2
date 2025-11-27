||||       DAY  =  1       |||||

\*  Pattern = 1   *\
#include <stdio.h>
int main() {
    int i,j;
    for(i=1;i<=6;i++){
        for(j=0;j<=6;j++){
            if(j<=i){
                printf("%d ",j*i);
            }
        }printf("\n");
    }
    return 0;
}
0 1 
0 2 4 
0 3 6 9 
0 4 8 12 16 
0 5 10 15 20 25 
0 6 12 18 24 30 36 
  
\*  Pattern = 2   *\
#include <stdio.h>
int main() {
    int limit=5,i,j,k;
    int n=(limit*2);
    for(i=1;i<=limit;i++){
        for(j=1;j<=n-j;j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }for(k=1;k<=limit;k++){
            if(k>=(limit-i)+1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*                          *
*  *                    *  *
*  *  *              *  *  *
*  *  *  *        *  *  *  *
*  *  *  *  *  *  *  *  *  *
