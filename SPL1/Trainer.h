#ifndef TRAINER_H_
#define TRAINER_H_

#include <vector>
#include "Customer.h"
#include "Workout.h"

typedef std::pair<int, Workout> OrderPair;

class Trainer {
public:
    //Constructors-rule of 5
    Trainer* clone() { return new Trainer(*this); }
    Trainer(int t_capacity);//regurlar constructor
    Trainer(const Trainer& other);//copy constructor
    Trainer(Trainer&& other);//move construcetor---------------------TO DO
    Trainer& operator=(const Trainer& other);//copy assignment-------TO DO
    Trainer& operator=(Trainer&& other);//move assignment------------TO DO
    virtual ~Trainer();//destructor----------------------------------TO DO  
    int getCapacity() const;
    void addCustomer(Customer* customer);
    void removeCustomer(int id);
    Customer* getCustomer(int id);
    std::vector<Customer*>& getCustomers();
    std::vector<OrderPair>& getOrders();
    void order(const int customer_id, const std::vector<int> workout_ids, const std::vector<Workout>& workout_options);
    void openTrainer();
    void closeTrainer();
    int getSalary();
    bool isOpen();
    OrderPair getPair();
    void clear();
private:
    int capacity;
    bool open;
    std::vector<Customer*> customersList;
    std::vector<OrderPair> orderList; //A list of pairs for each order for the trainer - (customer_id, Workout)
};


#endif