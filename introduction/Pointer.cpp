#include <bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function   
    int i=*a,j=*b;
    i=*a + *b;
    j=*a - *b;
    j= abs(j);
     printf("%d\n%d", i, j); 
}

int main() {
    int a, b;
    
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
   

    return 0;
}
