// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <iostream>

using namespace std;

int main()
{
	int current; //текущее число
	int previous; // предыдущее число
	int countmax = 0; //счетчик локал макс
	int minlength = 0; // Мин растояние между локал макс
	int counter = 0; // счетчик
	cin >> current; // ждем ввода 1-го числа
	while (current != 0) {  // цикл пока введенное текущее число не 0
		previous = current; // текущее присваиваем предыдущиму
		cin >> current; // ждем ввода следующего текущего числа
						//counter++; // увеличиваем счетчик
		if (current > previous) {  // если текущее больше предыдущего
			previous = current; // текущее присваиваем предыдущиму
			cin >> current; // ждем ввода следующего текущего числа
			counter++; // увеличиваем счетчик
			if (current < previous && current != 0) {  // если текущее меньше предыдущего и не 0
				countmax++; // увеличиваем счетчик лок макс
				if (countmax == 2) { // если число локал мах = 2
					minlength = counter; // мин растоянию присваиваем счетчик
					counter = 1; // обнуляем счетчик
				} 
				if (countmax > 2) { // если число локал мах > 2
						if (minlength > counter) { // если мин раст > счетчика
							minlength = counter; // мин растоянию присваиваем счетчик
							counter = 1; // обнуляем счетчик
						}
						else {
							counter = 1; // обнуляем счетчик
						}
				}
			}
			else {
				if (current == 0) {
					break;
				}
			}
		}
		else {
			if (current == 0) {
				break;
			}
			else {
				counter++;
			}
		}

	}

	cout << "Min: ";
	cout << minlength << endl;
	//cout << countmax << endl;
	//cout << counter;
	//system("pause");
	return 0;
}

