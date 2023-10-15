#pragma once

#include "Hero.h"
#include "Monster.h"
#include "Keeper.h"
#include "Villain.h"
#include "Characters.h"
int action;
int actionAdd;
int val = 0;
int actionAttribute;

void MenuMain() {

	std::cout << "Select command\n";
	std::cout << "1 - Add Element\n";
	std::cout << "2 - Delete Element\n";
	std::cout << "3 - Change Element\n";
	std::cout << "4 - Display\n";
	std::cout << "5 - Save to file\n";
	std::cout << "6 - Extract from file\n";
	std::cout << "0 - Exit\n";
	std::cout << "Your choice: ";
	while (!(std::cin >> action)) {
		std::cout << "Trouble maaaann. Select comand again.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		if (std::cin >> action)
			break;
	}
}

void MenuAddPrint(){
	std::cout << "Select type of Element\n";
	std::cout << "1 - Hero\n";
	std::cout << "2 - Villain\n";
	std::cout << "3 - Monster\n";
	std::cout << "0 - Exit\n";
	std::cout << "Your choice: ";
	while (!(std::cin >> actionAdd)) {
		std::cout << "Trouble maaaann. Select comand again.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		if (std::cin >> actionAdd)
			break;
	}
}

void MenuAdd(Keeper* keep) {
	actionAdd = 1;
	Hero* hero;
	Villain* villain;
	Monster* monster;

	while (actionAdd != 0) {
		MenuAddPrint();
		switch (actionAdd) {
		case 0:
			break;
		case 1:
			system("cls");

			hero = new Hero;
			hero->setData();
			keep->addElement(hero);
		
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");

			villain = new Villain;
			villain->setData();
			keep->addElement(villain);

			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");

			monster = new Monster;
			monster->setData();
			keep->addElement(monster);

			system("pause");
			system("cls");
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			break;
		}
	}
}

