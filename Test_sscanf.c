#include <stdio.h>

int main(int argc, char *argv[]){
    char* buffer = "20 40 60";
    float n;

    int tot = sscanf(buffer, "%*f %*f %f" , &n);

    printf("Valore convertito in intero = %.2f - %d" ,n ,tot);
    return 0;
}
