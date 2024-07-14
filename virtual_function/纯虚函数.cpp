#include<iostream>
using namespace std;
class Quote {
public:
	Quote() = default;
	Quote(const std::string& book, double sales_price) :bookNo(book), price(sales_price) {}
	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n)const
	{
		std::cout << "Quote 的虚函数" << endl;
	};//不会修改对象的成员变量
	virtual ~Quote() = default;
	
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

class Disc_quote :public  Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string& book, double sales_price, std::size_t qty, double disc) :Quote(book, price), quantity(qty), discount(disc) {}
	 double net_price(std::size_t) const = 0
	{
		std::cout << "Disc_quote 的虚函数" << endl;
		
	};

private:
	std::size_t quantity = 0;
	double discount = 0.0;
	
};

class Bulk_quote :public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double price, std::size_t qty, double disc):
	Disc_quote(book, price, qty, disc) {}
	//double net_price(std::size_t) const override;
};

class Base {
public:
	virtual void display() = 0 {
		std::cout << "base 的纯虚函数" << endl;
		// 纯虚函数
	};
};

class Der :public Base {
public:
	 void display() override {
		std::cout << "Der 的纯虚函数" << endl;
		// 纯虚函数
	};
};


/*
int main() {
	
	Base* b = new Der();
	b->display();

}
*/