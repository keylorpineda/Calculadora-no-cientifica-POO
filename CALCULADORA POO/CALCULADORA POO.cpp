#include <iostream>
using namespace std;
class Calculadora
{
private:
    float num1;
    float num2;
public:
    Calculadora()
    {
        num1 = 0;
        num2 = 0;
    }
    Calculadora(float _num1, float _num2)
    {
        num1 = _num1;
        num2 = _num2;
    }
    ~Calculadora()
    {
    }
    float getNum1() 
    {
        return num1;
    }
    float getNum2()
    {
        return num2;
    }
    float sumaNumeros()
    {
        return num1 + num2;
    }
    float restaNumeros()
    {
        return num1 - num2;
    }
    float multiNum()
    {
        return num1 * num2;
    }
    float diviNum()
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else 
        {
            return 0; 
         
        }
    }
};
int main() 
{
    float num1, num2;
    int opcion;
    cout << "Digite el primer numero: ";
    cin >> num1;
    cout << "Digite el segundo numero: ";
    cin >> num2;
    Calculadora calculadora(num1, num2);
    cout << "Los numeros seleccionados son: " << calculadora.getNum1() << " y " << calculadora.getNum2() << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cin >> opcion;
    switch (opcion) 
    {
    case 1:
        cout << "La suma de los numeros es: " << calculadora.sumaNumeros() << endl;
        break;
    case 2:
        cout << "La resta de los numeros es: " << calculadora.restaNumeros() << endl;
        break;
    case 3:
        cout << "La multiplicacion de los numeros es: " << calculadora.multiNum() << endl;
        break;
    case 4:
        cout << "La division de los numeros es: " << calculadora.diviNum() << endl; 
        break;
    case 5:
        break;
    default:
        cout << "" << endl;
        break;
    }
    return 0; 
}
