/*Ricerca per bisezione*/

#include <stdio.h>

float abso(float);
float max(float, float);

int main(){
    float n = 25.0;
    float low = 0.0;
    float high = max(1,n);
    float e = 0.001;
    int g = 0;
    float ans = (high + low)/2;

    while (abso((ans*ans) - n) > e){
        g++;
        printf("low: %7.3f high: %7.3f ans: %7.3f\n",low,high,ans);
        if((ans*ans) > n){
            high = ans;
        }
        else
        {
            low = ans;
        }
        ans = (high + low)/2;
    }

    printf("Numero di congetture: %d\n",g);
    printf("%f e' il valore che si avvicina alla radice di %f\n",ans,n);
    return 0;
}

float max(float x, float y){
    if(x > y){
        return x;
    }
    else
    {
        return y;
    }
}

float abso(float x){
    if(x < 0.0){
        return (-1)*x;
    }
    else
    {
        return x;
    }
}