void MenuEdit() {

}
/*
void MenuInClass() {
	std::cout << "Выберите действие\n";
	std::cout << "1 - Добавление элемента\n";
	std::cout << "2 - Удаление элемента\n";
	std::cout << "3 - Редактирование элемента\n";
	std::cout << "4 - Вывести все элементы одной категории\n";
	std::cout << "0 - Выход\n";
	std::cout << "Ваше действие: \n";
	std::cin >> actionF;
}

void MenuAttributesF() {
	std::cout << "Выберите что хотите изменить\n";
	std::cout << "1 - Тип мебели\n";
	std::cout << "2 - Размеры\n";
	std::cout << "3 - Цвет\n";
	std::cout << "4 - Материал\n";
	std::cout << "5 - Стоимость\n";
	std::cout << "0 - Выход\n";
	std::cout << "Ваш выбор: \n";
	std::cin >> actionAttribute;
}

void MenuAttributesW() {
	std::cout << "Выберите что хотите изменить\n";
	std::cout << "1 - ФИО\n";
	std::cout << "2 - Должность\n";
	std::cout << "3 - Зар. плата\n";
	std::cout << "4 - Адрес\n";
	std::cout << "5 - Номер телефона\n";
	std::cout << "0 - Выход\n";
	std::cout << "Ваш выбор: \n";
	std::cin >> actionAttribute;
}

void MenuAttributesC() {
	std::cout << "Выберите что хотите изменить\n";
	std::cout << "1 - Марка\n";
	std::cout << "2 - Модель\n";
	std::cout << "3 - Гос. номер\n";
	std::cout << "0 - Выход\n";
	std::cout << "Ваш выбор: \n";
	std::cin >> actionAttribute;
}

void MenuFurniture(Keeper<Furniture>& f) {

	setlocale(LC_ALL, "Russian");

	Furniture* fu;
	actionF = 0;
	MenuInClass();

	while (actionF != 0) {

		switch (actionF) {
		case 1:
			system("cls");

			fu = new Furniture;
			fu->setData();
			f.addElement(*fu);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 2:
			system("cls");

			try {
				if (f.getCount() == 0) throw std::exception("В Keeper нет элементов");

				val = 0;
				std::cout << "Введите номер элемента для извлечения из очереди: ";
				std::cin >> val;
				if (val <= 0) throw std::exception("Номер элемента не может быть отрицательным или равным нулю");
				if (f.getCount() < val)  throw std::exception("Такого элемента не существует");
				std::cout << f[val];
				f.extractElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}
			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 3:
			system("cls");
			actionAttribute = 0;
			MenuAttributesF();
			//std::cout<<(f[1].getCost());
			f.changeElementF(f, actionAttribute);

			//f.sortirovka(f);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 4:
			system("cls");

			f.display(f);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			MenuInClass();
			break;
		}
	}
}

void MenuWorker(Keeper<Worker>& w) {

	setlocale(LC_ALL, "Russian");

	Worker* wo;
	actionF = 0;
	MenuInClass();

	while (actionF != 0) {

		switch (actionF) {
		case 1:
			system("cls");

			wo = new Worker;
			wo->setData();
			w.addElement(*wo);


			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 2:
			system("cls");
			try {
				if (w.getCount() == 0) throw std::exception("В Keeper нет элементов");
				val = 0;
				std::cout << "Введите номер элемента для извлечения из очереди: ";
				std::cin >> val;
				if (val <= 0) throw std::exception("Номер элемента не может быть отрицательным или равным нулю");
				if (w.getCount() < val)  throw std::exception("Такого элемента не существует");
				std::cout << w[val];
				w.extractElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}
			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 3:
			system("cls");

			actionAttribute = 0;
			MenuAttributesW();
			try {
				w.changeElementW(w, actionAttribute);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}
			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 4:
			system("cls");

			w.display(w);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			MenuInClass();
			break;
		}
	}
}

void MenuCar(Keeper<Car>& c) {

	setlocale(LC_ALL, "Russian");

	Car* ca;
	actionF = 0;
	MenuInClass();

	while (actionF != 0) {

		switch (actionF) {
		case 1:
			system("cls");

			ca = new Car;
			ca->setData();
			c.addElement(*ca);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 2:
			system("cls");
			try {
				if (c.getCount() == 0) throw std::exception("В Keeper нет элементов");
				val = 0;
				std::cout << "Введите номер элемента для извлечения из очереди: ";
				std::cin >> val;
				if (val <= 0) throw std::exception("Номер элемента не может быть отрицательным или равным нулю");
				if (c.getCount() < val)  throw std::exception("Такого элемента не существует");
				std::cout << c[val];
				c.extractElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}

			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 3:
			system("cls");

			actionAttribute = 0;
			MenuAttributesC();
			c.changeElementC(c, actionAttribute);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		case 4:
			system("cls");

			c.display(c);

			system("pause");
			system("cls");
			MenuInClass();
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			MenuInClass();
			break;
		}
	}
}*/

void Menu() {
	Keeper* keep = new Keeper;
;
	
	action = 1;
	

	while (action != 0) {
		MenuMain();
		switch (action) {
		case 0:
			break;
		case 1:
			system("cls");

			MenuAdd(keep);

			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			try {
				if (keep->getCount() == 0) throw std::exception("Keeper is empty\n");
				val = 0;
				std::cout << "Index of Elemnt to delete: ";
				while (!(std::cin >> val)) {
					std::cout << "Trouble maaaann. Index of Elemnt to delete: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
					if (std::cin >> val)
						break;
				}
				if (val <= 0) throw std::exception("Index cannot <0 or =0\n");
				if (keep->getCount() < val)  throw std::exception("This Element doesn't exist\n");
				(*(keep))[val].display();
				keep->deleteElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}

			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");

			try {
				if (keep->getCount() == 0) throw std::exception("Keeper is empty\n");
				val = 0;
				std::cout << "Index of Elemnt to edit: ";
				while (!(std::cin >> val)) {
					std::cout << "Trouble maaaann. Index of Elemnt to edit: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
					if (std::cin >> val)
						break;
				}
				if (val <= 0) throw std::exception("Index cannot <0 or =0\n");
				if (keep->getCount() < val)  throw std::exception("This Element doesn't exist\n");
				(*(keep))[val].display();
				keep->changeElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}

			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");

			keep->displayKeep();

			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");

			//fur.fileDisplay(fur);
			//wor.fileDisplayT(wor);
			//car.fileDisplayT(car);

			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");

			//fur.fileSetData(fur, wor, car);

			system("pause");
			system("cls");
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			break;
		}
	}
	delete keep;
}