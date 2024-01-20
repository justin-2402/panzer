#include "panzer.h"
#include <iostream>

int panzer::getPs() 
{
	return this->ps;
}   

void panzer::setPs(int ps)
{
	this->ps = ps;
}

int panzer::getBaujahr()
{
	return this->baujahr;
}

void panzer::setBaujahr(int baujahr)
{
	this->baujahr = baujahr;
}

int panzer::getKaliberMM()
{
	return this->kaliberMM;
}

void panzer::setKaliberMM(int KaliberMM)
{
	this->kaliberMM = KaliberMM;
}

std::string panzer::getTyp()
{
	return this->typ;
}

void panzer::setTyp(std::string typ)
{
	this->typ = typ;
}

std::string panzer::getFahrezeugName()
{
	return this->fahrzeugName;
}

void panzer::setFahrezeugName(std::string fahrzeugName)
{
	this->fahrzeugName = fahrzeugName;
}

bool panzer::getAutoShotStatus()
{
	return this->autoShotStatus;
}

bool panzer::getRadarStatus()
{
	return this->radarStatus;
}

