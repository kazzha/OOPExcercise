#include <iostream>

/*
class Character
{
protected:
	int mHP;

public:
	Character() : mHP(100) {}
	virtual ~Character() {}

public:
	virtual void Attack() const {}
	virtual void Dead() const {}
};

class Warrior : public Character
{
public:
	Warrior()
	{
		std::cout << "[+] Warrior Created!" << std::endl;
	}
	~Warrior()
	{
		std::cout << "[-] Warrior Destroyed!" << std::endl;
	}

public:
	void Attack() const override
	{
		std::cout << "����� Į�� �ֵѷ���." << std::endl;
	}

	void DoubleSlash() const
	{
		std::cout << "����� ���ϰ� �ι� �ֵѷ���." << std::endl;
	}

	void Dead() const override {}

};

int main()
{
	Character* p = new Warrior;

	p->Attack();
	p->Dead();

	//((Warrior*)p)->DoubleSlash();
	Warrior* wp = dynamic_cast<Warrior*>(p); // ���� ���ɼ� ����
	if (wp)
	{
		wp->DoubleSlash();
	}
	else
	{
		std::cerr << "Warrior type expected" << std::endl;
	}
	 
	delete p;
}

*/

class MyClass
{
public:
	int MyMemberFunction(float x)
	{
		return 0;
	}

	static float MyStaticFunction(int x)
	{
		std::cout << "�����Լ� ȣ��" << std::endl;
		return 0.0f;
	}
};

using FPtr = int (MyClass::*)(float);
using FPtr2 = float (*)(int); // �����Լ��� �����Լ�ó�� ���ؼ� ::�� �� �ٿ��� ��

int main()
{
	MyClass c;

	FPtr p = &MyClass::MyMemberFunction;
	(c.*p)(1.1f);

	FPtr2 p2 = &MyClass::MyStaticFunction;
	(*p2)(1); // * - ������ ��ȣ. �ݵ�� �־�� ��
}