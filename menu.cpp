#include <iostream>
#include <iomanip>
#include  <Windows.h>
#include "circle.h"


using namespace std;

int prompt_menu_item()
{
	int item;
	cout <<"выберите вариант: " << endl;
	cout << "0. выход " << endl
		<< "1. создание окружности" << endl
		<< "2. перемещение окружности на плоскости" << endl
		<< "3. маштабирование окружности" << endl
		<< "4. вычисление площади поверхности, ограниченной окружностью" << endl
		<< "5. удаление окружности" << endl;
	cout << ">>> ";
	cin >> item;
	
	return item;
}

int main(int argc, char* argv[])
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Circle* circle = NULL;



	for (;;)
	{
		int item = prompt_menu_item(); 

		if (item == 0)
		{
			return 0;
		}
		else if (item == 1)
		{
			if (circle == NULL)
			{
				double x, y, r;
				cout << "Введите координаты центра окружности (x y через пробел): ";
				cin >> x >> y;
				cout << "Введите радиус окружности: ";
				cin >> r;

				if (r >= 0)
				{
					circle = new Circle(x, y, r);

					cout << endl << "Успешно создана окружность радиусом " << circle->getRadius() << " и координатами центра (" << circle->getCenterX() << ", " << circle->getCenterY() << ")" << endl;
				}
				else
				{
					cout << "Радиус должен быть неотрицательным!" << endl;
				}
			}
			else
			{
				cout << "Сначала удалите существующую окружность" << endl;
			}
		}
		else if (item == 2)
		{
			if (circle == NULL)
			{
				cout << "Окружность ещё не создана" << endl;
			}
			else
			{
				double dx, dy;
				cout << "Введите координаты вектора смещения (x y через пробел): ";
				cin	 >> dx >> dy;

				circle->move(dx, dy);

				cout << endl << "Перемещенная окружность имеет радиус " << circle->getRadius() << " и координаты центра (" << circle->getCenterX() << ", " << circle->getCenterY() << ")" << endl;
			}
		}
		else if (item == 3)
		{
			if (circle == NULL)
			{
				cout << "Окружность ещё не создана" << endl;
			}
			else
			{
				double k;
				cout << "Введите коэффициент масштабирования: ";
				cin	 >> k;

				circle->scale(k);

				cout << endl << "Масштабированная окружность имеет радиус " << circle->getRadius() << " и координаты центра (" << circle->getCenterX() << ", " << circle->getCenterY() << ")" << endl;
			}
		}
		else if (item == 4)
		{
			if (circle == NULL)
			{
				cout << "Окружность ещё не создана" << endl;
			}
			else
			{
				cout << "Площадь поверхности, ограниченной окружностью равна " << setprecision(14) << circle->calculateArea() << endl;
			}
		}
		else if (item == 5)
		{
			if (circle == NULL)
			{
				cout << "Окружность ещё не создана" << endl;
			}
			else
			{
				delete(circle);
				circle = NULL;

				cout << "Окружность успешно удалена" << endl;
			}
		}
		else
		{
			cout << "Вы выбрали неверный вариант. Попробуйте ещё раз." << endl;
		}

		cout << endl;
	}

return 0;
}
