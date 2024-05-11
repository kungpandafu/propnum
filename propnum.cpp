#include "propnum.h"


const std::map <char, int> charToValue ={ {'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},{'X',10},{'A',11},{'B',12},{'C',13},{'D',14},{'E',15},{'F',16},{'G',17},{'H',18},{'I',19},{'J',20},{'K',21},{'L',22},{'M',23},{'N',24},{'O',25},{'P',26},{'R',27},{'S',28},{'T',29},{'U',30},{'W',31},{'Y',32},{'Z',33} };
const int wages[] = {1,3,7};

std::string extractAlphaChars(std::string& param){
    std::string modified;
    for(char c: param)
    {
        if(std::isalnum(c))
        {
            modified += c;
        }
    }
    return modified;
}
int calculateCRC(int& num)
{
    return num % 10;
}

int getNumberValues(std::string& str)
{
    std::string param = extractAlphaChars(str);
    int result = 0;
    int j = 0;

    for(int i = 0; i < param.length(); i++, j = (j+1) % 3)
    {
        result += charToValue.at(param[i]) * wages[j];
    }
    return result;
}