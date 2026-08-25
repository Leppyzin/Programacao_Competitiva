#include <stdio.h>

double forma(double a,double b,double c){
    if(a >= b+c || b >= a+c || c >= b+a){
        return 0;
    } else {
        return 1;
    }
}

double retangulo(double a,double b,double c){
    if(a*a == b*b+c*c || b*b == c*c+a*a || c*c == a*a+b*b){
        return 1;
    } else {
        return 0;
    }

}

double obtu(double a,double b,double c){
    if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b){
        return 1;
    } else {
        return 0;
    }
}

double acu(double a, double b, double c){
    if(a*a < b*b+c*c && b*b < a*a+c*c && c*c < a*a+b*b){
        return 1;
    } else {
        return 0;
    }
}

double equi(double a, double b, double c){
    if(a == b && b == c){
        return 1;
    } else {
        return 0;
    }
}

double iso(double a, double b, double c){
    if(a == b || b == c || a == c){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    double formatrian,a,b,c,retan,ob,acut,equit,isoc;
    
    scanf("%lf%lf%lf",&a,&b,&c);
    
    formatrian = forma(a,b,c);
    
    if(formatrian == 0){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    retan = retangulo(a,b,c);
    
    if(retan == 1){
        printf("TRIANGULO RETANGULO\n");
        return 0;
    }
    
    ob = obtu(a,b,c);
    equit = equi(a,b,c);
    isoc = iso(a,b,c);
    acut = acu(a,b,c);
    
    if(ob == 1){
        printf("TRIANGULO OBTUSANGULO\n");
        if(equit == 1){
            printf("TRIANGULO EQUILATERO\n");
        } else if(isoc == 1){
            printf("TRIANGULO ISOSCELES\n");
        }
    } else if(acut == 1){
        printf("TRIANGULO ACUTANGULO\n");
        if(equit == 1){
            printf("TRIANGULO EQUILATERO\n");
        } else if(isoc == 1){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
