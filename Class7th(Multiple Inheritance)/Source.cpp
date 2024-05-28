#include <iostream>

#include "Computer.h"

using namespace std;

class Food
{
public:

	Food()
	{
		cout << "Create Food" << endl;
	}
};
class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "Create Meat" << endl;
	}
};
class Vegetable : public virtual Food
{
public:
	Vegetable()
	{
		cout << "Create Vegetable" << endl;
	}
};
class Hamburger : public Meat, public Vegetable 
{
public:
	Hamburger()
	{
		cout << "Create Hamburger" << endl;
	}
};


int main()
{
#pragma region ���� ���
	// �ϳ��� ���� Ŭ������ ���� ���� ���� Ŭ������ ��ӹ޴� ���Դϴ�. 

	// Computer computer;
	// 
	// computer.Use();

	// ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ� �Ӽ��� ������ �� �ֱ� ������ ���� ���� �����ڸ� ���� ���� Ŭ������ �̸��� �����ϰ� �Ӽ��� ����մϴ�. 
#pragma endregion

#pragma region ���� ���
	Hamburger hamburger;



#pragma endregion



	return 0;
}