#include <stdio.h>
 
int main()
{
    long long int quantidade_sitios;
    scanf("%lld", &quantidade_sitios);
    
    long long int carneiros_por_sitio[quantidade_sitios];
    long long int carneiros_roubados = 0;
    long long int sitios_visitados = quantidade_sitios;
    long long int soma_carneiros = 0;
    
    for (int i = 0; i < quantidade_sitios; i++)
    {
        scanf("%lld", &carneiros_por_sitio[i]);
      
        soma_carneiros += carneiros_por_sitio[i];
      
        if (carneiros_por_sitio[i] % 2 == 0 && sitios_visitados == quantidade_sitios) sitios_visitados = i + 1;
    }
    
    int i = 0;
    while (i >= 0 && i < quantidade_sitios)
    {
        if (carneiros_por_sitio[i] > 0)
        {
            carneiros_por_sitio[i]--;
          
            carneiros_roubados++;
          
            if ((carneiros_por_sitio[i] + 1) % 2 == 0) i--;
              
            else i++;
          
        } 
          
        else i--;
    }

    printf("%lld %lld\n", sitios_visitados, soma_carneiros - carneiros_roubados);
    
    return 0;
}
