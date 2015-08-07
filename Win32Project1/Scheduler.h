#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <string>
#include <vector>
#include "Appointment.cpp"

class Scheduler
{
	public:
		void scheduleAppointment(int, std::string, std::string);

	protected:
		std::vector<Appointment> vectorAppointments;
		bool testTime(int);
};

#endif