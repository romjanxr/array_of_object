#include<bits/stdc++.h>
using namespace std;

class Product{
public:
    int id;
    string name;
    double price;
};

bool cmp(Product a, Product b)
{
    return a.price < b.price;
}

int main(){
    int n;
    cin >> n;
    Product products[n];

    for(Product &x : products){
        cin >> x.id >> x.name >> x.price;
    }

    // reverse(products, products+n);

    for(int i = 0, j = n-1; i < j; i++, j--)
    {
        swap(products[i].price, products[j].price);
    }

    for(Product x: products){
        cout << x.id <<" " << x.name << " " << x.price << endl;
    }

}