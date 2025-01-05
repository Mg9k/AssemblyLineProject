// Name: Matteo Grutta
// Seneca Student ID: 110829207
// Seneca email: mgrutta@myseneca.ca
// Date of completion: December 5, 2023
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_WORKSTATION_H
#define SDDS_WORKSTATION_H
#include <deque>
#include <string>
#include <iostream>
#include "Station.h"
#include "CustomerOrder.h"

namespace sdds {

	extern std::deque<CustomerOrder> g_pending;
	extern std::deque<CustomerOrder> g_completed;
	extern std::deque<CustomerOrder> g_incomplete;

	class Workstation : public Station {
		std::deque<CustomerOrder> m_orders{};
		Workstation* m_pNextStation{};
	public:
		Workstation(const std::string& str);
		Workstation(const Workstation& other) = delete;
		Workstation& operator=(const Workstation& other) = delete;
		Workstation(Workstation&& other) = delete;
		Workstation& operator=(Workstation&& other) = delete;
		void fill(std::ostream& os);
		bool attemptToMoveOrder();
		void setNextStation(Workstation* station = nullptr);
		Workstation* getNextStation() const;
		void display(std::ostream& os) const;
		Workstation& operator+=(CustomerOrder&& newOrder);
	};
}

#endif 
