// DZ_Git_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>

using namespace std;



class Technics {//абстарктный класс Бытовая техника 
public:
    virtual void Add() = 0;
    virtual void Show() = 0;

};
class Type_Technics :public Technics {//Класс видов техники: копьютер, пылесос и т.д.
private:
    int serial_number_;
    string manufacturer_;
    string model_technics_;
    string seller_;
    double price_;
    Date* date_sale_;
    Date* date_warranty_;
    Service* plan_;
    Service* fact_;

public:
    Type_Technics() {
        serial_number_ = 0;
        manufacturer_ = nullptr;
        model_technics_ = nullptr;
        seller_ = nullptr;
        price_ = 0;
        date_sale_ = nullptr;
        date_warranty_ = nullptr;
        plan_ = nullptr;
        fact_ = nullptr;
    }
    Type_Technics(int serial_number, string manufacture, string model_technics, string seller, double price, const Date& date_sale, const Date& date_warranty, const Service& plan) {
        serial_number_ = serial_number_;
        manufacturer_ = manufacture;
        model_technics_ = model_technics;
        price_ = price;
        ////не понимаю как объявить в конструкторе классы Date и Service



    }
    void Add() override {

    }
    void Show() override {

    }


};


class Date {//класс дата создан поскольку у нас есть несколько видов дат: дата продажи, дата окончания гарантии  ремонта 
private:
    int day_;
    int month_;
    int year_;
public:
    Date() {
        day_ = 0;
        month_ = 0;
        year_ = 0;
    }
    Date(int day, int month, int year) {
        day_ = day;;
        month_ = month;
        year_ = year;
    }
    int Get_day() {
        return day_;
    }
    int Get_month() {
        return month_;
    }
    int Get_year() {
        return year_;
    }
    void Set_day(int day) {
        day_ = day;
    }
    void Set_month(int month) {
        month_ = month;
    }
    void Set_year(int year) {
        year_ = year;
    }
};


class Service {// сервисные работы проводимые с техникой
private:
    vector<Date> service_;//дата проводимых работ
    vector<string> service_work_;//содержание сервисных работ
};



int main()
{
    std::cout << "Hello World!\n";
}
