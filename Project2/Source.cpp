#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int apple = 0, orange = 0, abrikos = 0, grusha = 0;
	int tomato = 0, onion = 0, cucumber = 0;
	int chesnok_tea = 0, petryshi_tea = 0;

	const int price_fruit = 100;
	const int price_veg = 80;
	const int price_tea = 120;
	const int XXX = 1000;

	int choose = 0;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Магазин \"Соки Александра\"\n\n\n";
		std::cout << "1 - Начать покупки\n";
		std::cout << "2 - Корзина и чек\n";
		std::cout << "3 - Выход\n";
		std::cout << "Ввод: ";
			std::cin >> choose;
		if (choose == 1)
		{
			system("cls");
			std::cout << "\n\n\n\t\tВыберете категорию товаров\n\n\n";
			std::cout << "1 - Фруктовые соки\n";
			std::cout << "2 - Овощные соки\n";
			std::cout << "3 - Чаи";
				std::cout << "0 - Выход в меню\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;

			if (choose == 1)
			{
				system("cls");
				std::cout << "--- Фруктовые соки ---\n";
				std::cout << "1 - Яблочный\n2 - Апельсиновый\n3 - Абрикосовый\n4 - Грушевый\n";
				std::cout << "Ввод: ";
					std::cin >> choose;

				int liters = 0;
				std::cout << "Количество (в литрах): ";
				std::cin >> liters;

				if (choose == 1) apple += liters;
				else if (choose == 2) orange += liters;
				else if (choose == 3) abrikos += liters;
				else if (choose == 4) grusha += liters;
			}
			else if (choose == 2) {
				system("cls");
				std::cout << "--- Овощные соки ---\n";
				std::cout << "1 - Томатный\n2 - Луковый\n3 - Огуречный\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				int liters = 0;
				std::cout << "Количество (в литрах): ";
				std::cin >> liters;

				if (choose == 1) tomato += liters;
				else if (choose == 2) onion += liters;
				else if (choose == 3) cucumber += liters;
			}
			else if (choose == 3) {
				system("cls");
				std::cout << "--- Чаи ---\n";
				std::cout << "1 - Чесночный\n2 - Петрушевый\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				int liters = 0;
				std::cout << "Количество (в литрах): ";
				std::cin >> liters;


				if (choose == 1) chesnok_tea += liters;
				else if (choose == 2) petryshi_tea += liters;
			}
		}
		else if (choose == 2) {
			system("cls");
			std::cout << "=== Ваш чек ===\n\n";

			int paid_onion = onion - (onion / 4);

			double sum = (apple + orange + abrikos + grusha) * price_fruit
				+ (tomato + cucumber) * price_veg
				+ paid_onion * price_veg
				+ chesnok_tea * price_tea;
		}
		double petryshi_cost = petryshi_tea * price_tea;
		if (petryshi_cost >= 3) {
			petryshi_cost *= 0.95;
			std::cout << "Скидка 5% на петрушевый чай применена!";

		}



	}









	return 0;
}



/*	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			system("cls");
			std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
			std::cout << "1 - Лёгкий (1 - 500)\n";
			std::cout << "2 - Сложный (1 - 5000)\n";
			std::cout << "0 - Выход в меню\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;
			if (choose == 1)
			{
				randomNumber = rand() % 500 + 1;
				hp = maxHp;

				while (true)
				{
					std::cout << "Кол-во жизней: " << hp << "\n";
					std::cout << "Введите число от 1 до 500: ";
					std::cin >> number;

					if (number == randomNumber)
					{
						std::cout << "Вы угадали! Поздравляем!\n";

						system("pause");
						break;
					}
					else if (number < 1 || number > 500)
					{
						std::cout << "Вы вышли за лимиты\n";
						Sleep(1000);
					}
					else
					{
						hp--;
						if (hp <= 0)
						{
							std::cout << "Вы проиграли!\n";
							std::cout << "Число компьютера было: " << randomNumber << "\n\n";
							system("pause");
							break;
						}

						std::cout << "\nНе верно\n";
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Взять подсказку за 1 жизнь?\n";
						std::cout << "1 - ДА\nЛюбое число - Нет\nВвод: ";
						std::cin >> choose;

						if (choose == 1)
						{

							if (rand() % 101 <= chance)
							{
								std::cout << "Халява\n";
								Sleep(1000);
							}
							else
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
							}

							if (number < randomNumber)
							{
								std::cout << "Ваше число меньше числа компьютера\n";
							}
							else
							{
								std::cout << "Ваше число больше числа компбютера\n";
							}
							Sleep(1500);
						}
						else
						{
							std::cout << "Отказ от подсказок\n";
							Sleep(500);
						}
					}
				}
			}
			else if (choose == 2)
			{
					randomNumber = rand() % 5000 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - ДА\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{

								if (rand() % 101 <= chance)
								{
									std::cout << "Халява\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компбютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказок\n";
								Sleep(500);
							}
						}
					}
			}
			else if (choose == 0)
			{
				break;
			}
			else
			{
				std::cout << "\nНекорректный ввод\n";
				Sleep(1500);
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для легкой сложности: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для сложной сложности: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимое значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							chance = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n";
					Sleep(1000);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}*/

	/*	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

		std::cout << "Решение полниго квадратного уравнения\n\n";
		std::cout << "ax^2 + bx + c = 0\n\n";
		std::cout << "Введите А: ";
		std::cin >> a;
		std::cout << "Введите B: ";
		std::cin >> b;
		std::cout << "Введите C: ";
		std::cin >> c;

		std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

		d = std::pow(b, 2) - 4 * a * c;

		std::cout << "\nДискриминант: " << d << "\n\n";

		if (d < 0)
		{
			std::cout << "Нет корней\n";
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << "Один корень: " << x1 << "\n\n";
		}
		else
		{
			x1 = (-b + std::sqrt(b)) / (2 * a);
			x2 = (-b - std::sqrt(b)) / (2 * a);
			std::cout << "Первый корень: " << x1 << "\n\n";
			std::cout << "Второй корень: " << x2 << "\n\n";
		}

		return 0;
	}*/