#include <iostream>
using namespace std;

#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::run()
{
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	int menu = 0; // 사용자가 입력한 메뉴
	int exit; // 사용자가 나갈지 말지 선택
	while (true)
	{
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
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
			cout << menu << "말고 1,2,3,4,5 중에 하나의 값만 입력해 주세요." << endl;
			menu = 0; // menu에 영문자 같은거 넣었을 때, 지워버리기 위해서.
		}
		cout << "계속하시려면 1, 마치실려면 0을 누르세요 : ";
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
			cout << exit << " 말고 0과 1 중에 하나의 값만 입력해 주세요." << endl;
			exit = 0;
		}
	}
}

void CoffeeVendingMachine::selectEspresso()
{
	bool drain_0 = 1; // tong[0]가 비었을 경우 0이 된다.
	bool drain_1 = 1; // tong[1]가 비었을 경우 0이 된다.
	bool drain_2 = 1; // tong[2]가 비었을 경우 0이 된다.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
		// 하나라도 부족한게 있다면 부족한 재료로 만들지 않고(재료 아낌) 드시라고 말하지 않는다.
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(1);
		cout << "에스프레소 드세요" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano()
{
	bool drain_0 = 1; // tong[0]가 비었을 경우 0이 된다.
	bool drain_1 = 1; // tong[1]가 비었을 경우 0이 된다.
	bool drain_2 = 1; // tong[2]가 비었을 경우 0이 된다.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(2);
		cout << "아메리카노 드세요" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee()
{
	bool drain_0 = 1; // tong[0]가 비었을 경우 0이 된다.
	bool drain_1 = 1; // tong[1]가 비었을 경우 0이 된다.
	bool drain_2 = 1; // tong[2]가 비었을 경우 0이 된다.
	if (drain_0 == 1 && drain_1 == 1 && drain_2 == 1)
	{
		drain_0 = tong[0].consume(1);
		drain_1 = tong[1].consume(2);
		drain_2 = tong[2].consume(1);
		cout << "설탕커피 드세요" << endl;
	}
}

void CoffeeVendingMachine::show()
{
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
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
	cout << "뭐라고 말씀하시는지 다시 입력해주세요."; 
	// 이 부분은 교수님이 보내주신 메일에는 없지만, inputerror에서 input을 받을 방법이 간단하지가 않아서 입력하게 되었습니다.
	std::cin >> user_input;
	if (!std::cin)
		cout << "숫자가 아닙니다" << endl;
	else
		cout << "숫자입니다" << endl;
	return 0;
}