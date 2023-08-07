#include <iostream>

const int ARRAY_SIZE{ 5 };

template<typename T>

void Sort(T array[], const int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = i + 1; j < arraySize; j++)
		{
			if (array[i] < array[j])
			{
				T temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template<typename T>

void Print(T array[], const int arraySize)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << array[i] << std::endl;
	}
}

int main()
{
	int array1[ARRAY_SIZE]{ 9,8,10,7,11 };
	float array2[ARRAY_SIZE]{ 0.1f, 0.5f, 0.02f, 0.6f, 0.9f };
	Sort<int>(array1, ARRAY_SIZE);
	Sort<float>(array2, ARRAY_SIZE);
	Print<int>(array1, ARRAY_SIZE);
	Print<float>(array2, ARRAY_SIZE);

}