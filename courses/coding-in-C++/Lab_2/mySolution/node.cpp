

#include <iostream>
#include <string>

class Node
{
private:
    std::string *text;
public:
    Node(std::string str)
    {
        text = new std::string(str);
    }

    Node(const Node& n)
    {
        text = new std::string(*n.text);
    }

    ~Node()
    {
        delete text;
    }

    void display()
    {
        std::cout << *text << "\n";
    }
};

int main()
{
    Node node_1("Hallo;)");

    Node node_2(node_1);

    node_1.display();
    node_2.display();
}


