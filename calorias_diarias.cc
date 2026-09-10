#include <iostream>

struct Calorias
{
    float calorias;
};
// Declaracion de funciones
void ConsultarCalorias(float calorias);
void AgregarCalorias(float &calorias, float cant);
void QuemarCal(float *calorias, float cant);

int main()
{
    Calorias calo;
    calo.calorias = 2000;
    ConsultarCalorias(calo.calorias);

    AgregarCalorias(calo.calorias, 300);
    std::cout << "Calorias despues de comer: " << std::endl;
    ConsultarCalorias(calo.calorias);

    QuemarCal(&calo.calorias, 600);
    std::cout << "Calorias luego de ejercitarse: " << std::endl;
    ConsultarCalorias(calo.calorias);

    return 0;
}
// Paso por valor
void ConsultarCalorias(float calorias)
{
    std::cout << "Calorias actuales: " << calorias << "CAL" << std::endl;
}
// Paso por referencia
void AgregarCalorias(float &calorias, float cant)
{
    calorias += cant;
}
void QuemarCal(float *calorias, float cant)
{
    if (cant > *calorias)
    {
        std::cout << "Error: No puedes quemar mas calorias de las que tienes. Quedan en 0." << std::endl;
        *calorias = 0;
    }
    else
    {
        std::cout << "Operacion exitosa" << std::endl;
        *calorias -= cant;
    }
}