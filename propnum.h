#ifndef PROPNUM_H
#define PROPNUM_H

#include <iostream>
#include <map>




/**
 * Calculates CRC number needed for polish land register property number (KW / EKW)
 * 
 * @param num sum of all character values extracted from department part and prop. number part of KW.
 * @return returns CRC number - last part of polish EKW number. CRC number is a result from modulo 10 division.
*/
int calculateCRC(int& num);
/**
 *  Extracts values assigned to characters and sums it.
 *  
 * @param param Known parts of polish EKW (land register property number) such as department and book number.
 * @return returns sum of values extracted from characters.
*/
int getNumberValues(std::string& param);

/**
 * Extracts non alphanumeric characters from provided string.
 * @param param string from which non alphanum characters must be extracted.
*/
std::string extractAlphaChars(std::string& param);



#endif // PROPNUM_H  