#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

   




float ind_masa_corporal(int peso, int talla) {
    float imc;
    imc = (float)peso / ((talla/100.0) * (talla/100.0));
    printf("Indice de masa corporal: %.2f\n", imc);
    return imc;
}



int main() {
    setlocale(LC_ALL, "spanish");
    int peso, talla;
    
        // Pedir peso y talla al usuario
        printf("Introduce el peso en kg: ");
        scanf("%i", &peso);
        
        printf("Introduce la talla en cm: ");
        scanf("%i", &talla);



    printf("Peso : %d kg\n", peso);
    printf("Talla: %d cm\n", talla);

    
    ind_masa_corporal(peso, talla);


    system("pause");
    return 0;


}