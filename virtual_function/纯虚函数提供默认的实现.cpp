#include<iostream>
using namespace std;

class anmials {
public:
	virtual void speak() = 0 {
		std::cout << "animals speak" << endl;
	}
	virtual void walk() {
		std::cout << "animals walk" << endl;
	}


};

class dog :public anmials {
	void  speak() override {
		anmials::speak();
		std::cout << "dog speak" << endl;
	}

	void  walk() override {
		std::cout << "dog wake" << endl;
	}
	
};

class cat :public anmials {
	void  speak() override {
		std::cout << "cat speak" << endl;
	}

	void  walk() override {
		std::cout << "cat wake" << endl;
	}

};

int main()
{
	anmials* a1 = new dog();
	anmials* a2 = new cat();
	a1->speak();
	a1->walk();
	a2->speak();
	a2->walk();

}