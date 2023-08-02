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
		std::cout << "전사는 칼을 휘둘렀다." << std::endl;
	}

	void DoubleSlash() const
	{
		std::cout << "전사는 강하게 두번 휘둘렀다." << std::endl;
	}

	void Dead() const override {}

};

int main()
{
	Character* p = new Warrior;

	p->Attack();
	p->Dead();

	//((Warrior*)p)->DoubleSlash();
	Warrior* wp = dynamic_cast<Warrior*>(p); // 실패 가능성 있음
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
		std::cout << "정적함수 호출" << std::endl;
		return 0.0f;
	}
};

using FPtr = int (MyClass::*)(float);
using FPtr2 = float (*)(int); // 정적함수는 전역함수처럼 변해서 ::를 안 붙여도 됨

int main()
{
	MyClass c;

	FPtr p = &MyClass::MyMemberFunction;
	(c.*p)(1.1f);

	FPtr2 p2 = &MyClass::MyStaticFunction;
	(*p2)(1); // * - 역참조 기호. 반드시 있어야 함
}