#include "Customer.h"

Customer::Customer(std::string c_name, int c_id) :name(c_name),id(c_id)
{
}

std::string Customer::getName() const
{
	return this->name;
}

int Customer::getId() const
{
	return this->id;
}


SweatyCustomer::SweatyCustomer(std::string name, int id) : Customer(name,id)
{
}



std::vector<int> SweatyCustomer::order(const std::vector<Workout>& workout_options)
{
	return std::vector<int>();
}

CheapCustomer::CheapCustomer(std::string name, int id):Customer(name,id)
{
}

std::vector<int> CheapCustomer::order(const std::vector<Workout>& workout_options)
{
	return std::vector<int>();
}

HeavyMuscleCustomer::HeavyMuscleCustomer(std::string name, int id) : Customer(name, id)
{
}

FullBodyCustomer::FullBodyCustomer(std::string name, int id) : Customer(name, id)
{
}
