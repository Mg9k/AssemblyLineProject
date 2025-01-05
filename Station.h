// Name: Matteo Grutta
// Seneca Student ID: 110829207
// Seneca email: mgrutta@myseneca.ca
// Date of completion: November 28, 2023
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.#pragma once

#ifndef SDDS_STATION_H
#define SDDS_STATION_H
#include <string>

namespace sdds {
	class Station {
		int m_stationId;
		std::string m_itemName;
		std::string m_description;
		size_t m_serial;
		size_t m_quantity;
		static size_t m_widthField;
		static int id_generator;
	public:
		Station(const std::string& str);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full) const;
	};

}

#endif