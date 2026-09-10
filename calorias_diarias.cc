#include <iostream>

struct Calorias
{
    float calorias;
};
// Declaracion de funciones
void ConsultarCalorias(float calorias);
void AgregarCalorias(int &calorias, int cant);
void QuemarCal(int *calorias, int cal);

int main()
{
    return 0;
}
// Paso por valor
void ConsultarCalorias(float calorias)
{
    std::cout << "Calorias actuales: " << calorias << "CAL" << std::endl;
}
// Paso por referencia
void AgregarCalorias(int &calorias, int cant)
{
    calorias += cant;
}
void QuemarCal(int *calorias, int cal)
{
    *calorias -= cal;
}