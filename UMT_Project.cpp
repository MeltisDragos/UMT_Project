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