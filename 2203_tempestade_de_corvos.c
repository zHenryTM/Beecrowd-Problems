#include <stdio.h>
#include <math.h>

int pode_ser_atingido(double Xf, double Yf, double Xi, double Yi, double R) {    
    return (Xi - Xf) * (Xi - Xf) + (Yi - Yf) * (Yi - Yf) <= R * R;
}

void atualizar_coord_inimigo(double *Xi, double *Yi, double Xf, double Yf, double Vi) {
    double Wx = *Xi - Xf;
    double Wy = *Yi - Yf;

    double modulo_w = sqrt(Wx * Wx + Wy * Wy);

    if (modulo_w > 0) {
        *Xi = *Xi + (1.5 * Wx * Vi / modulo_w);
        *Yi = *Yi + (1.5 * Wy * Vi / modulo_w);
    } else {
        // Já que o inimigo está no mesmo ponto que o jogador, posso escolher arbitrariamente a direção do movimento do inimigo,
        // então, para facilitar os cálculos, escolhi a direção horizontal para alterar, apenas, o eixo x.
        
        *Xi = *Xi + 1.5 * Vi;
    }
}

int main() {
    // Embora o enunciado diga que as entradas sejam inteiras, as leia como double, pois precisão nesse exercício é muito importante
    double Xf, Yf, Xi, Yi, Vi, Ru, Rc;
    double R;
    
    while (scanf("%lf %lf %lf %lf %lf %lf %lf", &Xf, &Yf, &Xi, &Yi, &Vi, &Ru, &Rc) != EOF) {
        R = Ru + Rc;
    
        if (Vi > 0)
            atualizar_coord_inimigo(&Xi, &Yi, Xf, Yf, Vi);
    
        if ( pode_ser_atingido(Xf, Yf, Xi, Yi, R) )
            printf("Y\n");
        else
            printf("N\n");
    }
}
