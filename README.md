# propnum

simple cpp lib that calculates CRC number of polish land property register from given data.

## How to:

example how to use as a static library:

```bash
g++ -c propnum.cpp -o propnum.o
ar rcs libpropnum.a propnum.o
g++ yoursourcefile.cpp -L. -lpropnum -o example 
```



## Example Usage

```cpp
#include "propnum.h"

int main(){

    // prepare data for use 
    std::string teststr = "WL1A/00272852";
    
    int numVal = getNumberValues(teststr);
    int result = calculateCRC(numVal);
    printf("CRC NUMBER OF %s is %d \n", teststr.c_str(), result);

    return 0;
}
```
### NOTE
It was created only for educational purposes.
