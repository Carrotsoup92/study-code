/*
* File: section_1.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

class Platfrom 
{
private:
   std::string name;
   User *user;
   Courses *course;
public:
    void add_user();
};

class User
{
private:
    std::string last_name;
    std::string first_name;
    int id;
    Courses *course;
public:
    void add_course();
    void remove_course();
};

class Courses
{
private:
    std::string title;
    std::string description;
    Lessons lesson;
public:
    void add_lesson();
};

class Lessons
{
private:
    std::string name;
    int id;
    Content content;
public:
    void add_content();
};

class Content
{
private:
    std::string text;
    std::string video;
    std::string quizz;
public:
};




