#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <vector>
#include <string>
#include "Workout.h"

class Customer {
public:
    Customer(std::string c_name, int c_id);
    virtual Customer* clone() const = 0;
    virtual std::vector<int> order(const std::vector<Workout>& workout_options) = 0;
    virtual std::string toString() const = 0;
    std::string getName() const;
    int getId() const;
private:
    const std::string name;
    const int id;
};


class SweatyCustomer : public Customer {
public:
    virtual SweatyCustomer* clone() const override{return new SweatyCustomer(*this);};
    SweatyCustomer(std::string name, int id);
    std::vector<int> order(const std::vector<Workout>& workout_options);
    std::string toString() const;
private:
};


class CheapCustomer : public Customer {
public:
    CheapCustomer(std::string name, int id);
    virtual CheapCustomer* clone() const override { return new CheapCustomer(*this); };
    std::vector<int> order(const std::vector<Workout>& workout_options);
    std::string toString() const;
private:
};


class HeavyMuscleCustomer : public Customer {
public:
    HeavyMuscleCustomer(std::string name, int id);
    virtual HeavyMuscleCustomer* clone() const override { return new HeavyMuscleCustomer(*this); };
    std::vector<int> order(const std::vector<Workout>& workout_options);
    std::string toString() const;
private:
};


class FullBodyCustomer : public Customer {
public:
    FullBodyCustomer(std::string name, int id);
    virtual FullBodyCustomer* clone() const override { return new FullBodyCustomer(*this); };
    std::vector<int> order(const std::vector<Workout>& workout_options);
    std::string toString() const;
private:
};


#endif