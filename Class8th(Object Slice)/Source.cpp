#include <iostream>

using namespace std;



class Terran
{
protected:
    int health;
    int maxHP;
    
public:
    virtual void Recovery() = 0;
   
    virtual void Damage(int damage) = 0;
   
};

class Marine : public Terran
{
public:
    Marine()
    {
        cout << "Marine Move" << endl;
        health = 40;
        maxHP = 40; 
    }
    virtual void Recovery() override
    {
        health = maxHP;
        cout << "Marine Recovery" << endl;
    }
    virtual void Damage(int damage) override
    {
        health -= damage;
        cout << "Marine Damage" << endl;
    }

};
class Firebet : public Terran
{
public:
    Firebet()
    {
        cout << "Firebet Move" << endl;
        health = 50;
        maxHP = 50;
    }
    virtual void Recovery() override
    {
        health = maxHP;
        cout << "Firebet Recovery" << endl;
    }
    virtual void Damage(int damage) override
    {
        health -= damage;
        cout << "Marine Damage" << endl;
    }
};
class Ghost : public Terran
{
public:
    Ghost()
    {
        cout << "Ghost Move" << endl;
        health = 45;
        maxHP = 45;
    }
    virtual void Recovery() override
    {
        health = maxHP;
        cout << "Ghost Recovery" << endl;
    }
    virtual void Damage(int damage) override
    {
        health -= damage;
        cout << "Marine Damage" << endl;
    }
};

void Beacon(Terran* terran)
{
    terran->Recovery();
}

int main()
{
#pragma region 객체 잘림
    // 크기가 작은 상위 클래스에 상위 클래스보다 더 큰 
    // 하위 클래스를 대입하여 넣을 경우 클래스의 내용이
    // 잘리는 현상입니다. 
    
    

#pragma endregion


    return 0;
}

