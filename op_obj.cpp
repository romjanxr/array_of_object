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

    Product *max_product = max_element(products, products+n, cmp);

    cout << max_product->id << " " << max_product->name << endl;

    // for(Product x : products){
    //     cout << x.id << " " << x.name << " " << x.price <<endl;
    // }

    // Product minimum = min({products[0], products[1]})

    // int a[] = {4, 2, 5, 1};
    // cout << *max_element(a, a+2) << endl;

}