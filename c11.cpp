#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Father {
	protected:
		int age = 0; // initial
		string name =  "none";
	public:
		Father() = default; // use default function 
		Father(int age, string name);
		Father(const Father & father) = delete; // do not use the copy structure 
		virtual void show()
		{
			cout << name << endl;
		}
		void fun(int i)
		{
			cout << i << endl;
		}
};
class Son : public Father {
	public:
		using Father::Father; // use the father's constructure functions 
		virtual void show() override final// override && final
		{
			cout << name << endl;
		}
		void fun(char * p)
		{
			if(!p) cout << "nullptr" << endl;
			else cout << *p  << endl;
		}
};

int main(int argc, char * argv[])
{
	auto i = 4; // auto 
	cout << i << endl;

	vector<int>	array{1, 2, 3, 4, 5, };// initial

	for(auto iter : array) // for
	{
		cout << iter << endl;
	} 

	auto father = new Father();
	father->show();
	auto son = new Son();
	son->fun(nullptr); // nullptr. if use NULL will be confusing

	return 0;
}
