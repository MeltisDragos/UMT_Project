#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Dati numarul de elemente: ";
    cin >> n;
    int v[30];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Dati elementul " << i + 1 << ": ";
        cin >> v[i];
        sum += v[i];
    }
    int numar_de_vectori = pow(2, n);

    for (int i = 0; i < numar_de_vectori; i++)
    {
        int sum1 = 0, k = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) {
                sum1 += v[j];
                k++;
            }
        }
        if (sum1 != 0 && k != 0 && sum1 != sum) {
            float r1 = (float)sum1 / k, r2 = (float)sum / n;
            if (r1 == r2) {
                cout << "True";
                return 0;
            }
        }
    }

    cout << "False";
    return 0;
}

//In primele linii am adaugat elementele date intr-un vector si am facut suma elementelor

//Am realizat (si sper ca-i si corect) ca daca o medie dintr-un vector nou creat este egala cu media
//vectorului initial, atunci vectorul initial respecta enuntul problemei

//Mai apoi am creat fiecare vector posibil ,numar_de_vectori fiind numarul total de vectori ce pot fii 
//creati.Pe linia 30 am vrut sa exclud cazurile in care vectorul e null sau cand vectorul coincide cu
//vectorul initial.

//Mai apoi am comparat daca raporturile sunt egale, iar daca da afiseaza "True" si opreste programul in
//acel moment,in caz contrar afiseaza "False"
