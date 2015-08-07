#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Doctor.cpp"
#include "Patient.cpp"


class Appointment
{
public:
	int myTime;
	Doctor myDoctor;
	Patient myPatient;
	Appointment();
	Appointment(int, Doctor, Patient);
	const int APPOINTMENT_DURATION = 30;
};

#endif