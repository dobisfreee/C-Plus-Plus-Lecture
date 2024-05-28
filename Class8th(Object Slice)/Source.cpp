#include <iostream>

using namespace std;



class Terran
{
protected:
    int health;
    int maxHP;
    
public:
    Terran()
    {
        cout << "Terran Move" << endl;
        
    }


    virtual void Recovery() = 0;

    virtual void Damage(int damage) = 0;

    virtual ~Terran()
    {
        cout << "Release Terran" << endl; 
    }
   
};

class Marine : public Terran
{
public:
    Marine()
    {
        cout << "Marine Move" << endl;
        health = 40;
        maxHP = health; 
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
    ~Marine()
    {
        cout << "Release Marine" << endl;
    }

};
class Firebet : public Terran
{
public:
    Firebet()
    {
        cout << "Firebet Move" << endl;
        health = 50;
        maxHP = health;
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
    ~Firebet()
    {
        cout << "Release Firebet" << endl;
    }
};
class Ghost : public Terran
{
public:
    Ghost()
    {
        cout << "Ghost Move" << endl;
        health = 45;
        maxHP = health;
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
   virtual ~Ghost()
    {
        cout << "Release Ghost" << endl;
    }
};

void Beacon(Terran & terran)
{
    terran.Recovery();
}

int main()
{
#pragma region 객체 잘림
    // 크기가 작은 상위 클래스에 상위 클래스보다 더 큰 
    // 하위 클래스를 대입하여 넣을 경우 클래스의 내용이
    // 잘리는 현상입니다. 
   // Ghost ghost;
   // Beacon(ghost);


    
    

#pragma endregion


    return 0;
}

