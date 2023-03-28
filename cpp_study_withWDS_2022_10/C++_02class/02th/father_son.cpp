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
	void it_skill(void):
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
	using Father::room_key;
public:
	void play_game(void)
		{
			cout<<"son like play game"<<endl;

	}
};


int main(int argc, char **argv)
{
	Son s;
	s.setMoney(10000);
	cout<<s.getMoney()<<endl;
	s.it_skill();
	s.play_game();

	return 0;
}
