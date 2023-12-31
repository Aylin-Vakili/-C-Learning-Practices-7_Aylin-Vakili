#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    int n;
    int m;
    scanf("%d , %d", &n , &m );
    int L[n][m] ;

    int i,j;
    for( i=0 ; i < n ; i++ ){
        for( j=0 ; j < n ; j++ ){
            scanf("%d", &L[i][j]);

        for( i=0 ; i < m ; i++ ){
            temp=L[0][i];
            L[0][i]=L[n-1][i];
            L[n-1][i]=temp;
        }}
    }
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 2
