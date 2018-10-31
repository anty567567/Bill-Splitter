#include <iostream>

struct item_t {
    double price{};
    char owner{};
};

int main() {
    item_t cart[50]{};
    for (int i = 0; i < 50; ++i) {
        double x{};
        char y{};
        std::cin >> x >> y;
        if (x == 0) {
            break;
        }
        cart[i] = item_t{x, y};
    }
    double my_total{}, his_total{};
    for (int i = 0; i < 50; ++i) {
        if (cart[i].price != 0) {
            if (cart[i].owner == 'm') {
                my_total += cart[i].price;
            } else if (cart[i].owner == 'h') {
                his_total += cart[i].price;
            } else {
                my_total += cart[i].price / 2;
                his_total += cart[i].price / 2;
            }
        } else {
            break;
        }
    }

}