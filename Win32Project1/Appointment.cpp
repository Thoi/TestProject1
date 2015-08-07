#include "Appointment.h"

Appointment::Appointment(){}

Appointment::Appointment(int time, Doctor doctor, Patient patient)
{
	this->myTime = time;
	this->myDoctor = doctor;
	this->myPatient = patient;
}