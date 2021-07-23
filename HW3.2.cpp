#include <iostream>

using namespace std;
class Car {
public:
    string company;
    string model;
};
class PassangerCar: virtual public Car {
public:
    PassangerCar() {
    void setCompany(string m_company = "toyota") {
        company = m_company;
    }
    void setModel(string m_model = "camry") {
        model = m_model;
    }
    cout << company << model << endl;
    }
};
class Bus: virtual public Car {
public:
    Bus() {
    void setCompany(string m_company = "Mercedes-Benz") {
        company = m_company;
    }
    void setModel(string m_model = "eCatiro") {
        model = m_model;
    }
    cout << company << model << endl;
    }
};
class Minivan: public PassangerCar, public Bus {
public:
    Minivan() {
    void setCompany(string m_company = "Volkswagen") {
        company = m_company;
    }
    void setModel(string m_model = "California") {
        model = m_model;
    }
    cout << company << model << endl;
    }
};