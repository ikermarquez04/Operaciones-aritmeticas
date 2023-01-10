
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout << "digite un numero: "; cin >> n1;
    cout << "digite un numero mas: "; cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout << "\La suma es: " << suma << endl;
    cout<< "La resta es: " << resta <<endl;
    cout<< "La multiplicación es: " << multiplicacion << endl;
    cout<< "La división es: " << division << endl;

    return 0;
}

