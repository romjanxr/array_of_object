#include<bits/stdc++.h>
using namespace std;

class Product{
public:
    int id;
    string name;
    double price;

    Product(){}; // default constructor

    Product(int id, string name, double price){
        this->id = id;
        this->name = name;
        this->price = price;
    }

    void setValue(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    double calc_tax(){
        return this->price * (5/100.0);
    }
};

int main(){
    int n;
    cin >> n;
    // int *a = new int[4];
    Product products[n];

   

    for(int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cin >> id >> name >> price;
        products[i].setValue(id, name, price);
    }

    cout << products[0].calc_tax() << endl;
    cout << products[1].calc_tax() << endl;

    // for(int i = 0; i < n; i++)
    // {
    //    cout << products[i].id << " " << products[i].name << " " <<  products[i].price << endl;
    // }
}