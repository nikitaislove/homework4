задание 1
#include <iostream>
#include <cstdlib>
using namespace std;


void printArray(const int size, const double* arr)

{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";

}

int main() {
    const int size = 10;

    {
        double arr[size];
        for (double& i : arr) i = rand() % 100;
        printArray(size, arr);
    }

    return 0;
}



задание 2
#include <iostream>
#include <cstdlib>
using namespace std;
void invertArray(const int size, int* arr)
{
    cout << "before: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
        arr[i] = !arr[i];
    }
    cout << endl;
    cout << "after:  ";
    for (int k = 0; k < size; ++k)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
    for (int& i : arr) i = rand() % 2;
    invertArray(size, arr);
}

задание 3
#include <iostream>
#include <cstdlib>
using namespace std;


void initArray(const int size, int* arr)
{
    arr[size];

    for (int i = 0, k = 1; i < size; k += 3, ++i)
    {
        arr[i] = k;
        cout << k << " ";
    }
}
int main()

{
    const int size = 8;
    int arr[size];
    initArray(size, arr);
}



