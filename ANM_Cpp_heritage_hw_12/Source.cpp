#include "Header.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Transport * tr[3] = { 
		new Car("Lada_Granta",2022,1.6,"Luxe"), 
		new Bus("ПАЗ_3205", 2020, 4.67, 24),
		new Truck("ГАЗ_Соболь", 2016, 2.8, 3.5) };
	cout << "\n\n\n\n\n" << endl;
	for (int i = 0; i < 3; i++)
	{
		
		tr[i]->show_h();
		cout << "-----------------------------------------" << endl;
		tr[i]->Print();
		Sleep(1000);
		cout << "\n\n" << endl;
		//system("cls");
	}
	_getch();
	cout << "\t\t\tThe end!" << endl;
}