#include <iostream>
#include <iomanip>

/*. 
	*Data_type
	 + what is data type
		---Integer ==> 4byt
		---String
		---Boolean
		---Float
		---Array
		
	* Data sizes
		-- Bit       ==> [Bi]nary Digi[t] ==> store 0 or 1
		-- Byte      ==> A Group of 8 bit ==> store single character
		-- Kilo byte ==> 1024 byte
		-- Mega byte ==> 1024 byte
		-- Giga byte ==> 1024 byte
		-- Tera byte ==> 1024 byte

	* Data Type with size
	   -- short int ==> 2 Butes
	   -- int ==> 4 Bytes 
	   -- float ==> 4 Bytes ==>[18.345678909]
	   -- double ==> 8 Bytes ==> [18.345678909]
	   -- char ==> 1 Byte ==> "0" "}" "A" "6"
	   -- boolean ==> 1 Byte ==> true or false
*/

int main()
{
	int num = 200;
	std :: string str = "youssef";
	bool status = true;
	float mn = 14.78;
	char chr = 'A';

	std :: cout <<  sizeof(num) << "\n";
	std :: cout <<  sizeof(str) << "\n";
	std :: cout <<  sizeof(status) << "\n";
	std :: cout <<  chr << "\n";


}