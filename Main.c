#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define rep(i, n) for(int i=0; i<n; i++)
#define repi(i, a, b) for(int i=a; i<b; i++)
char c[100][100];


bool check(int a, int b) {
    rep(x,3) {
        rep(y,3) {
            if(c[a+x][b+y] == '.') return false;
            if(c[a+6+x][b+6+y] == '.') return false;
        }
    }
    rep(z,4) {
        if(c[a+z][b+3] == '#') return false;
        if(c[a+3][b+z] == '#') return false;
        if(c[a+5][b+5+z] =='#') return false;
        if(c[a+5+z][b+5] == '#') return false;
    }
    return true;
   
   /*
      012345678
    0 ###.00000
    1 ###.00000
    2 ###.00000
    3 ....00000
    4 000000000
    5 00000....
    6 00000.###
    7 00000.###
    8 00000.###
   */
}
int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);
   char c[n][m+1];
   rep(i,n) {
    scanf("%s", c[i]);
   }
   rep(i,n-8) {
    rep(j,m-9) {
        if(check(i,j) == true) {
            printf("%d %d\n",i+1,j+1);
        }
    }
   }
   
}
