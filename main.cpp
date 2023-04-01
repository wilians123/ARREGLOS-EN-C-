#include <iostream>
#include "string"
using namespace std;

int main (){

    int  opcion;
    cout<<endl<<"1. Calcular la suma de los elementos de un array de enteros de 10 posiciones";
    cout<<endl<<"2. Encontrar el numero mayor en un array de enteros de 6 posiciones";
    cout<<endl<<"3. Invertir el orden de los elementos en un array de enteros de 8 posicione";
    cout<<endl<<"4. Mostrar la suma de todos los numeros de un array de enteros de 10 posiciones";
    cout<<endl<<"5. Mostrar el numero de veces que aparece cada fruta "<<endl;

    cout<<endl<<"Digite la opcion del programa que desea ejecutar:";
    cin>>opcion;

    switch (opcion) {
        case 1: {

            int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

            int suma = 0;


            for (int i = 0; i < 10; i++) {

                suma = suma + array[i];
            }

            cout << "La suma de las variables del array es: " << suma << endl;
        }

            break;

        case 2: {
            int array[6] = {10, 20, 30, 40, 50, 60};

            int mayor = array[0];

            for (int i = 1; i < 6; i++) {

                if (array[i] > mayor) {
                    mayor = array[i];
                }
            }
            cout << "El numero mayor del array es: " << mayor << endl;
        }
            break;

        case 3: {
            int array[8] = {10, 20, 30, 40, 50, 60, 70, 80};

            cout << "Array original: " << endl;
            for (int i = 0; i < 8; i++) {
                cout << array[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < 4; i++) {

                int temp = array[i];
                array[i] = array[7 - i];
                array[7 - i] = temp;
            }

            cout << "Array invertido: " << endl;
            for (int i = 0; i < 8; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
            break;

        case 4:
        {
            int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};


            int suma = 0;

            for (int i = 0; i < 10; i++) {
                suma += array[i];
            }

            cout << "La suma de todos los numeros del array es: " << suma << endl;
    }
            break;

        case 5: {
            string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

            string distintas[9];

            int conteo[9];
            int n = 0;

            for (int i = 0; i < 9; i++) {
                string fruta = frutas[i];
                int indice = -1;

                for (int j = 0; j < n; j++) {
                    if (fruta == distintas[j]) {
                        indice = j;
                        break;
                    }
                }
                if (indice == -1) {
                    distintas[n] = fruta;
                    conteo[n] = 1;
                    n++;
                } else {
                    conteo[indice]++;
                }
            }

            cout << "El numero de veces que aparece cada fruta es: " << endl;
            for (int i = 0; i < n; i++) {
                cout << distintas[i] << ": " << conteo[i] << endl;
            }
        }
            break;


        default: cout<<"Numero de opcion no identificada";
            break;
    }
    return 0;
}


