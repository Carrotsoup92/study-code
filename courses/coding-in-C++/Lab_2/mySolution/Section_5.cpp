
#include <iostream>
#include <string>
#include <iomanip>

// Fehler 4: header file benutzen

class Article {
private:
    std::string name;
    double price;
    int stock;
    std::string category;
    int id;

public:
    // Fehler 6: Deconstrunctor fehlt
    Article(std::string name, double price, int stock, std::string category, int id): 
            name(name), price(price), stock(stock), category(category), id(id)
    {
    }

    void setPrice(double price) 
    {
        const double MIN_PRICE = 0.0;

        if (price < 0.0)
        {
            this->price = MIN_PRICE;
            std::cout << "Error by setSprice!\n";
        }
        else
        {
            this->price = price;
        }
    }

    void sell(int amount) 
    {
        if (stock < amount)
        {
            std::cout << "Error by sell!\n";
        }
        else
        {
            stock = stock - amount;

        }
    }

    void restock(int amount) 
    {
        stock += amount;
    }

    double applyDiscount(double percent) {
        price = price - price * percent / 100;
        return price;
    }

    double getPrice() 
    {
        return price;
    }

    bool isAvailable() 
    {
        if (stock > 0)
            return true;
        else
            return false;
    }

    const void printInfo() 
    {    
        using namespace std;

        cout << "Article: " << name << endl;
        cout << "Category: " << category << endl;
        cout << "Price: " << price << endl;
        cout << "Stock: " << stock << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Article laptop("Laptop", 999.99, 10, "Electronics", 101);

    laptop.sell(4);
    laptop.restock(10);
    laptop.getPrice();
    laptop.applyDiscount(10);
    laptop.setPrice(615.65);

    if (laptop.isAvailable()) 
    {
        std::cout << "Article available" << std::endl;
    }

    laptop.printInfo();
}
