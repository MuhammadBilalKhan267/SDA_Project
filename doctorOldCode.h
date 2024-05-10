#ifndef DOCTOR
#define DOCTOR
using namespace std;
#include <iostream>

class appointment;
class doctor
{
private:
    string type;
    int appointmentsBooked;
    int id;
    string firstName, lastName;
    char gender;
    int16_t age;
    string mobNumber;
    string add;
    string cat;

public:
    doctor();
    void fillMap();
    void saveMap();
    void addPerson();
    void printDetails();
    void printDetailsFromHistory(string extraDetails = "");
    void getDetails(int rec = 0);
    void getDetailsFromHistory();
    void removePerson();
};
#endif // !DOCTOR