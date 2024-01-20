#include <iostream>
#include "panzer/panzer.h"
#include <chrono>
#include <thread>
#include <cstdlib>
#include <map>
#include <functional>

void th1()
{
	std::cout << "nigger" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	th1();
}

void th2()
{
	std::cout << "sieg" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	th2();
}


void consoleRecursion(panzer *fahrzeug)
{
	std::map<std::string, std::function<void()>> commands;
	commands["losfahren"] = std::bind(&panzer::losfahren, fahrzeug);
	commands["bremsen"] = std::bind(&panzer::bremsen, fahrzeug);
	commands["status"] = std::bind(&panzer::getStatus, fahrzeug);

	std::map<std::string, std::function<void(int)>> com;
	com["x"]= std::bind(&panzer::setPs, fahrzeug, std::placeholders::_1);

	std::map<std::string, std::function<int()>> comm;
	comm["y"] = std::bind(&panzer::getPs, fahrzeug);

	std::thread t1(th1);
	std::thread t2(th2);
	
	t1.join();
	t2.join();

	while(false)
	{
		std::string command;
		std::cout << ":";
		std::getline(std::cin, command);

		if(command == "exit")
		{
			exit(0);
		}

		if(commands.find(command) != commands.end())
		{
			commands[command]();
		}
		else
		{
			std::cout << "command existiert nicht" << std::endl;
		}
	}

}

int main()
{
	panzer tiger(500, 2024, "panzer", "k51", 130);
	
	consoleRecursion(&tiger);
	
	/**königstiger.losfahren();

	std::this_thread::sleep_for(std::chrono::seconds(2));

	königstiger.bremsen();*/
}