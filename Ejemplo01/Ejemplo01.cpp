#include <iostream>

int main() {
	int x;

	std::cout << "Ingrese un numero: " << std::endl;

	std::cin >> x;

	if (x % 2 == 0){
		std::cout << x << " es un numero par";
	}
	else {
		std::cout << x << " es un numero impar";
	}
}