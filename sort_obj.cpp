#include<bits/stdc++.h>
using namespace std;

class Product{
public:
    int id;
    string name;
    double price;
};

bool cmp(Product &a, Product &b)
{
    if(a.price == b.price && a.id == b.id) return a.name < b.name;
    if(a.price == b.price) return a.id < b.id;
    return a.price < b.price;
}

int main(){
    int n;
    cin >> n;
    Product products[n];

    for(Product &x : products){
        cin >> x.id >> x.name >> x.price;
    }

    sort(products, products+n, cmp);

    for(Product x: products)
    {
        cout << x.id <<" " << x.name << " " << x.price << endl;
    }
    

}