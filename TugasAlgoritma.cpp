#include <iostream>
#include <string>


int main(){
	std::string namadepan;
	std::cout <<"masukan nama depan:";
	std::cin >>namadepan;
	
	std::string namabelakang;
	std::cout <<"masukan nama belakang:";
	std::cin >>namabelakang; 
	
	std::cout << "nama lengkap anda "<< namadepan  << " " << namabelakang;
	
	return 0;
}
