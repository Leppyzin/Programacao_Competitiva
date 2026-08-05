#include <stdio.h>

int main(){
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
   
    if(a+b > c && c+b > a && c+a > b){
        if(a == b && b == c){
            printf("Valido-Equilatero\n");
        } else if (a != b && b != c && c != a){
            printf("Valido-Escaleno\n");
        } else if ((a == b && a != c) || (b == c && b !=a) || (c == a && c != b)){
            printf("Valido-Isoceles\n");
        }
       
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }
       
    } else {
        printf("Invalido\n");
    }

    return 0;
}
