#ifndef USER_H
#define USER_H

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class User
{
public:
    User() = default;
    User(string id, string name, string dateOfBirth, string univesity, string field, string wordPlac, vector<string> specialties, vector<string> connectionIds);

    string getId() const;
    string getName() const;
    string getDateOfBirth() const;
    string getUniversityLocation() const;
    string getField() const;
    string getWorkplace() const;
    const vector<string> &getSpecialties() const;
    const vector<string> &getConnections() const;
    void addConnection(const string &connectionId);
    void removeConnection(const string &connectionId);

private:
    string id;
    string name;
    string dateOfBirth;
    string universityLocation;
    string field;
    string workplace;
    vector<string> specialties;
    vector<string> connectionIds;
};

#endif