#pragma once

#include <iostream>
using namespace std;

#include "Student.h"

class Group {
	string name = "";
	string speciality = "";
	int number_course = 1;
	int count_students = 0;
	Student** students = nullptr;

public:
	Group(const Group& original);
	Group();
	Group(string name, string speciality, int number_course);
	~Group();

	void SetName(string name);
	string GetName() const;

	void SetSpeciality(string speciality);
	string GetSpeciality() const;

	void SetCountStudents(int count_students);
	int GetCountStudents() const;

	void SetCourseNumber(int number_course);
	int GetCourseNumber() const;

	void Print() const;

	void AddStudent(const Student& new_student);
	void DeleteStudent(short student_index);
};