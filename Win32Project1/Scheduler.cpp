#include "Scheduler.h"

void Scheduler::scheduleAppointment(int time, std::string namePatient, std::string nameDoctor)
{
	if(testTime(time))
	{
		Appointment appointment = Appointment(time, Doctor(nameDoctor), Patient(namePatient));
	}
}

bool Scheduler::testTime(int time)
{
	return true;
}