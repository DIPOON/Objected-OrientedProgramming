#include <iostream>
using namespace std;

#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::run()
{
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	int menu = 0; // ����ڰ� �Է��� �޴�
	int exit; // ����ڰ� ������ ���� ����
	while (true)
	{
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
	    std::cin >> menu;
	    if (menu == 1)
	    {
			this->selectEspresso();
	    }
		else if (menu == 2)
		{
			this->selectAmericano();
		}
		else if (menu == 3)
		{
			this->selectSugarCoffee();
		}
		else if (menu == 4)
		{
			this->show();
		}
		else if (menu == 5)
		{
			this->fill();
		}
		else
		{
			this->checkInputError();
			cout << menu << "���� 1,2,3,4,5 �߿� �ϳ��� ���� �Է��� �ּ���." << endl;
			menu = 0; // menu�� ������ ������ �־��� ��, ���������� ���ؼ�.
		}
		cout << "����Ͻ÷��� 1, ��ġ�Ƿ��� 0�� �������� : ";
		std::cin >> exit;
		if (exit == 0)
		{
			break;
		}
		else if (exit == 1)
		{
			continue;
		}
		else
		{
			this->checkInputError();
			cout << exit << " ���� 0�� 1 �߿� �ϳ��� ���� �Է��� �ּ���." << endl;
			exit = 0;
		}
	}
}

void CoffeeVendingMachine::selectEspresso()
{
	bool drain_0 = 1; // tong[0]�� ����� ��� 0�� �ȴ�.
	bool drain_1 = 1; // tong[1]�� ����� ��� 0�� �ȴ�.
	bool drain_2 = 1; // tong[2]�� ����� ��� 0�� �ȴ�.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
		// �ϳ��� �����Ѱ� �ִٸ� ������ ���� ������ �ʰ�(��� �Ƴ�) ��ö�� ������ �ʴ´�.
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(1);
		cout << "���������� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano()
{
	bool drain_0 = 1; // tong[0]�� ����� ��� 0�� �ȴ�.
	bool drain_1 = 1; // tong[1]�� ����� ��� 0�� �ȴ�.
	bool drain_2 = 1; // tong[2]�� ����� ��� 0�� �ȴ�.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(2);
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee()
{
	bool drain_0 = 1; // tong[0]�� ����� ��� 0�� �ȴ�.
	bool drain_1 = 1; // tong[1]�� ����� ��� 0�� �ȴ�.
	bool drain_2 = 1; // tong[2]�� ����� ��� 0�� �ȴ�.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(2);
		drain_2 = tong[2].consume(1);
		cout << "����Ŀ�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::show()
{
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::fill()
{
	tong[0].fill(10 - tong[0].getSize());
	tong[1].fill(10 - tong[1].getSize());
	tong[2].fill(10 - tong[2].getSize());
}

bool CoffeeVendingMachine::checkInputError()
{
	int user_input;
	cout << "����� �����Ͻô��� �ٽ� �Է����ּ���."; 
	// �� �κ��� �������� �����ֽ� ���Ͽ��� ������, inputerror���� input�� ���� ����� ���������� �ʾƼ� �Է��ϰ� �Ǿ����ϴ�.
	std::cin >> user_input;
	if (!std::cin)
		cout << "���ڰ� �ƴմϴ�" << endl;
	else
		cout << "�����Դϴ�" << endl;
	return 0;
}