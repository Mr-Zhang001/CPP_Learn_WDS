#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

class Father{
private:
	int money;
protected:
	int room_key;
public:
	void it_skill(void)
		{
			cout<<"father is a it skill"<<endl;
	}

	int getMoney(void)
		{
			return money;
	}

	void setMoney(int money)
		{
			this->money = money;
				
	}
};

class Son : public Father{
private:
	int toy;
	using Father::room_key;     //子类可以直接访问父类的保护成员，但是外外面不可以用
public:
	void play_game(void)
		{
			cout<<"son like play game"<<endl;

	}

	void goto_school(void)
		{
			cout<<"son do not like school"<<endl;
		
	}
};


int main(int argc, char **argv)
{
	Son s;
	s.setMoney(10000);
	cout<<s.getMoney()<<endl;
	s.setMoney(500);
	cout<<s.getMoney()<<endl;
	s.it_skill();
	s.play_game();
	s.goto_school();

	return 0;
}
