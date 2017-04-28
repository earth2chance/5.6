#include <iostream>


int temp(int tempA)
{
	double tempOut;
	tempOut = tempA * (9.0 / 5.0) + 32;
	return tempOut;
}
int main(){

	int temp1, temp2, temp3;
	double tempf1, tempf2, tempf3;

	std::cout << "What was the temperature, in celsius, at 8:00 am? ";
	std::cin >> temp1;

	std::cout << "What was the temperature, in celsius, at 12:00 pm? ";
	std::cin >> temp2;

	if (temp2 < temp1) {
		std::cout << "Error, temperature cannnot be lower than previous input. " << std::endl;
		return 0;
	}

	std::cout << "What was the temperature, in celsius, at 5:00 pm? ";
	std::cin >> temp3;

	if (temp3 == (temp2 + 10)){
		std::cout << "Error, temperature cannot be more than 10 degrees higher than previous input. " << std::endl;
		return 0;
	}

	tempf1 = temp(temp1);
	tempf2 = temp(temp2);
	tempf3 = temp(temp3);

	std::cout << "The temperature at 8:00 am was " << temp1 << " degrees Celsius and " << tempf1 << " degrees Fahrenheit" << std::endl;
	std::cout << "The temperature at 12:00 pm was " << temp2 << " degrees Celsius and " << tempf2 << " degrees Fahrenheit" << std::endl;
	std::cout << "The temperature at 5:00 pm was " << temp3 << " degrees Celsius and " << tempf3 << " degrees Fahrenheit" << std::endl;


}