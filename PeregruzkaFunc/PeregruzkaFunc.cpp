#include <iostream>
#include <algorithm>
void Sort(int* mas, int size)
{
    for (int i = 0; i < size; i++)
    {
		for (int j = 0; j < (size-i-1); j++)
		{
			if (mas[j] > mas[j + 1])
			{
				std::swap(mas[j], mas[j + 1]);
			}
		}
    }
}
void Sort(double* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - i - 1); j++)
		{
			if (mas[j] > mas[j + 1])
			{
				std::swap(mas[j], mas[j + 1]);
			}
		}
	}
}
void Memory(double** ptr, int size) {
	*ptr = new double[size];
}
void Memory(int** ptr, int size) {
	*ptr = new int[size];
}
void Print(int* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
}
void Print(double* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
}
void Zapolnenie(int* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		ykaz[i] = rand() % 10;
	}
}
void Zapolnenie(double* ykaz, int size)
{
	for (int i = 0; i < size; i++) {
		ykaz[i] = (double)(rand()) / RAND_MAX * 10; //Константа RAND_MAX является максимальным значением, которое может возвращаться функцией
	}
}
void DeleteMemory(double* ykaz, int size)
{
	delete[] ykaz;
}
void DeleteMemory(int* ykaz, int size)
{
	delete[] ykaz;
}

int main()
{
	setlocale(LC_ALL, "rus");
	bool flag = true;
	int size;
	std::cout << "Выберите размер массива: ";
	std::cin >> size;
	int* mas = nullptr;
	Memory(&mas, size);
	Zapolnenie(mas, size);
	Print(mas, size);
	Sort(mas, size);
	Print(mas, size);
	DeleteMemory(mas, size);

	double* masd = nullptr;
	Memory(&masd, size);
	Zapolnenie(masd, size);
	Print(masd, size);
	Sort(masd, size);
	Print(masd, size);
	DeleteMemory(masd, size);
}
