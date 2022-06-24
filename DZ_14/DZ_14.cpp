
#include <iostream>
#include <Windows.h>

using namespace std;

void task_1_1() {
    int M, N;
    cout << "Введите размер первого массива: "; cin >> M;
    cout << "Введите размер второго массива: "; cin >> N;
    int* A = new int[M];
    int* B = new int[N];

    for (int i = 0; i < M; i++) {
        A[i] = rand() % 9 + 1;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 9 + 1;
        cout << B[i] << " ";
    }
    cout << endl;
    // определение размера третьего массива
    int count = 0; 
    int count2 = 0;
    for (int i = 0; i < M; i++) {
        count2 = 0;
        for (int j = 0; j < N; j++) {
            if (A[i] != B[j])
                count2++;
        }
        if (count2 == N) {
            count++;
        }
    }

    int G = count; // размер нового массива
    int* C = new int[G];
    // заполнение массива
    for (int i = 0; i < M; i++) {
        count2 = 0;
        for (int j = 0; j < N; j++) {
            if (A[i] != B[j])
                count2++;
        }
        if (count2 == N) {
            C[i] = A[i];
            cout << C[i] << " ";
        }
    }
}
void task_1_2() {
    int M, N;
    cout << "Введите размер первого массива: "; cin >> M;
    cout << "Введите размер второго массива: "; cin >> N;
    int* A = new int[M];
    int* B = new int[N];

    for (int i = 0; i < M; i++) {
        A[i] = rand() % 9 + 1;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 9 + 1;
        cout << B[i] << " ";
    }
    cout << endl;
    // определение размера третьего массива
    int count = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j])
                count++;
        }
    }

    int G = count; // размер нового массива
    int* C = new int[G];
    //заполнение массива
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                C[i] = A[i];
                cout << C[i] << " ";
            }
        }
    }
}

//task_2_1
void DeletingElementOnIndex(int* arr, int index, int element, int size);
void InsertElementOnIndex(int* arr, int index, int element, int size);
void AddingElementInEndofArray(int* arr, int size, int element);
void DeletingDynamicArray(int* arr);
void PrintingDynamicArray(int* arr, int size);
void InitializingDynamicArray(int* arr, int size);
void DynamicArray(int* arr, int size);
//----

int * task_2_2(int* arr, int &size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 2; j*j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                arr[count] = arr[i];
                count++;
            }
        }
    }
    int* newarr = new int(count);
    for (int i = 0; i < count; i++) {
        newarr[i] = arr[i];
    }
    //Это лишь для проверки
    for (int i = 0; i < count; i++) {
        cout << newarr[i] << " ";
    }
    size = count;
    return newarr;
}


void task_2_3(int* arr, int size) {
    int size1 = 0, size2 = 0, size3 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) size1++;
        else if (arr[i] < 0) size2++;
        else if (arr[i] == 0) size3++;
    }
    //Создаём массивы
     int* arrPozitive = new int[size1];
     int* arrNegative = new int[size2];
     int* arrNull = new int[size3];

     int x = 0, y = 0, z = 0;
     //Заполняем массивы
     for (int i = 0; i < size; i++) {
         if (arr[i] > 0) {
             arrPozitive[x] = arr[i];
             x++;
         }
         else if (arr[i] < 0) {
             arrNegative[y] = arr[i];
             y++;
         }
         else if (arr[i] == 0){
             arrNull[z] = arr[i];
             z++;
     }
    }
    //Компилируем массивы, если таковые заполнены
     if (size1 > 0) {
         for (int i = 0; i < size1; i++) {
             cout << arrPozitive[i] << " ";
         }
     }
     cout << endl;
     if (size2 > 0) {
         for (int i = 0; i < size2; i++) {
             cout << arrNegative[i] << " ";
         }
     }
     cout << endl;
     if (size3 > 0) {
         for (int i = 0; i < size3; i++) {
             cout << arrNull[i] << " ";
         }
     }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //Задание 1. Даны два массива: А[M] и B[N] (M и N вводятся
    //с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
    //элементы массива A, которые не включаются в массив B,
    //без повторений.
    
    //task_1();

    //Задание 2. Даны два массива: А[M] и B[N] (M и N вводятся
    //с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
    //элементы массивов A и B, которые не являются общими
    //для них, без повторений.

   //task_2();


    //Задание 1. Написать следующие функции для работы
    //с динамическим массивом :
       //■ Функция распределения динамической памяти.
       //■ Функция инициализации динамического массива.
       //■ Функция печати динамического массива.
       //■ Функция удаления динамического массива.
       //■ Функция добавления элемента в конец массива.
       //■ Функция вставки элемента по указанному индексу.
       //■ Функция удаления элемента по указанному индексу.

      //Проверьте сами :)


    //Задание 2. Написать функцию, которая получает указатель на динамический массив и его размер. Функция
    //должна удалить из массива все простые числа и вернуть
    //указатель на новый динамический массив
   /* int size = 5;
    int arr[5] = {2,3,4,8,6};
    int* newarr = new int[size]; 
    int*Aarr = task_2_2(arr, size);
    */

    //Задание 3. Написать функцию, которая получает указатель
    //на статический массив и его размер.Функция распределяет положительные, отрицательные и нулевые элементы
    //в отдельные динамические массивы.
    int const size = 5;
    int arr[size] = { 2,3,-5,-7,0 };
    task_2_3(arr, size);

}

//task_2_1:

//Распределение динамической памяти массива
void DynamicArray(int* arr, int size) {
    arr = new int[size];
}
//Инициализация динамического массива
void InitializingDynamicArray(int *arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}
//Печать одномерного динамического массива
void PrintingDynamicArray(int* arr, int size) {
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Удаления динамического массива
void DeletingDynamicArray(int* arr) {
    delete[] arr;
}
//Добавление элемента в конец массива
void AddingElementInEndofArray(int* arr, int size, int element) {
    int* tempArr = new int[size + 1];
    for (int i = 0; i < size; i++){
        tempArr[i] = arr[i];
    }
    size++;
    tempArr[size-1] = element;
    delete[] arr;
    DynamicArray(arr, size);
    arr = tempArr;
    delete[] tempArr;
}
//Вставка элемента по указанному индексу
void InsertElementOnIndex(int* arr, int index, int element, int size) {
    int* tempArr = new int[size];
    for (int i = 0; i < size; i++){
        tempArr[i] = arr[i];
    }
    size++;
    delete[]arr;
    DynamicArray(arr, size);
    int temp;
    for (int i = 0, y = 0; i < size, y < size+1; i++,y++) {
        if (i == index - 1) {
            arr[y] = tempArr[i];
            temp = arr[y];
            arr[y] = element;
            y++;
            arr[y] = temp;
        }
        else arr[y] = tempArr[i];
    }
    delete[] tempArr;
}
//Удаление элемента по указанному индексу
void DeletingElementOnIndex(int* arr, int index, int element, int size) {
    int temp;
    int* tempArr = new int[size];
    for (int i = 0; i < size; i++) tempArr[i] = arr[i];
    delete[] arr;
    size--;
    DynamicArray(arr, size);
    for (int i = 0, y = 0; i < size, y < size; i++, y++) {
        if (i == index - 1) {
            i++;
            arr[y] = tempArr[i];
        }
        else arr[y] = tempArr[i];
    }
    delete[] tempArr;
}

//-------------------