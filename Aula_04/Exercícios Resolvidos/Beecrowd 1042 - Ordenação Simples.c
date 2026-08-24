#include <stdio.h>

int sort(int a, int b, int c){
    if(a > b && a > c){
        return a;
    } else if(b > a && b > c){
        return b;
    } else if(c > a && c > b){
        return c;
    }

}

int main(){
    int a,b,c,maior;
    
    scanf("%d%d%d",&a,&b,&c);
    
    maior = sort(a,b,c);
    
    if(maior == a){
        if(b > c){
            printf("%d\n%d\n%d\n",c,b,maior);
        } else if(c > b){
            printf("%d\n%d\n%d\n",b,c,maior);
        }
    } else if(maior == b){
        if(a > c){
            printf("%d\n%d\n%d\n",c,a,maior);
        } else {
            printf("%d\n%d\n%d\n",a,c,maior);
        }
    
    } else if(maior == c){
        if(a > b){
            printf("%d\n%d\n%d\n",b,a,maior);
        } else {
            printf("%d\n%d\n%d\n",a,b,maior);
        }
    
    }
    
    printf("\n%d\n%d\n%d\n",a,b,c);


    return 0;
}
