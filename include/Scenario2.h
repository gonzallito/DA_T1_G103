//
// Created by gonzallito on 16-04-2022.
//

#pragma once

#include <iostream>
#include <cmath>
#include "Courier.h"
#include "Data.h"
#include "Product.h"
#include "Scenario1.h"
#include <numeric>

using namespace std;

class Scenario2 {
private:
    vector<Product> products;
    vector<Courier> couriers;
public:
    Scenario2(const vector<Product> &products, const vector<Courier> &couriers);
    int getMaxProfit();
};
