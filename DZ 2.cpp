#include <iostream>
using namespace std;

// Задание 1
/*int main()
{
    setlocale(0, "");
    int size, index, value;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size + 1];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << "Введите индекс для вставки (от 1 до " << size - 1 << "): ";
    cin >> index;
    if (index < 1 || index >= size)
    {
        cout << "Некорректный индекс!";
        delete[] arr;
        return 1;
    }
    cout << "Введите значение для вставки: ";
    cin >> value;
    for (int i = size; i > index; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    cout << "Новый массив: ";
    for (int i = 0; i <= size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
}*/

// Задание 2
/*int main()
{
    setlocale(0, "");
    int size, value;
    cout << "Введите размер массива: ";
    cin >> size;
    int* arr = new int[size + 1];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i + 1];
    }
    cout << "Введите значение для вставки в начало: ";
    cin >> value;
    arr[0] = value;
    cout << "Новый массив: ";
    for (int i = 0; i <= size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
}*/

// Задание 3
/*int main()
{
    setlocale(0, "");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    if (size <= 0) 
    {
        cout << "Размер массива должен быть больше 0!";
        return 1;
    }
    int* arr = new int[size];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }
    size--;
    cout << "Массив после удаления последнего элемента: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
}*/

// Задание 4
int main()
{
    setlocale(0, "");
    int size, index;
    cout << "Введите размер массива: ";
    cin >> size;
    if (size <= 1) 
    {
        cout << "Размер массива должен быть больше 1 для удаления элемента!";
        return 1;
    }
    int* arr = new int[size];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }
    cout << "Введите индекс для удаления (от 1 до " << size - 2 << "): ";
    cin >> index;
    if (index < 1 || index >= size - 1) 
    {
        cout << "Некорректный индекс для удаления!";
        delete[] arr;
        return 1;
    }
    for (int i = index; i < size - 1; ++i) 
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Массив после удаления элемента: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
}
