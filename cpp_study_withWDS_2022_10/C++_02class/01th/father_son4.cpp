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

class Son_pub : public Father{
private:
	int toy;
	using Father::room_key;     //调整访问控制
public:
	void play_game(void)
		{
			cout<<"son like play game"<<endl;

	}

	void goto_school(void)
		{
			cout<<"son do not like school"<<endl;
		
	}

		void play_money(void)
		{
			int m;
			cout<<"son play money"<<endl;
			m = getMoney();
			m--;
			setMoney(m);

			room_key = 1;
	}
};


class Son_pro : protected Father{

private:
	int toy;
	using Father::room_key;     //调整访问控制
public:
	void play_game(void)
		{
			cout<<"son like play game"<<endl;

	}

	void goto_school(void)
		{
			cout<<"son do not like school"<<endl;
		
	}

	void play_money(void)
		{
			int m;
			cout<<"son play money"<<endl;
			m = getMoney();
			m--;
			setMoney(m);

			room_key = 1;
	}

};

class Son_pri : private Father{

private:
	int toy;
	using Father::room_key;     //调整访问控制
public:
	void play_game(void)
		{
			cout<<"son like play game"<<endl;

	}

	void goto_school(void)
		{
			cout<<"son do not like school"<<endl;
		
	}

		void play_money(void)
		{
			int m;
			cout<<"son play money"<<endl;
			m = getMoney();
			m--;
			setMoney(m);

			room_key = 1;
	}

} ;

int main(int argc, char **argv)
{
	Son_pub s_pub;
	Son_pro s_pro;
	Son_pri s_pri;

	s_pub.play_money();
	s_pro.play_money();
	s_pri.play_money();

	
	
	
	return 0;
}
