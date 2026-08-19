#include <stdio.h>

int main(){
    int n,ri;
    
    while(scanf("%d",&n) && n != 0){
        int mary = 0;
        int john = 0;
    
        for(int i=0;i < n;i++){
            scanf("%d",&ri);
            
            if(ri == 1){
                john = john+1;
            } else {
                mary = mary+1;
            }
        }
        printf("Mary won %d times and John won %d times\n",mary,john);
    }

    

    return 0;
}
