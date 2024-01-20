#include <iostream>
#include "panzer.h"

panzer::panzer(int ps, int baujahr, std::string typ, std::string fahrzeugName, int kaliberMM)
    : ps(ps), baujahr(baujahr), typ(typ), fahrzeugName(fahrzeugName), kaliberMM(kaliberMM), autoShotStatus(false), radarStatus(false) {}

void panzer::losfahren()
{
	std::cout << "brum brum" << std::endl;
}

void panzer::bremsen()
{
	std::cout << "stooop" << std::endl;
}

void panzer::getStatus()
{
	std::cout << "radarstatus: " << this->getRadarStatus() << std::endl;
	std::cout << "autshotstatus: " << this->getAutoShotStatus() << std::endl;
}