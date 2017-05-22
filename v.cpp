#include <iostream>
#include "circle.h"

using namespace std;

int prompt_menu_item()
{
int item;
cout <<"выберите вариант: " << endl;
cout << "0. выход " << endl

	<< "1. сработало" << endl;
cout << ">>> ";
cin >> item;
return item;
}

int main(int argc, char* argv[])
{
	for (;;)
	{
		int item = prompt_menu_item(); 

		if (item == 0)
		{
			return 0;
		}
		else if (item == 1)
		{
			

			cout  << endl;
		}

		else
		{
		cerr << "Вы выбрали неверный вариант" << endl;
		exit(EXIT_FAILURE);
		}

		cout << endl;
	}

return 0;
}

