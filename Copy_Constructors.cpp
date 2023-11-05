#include<iostream>
using namespace std;

class Book {
    
    public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}

	~Book() {
		delete[] Rates;
		Rates = nullptr;
	}
};

int main() {

	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");

    Book book3(book1);
    // this is the way we use copy constructor


	cin.get();
}

