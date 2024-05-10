// Concrete class for managing nurse details
class nurseDetails : public PersonDetails, public PersonHistory, public PersonManagement {
private:
    string type;
    int appointmentsBooked;

public:
    void fillMap() override;
    void saveMap() override;
    void addPerson(int16_t minAge = 0, int16_t maxAge = 1000) override;
    void printDetails() const override;
    void printDetailsFromHistory() const override;
    void getDetailsFromHistory() const override;
    void removePerson() override;
};

// Concrete class for managing nurse appointments
class nurseAppointment : public PersonDetails, public PersonHistory {
private:
    Patient* patient;
    std::string date;
    std::string time;
    std::string purpose;

public:
    nurseAppointment(Patient* p, const std::string& d, const std::string& t, const std::string& purp)
        : patient(p), date(d), time(t), purpose(purp) {}

    Patient* getPatient() const { return patient; }
    std::string getDate() const { return date; }
    std::string getTime() const { return time; }
    std::string getPurpose() const { return purpose; }

    void setDate(const std::string& d) { date = d; }
    void setTime(const std::string& t) { time = t; }
    void setPurpose(const std::string& purp) { purpose = purp; }
};
