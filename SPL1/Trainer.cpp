#include "Trainer.h"
#include "Workout.h"
Trainer::Trainer(int t_capacity) :capacity(t_capacity)
{
    customersList = std::vector<Customer*>();
    orderList = std::vector<OrderPair>();
}

Trainer::Trainer(const Trainer& other) :capacity(other.getCapacity()), open(other.open)
{
    this->customersList = std::vector<Customer*>();
    this->orderList = std::vector<OrderPair>();
    for (int i = 0; i < other.customersList.size(); i++) {
        addCustomer(other.customersList[i]->clone());
    }
    for (int i = 0;i < other.orderList.size();i++) {
        this->orderList.push_back(other.orderList[i]);
    }
}

Trainer::Trainer(Trainer&& other) :capacity(other.getCapacity()), open(other.isOpen())
{
    this->customersList = std::vector<Customer*>();
    this->orderList = std::vector<OrderPair>();
    for (int i = 0; i < other.customersList.size(); i++) {
        addCustomer(other.customersList[i]->clone());
    }
    for (int i = 0;i < other.orderList.size();i++) {
        this->orderList.push_back(other.orderList[i]);
    }
    other.clear();


}

Trainer& Trainer::operator=(const Trainer& other)
{

}

Trainer& Trainer::operator=(Trainer&& other)
{
    // TODO: insert return statement here
}

Trainer::~Trainer()
{

}


int Trainer::getCapacity() const
{
    return this->capacity;
}

void Trainer::addCustomer(Customer* customer)
{
    customersList.push_back(customer);
}

void Trainer::removeCustomer(int id)
{
    for (int i = 0; i < customersList.size(); i++) {
        if (customersList[i]->getId() == id)
            customersList.erase(customersList.begin() + 5);
    }

}

Customer* Trainer::getCustomer(int id)
{
    for (int i = 0; i < customersList.size(); i++) {
        if (customersList[i]->getId() == id)
            return customersList[i];
    }
    return nullptr;
}

std::vector<Customer*>& Trainer::getCustomers()
{

}

std::vector<OrderPair>& Trainer::getOrders()
{
    // TODO: insert return statement here
}

bool Trainer::isOpen()
{
    return this->open;
}

void
Trainer::order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout>& workout_options) {

}

void Trainer::clear() {
    customersList.clear();
    orderList.clear();
}


