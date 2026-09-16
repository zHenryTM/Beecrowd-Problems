#include <stdio.h>

int pode_ser_atingido(int Xf, int Yf, int Xi, int Yi, int R) {
    // Equa��o da Circunfer�ncia: (x - Xf)� + (y - Yf)� = R�
    // (Xi - Xf)� + (Yi - Yf)� = R�
    // (Xi� - 2 * Xi * Xf + Xf�) + (Yi� - 2 * Yi * Yf + Yf�) = R�
    
    return (Xi * Xi - 2 * Xi * Xf + Xf * Xf) + (Yi * Yi - 2 * Yi * Yf + Yf * Yf) == R * R;
}

int main() {
    // Xfiddle, Yfiddle
    // Xinvasor, Yinvasor
    // velocidade_invasor
    // raio_ult, raio_corvos

    int Xf, Yf, Xi, Yi, Vi, Ru, Rc;
    int R;

    scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &Ru, &Rc);

    R = Ru + Rc;

    if (pode_ser_atingido(Xf, Yf, Xi, Yi, R))
        printf("Y\n");
    else
        printf("N\n");

}
