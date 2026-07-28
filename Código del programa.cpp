#include <iostream>
using namespace std;

const int MAX = 100;

void llenarDatos(string nombres[], float notas[], int n);
void mostrarDatos(string nombres[], float notas[], int n);
void estadisticas(string nombres[], float notas[], int n);

int main()
{
    int n;

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    string nombres[MAX];
    float notas[MAX];

    llenarDatos(nombres, notas, n);

    cout << "\n      Lista de estudiante     \n";
    cout << "\n";
    mostrarDatos(nombres, notas, n);

    estadisticas(nombres, notas, n);

    return 0;
}

void llenarDatos(string nombres[], float notas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];

        do
        {
            cout << "Calificacion: ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 100);
    }
}

void mostrarDatos(string nombres[], float notas[], int n)
{
    for (int i = 0; i < n; i++)
        cout << nombres[i] << " -> " << notas[i] << endl;
}

void estadisticas(string nombres[], float notas[], int n)
{
    int max = 0, min = 0;
    int aprobados = 0, reprobados = 0;
    float suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += notas[i];

        if (notas[i] > notas[max])
            max = i;

        if (notas[i] < notas[min])
            min = i;

        if (notas[i] >= 70)
            aprobados++;
        else
            reprobados++;
    }
    cout << "\n      Nota mas alta/baja     \n";
    cout << "\nNota mas alta: " << nombres[max]
        << " (" << notas[max] << ")" << endl;

    cout << "Nota mas baja: " << nombres[min]
        << " (" << notas[min] << ")" << endl;
    cout << "\n";
    cout << "Promedio: " << suma / n << endl;

    cout << "\n      Estado de los estudiantes:   \n";
    cout << "\n";
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;
}
