#ifndef PANZER_H
#define PANZER_H

#include <iostream>
#include <string>

class panzer 
{
protected:
	int ps;
	int baujahr;
	int kaliberMM;
	std::string typ;
	std::string fahrzeugName;

	bool autoShotStatus;
	bool radarStatus;

public:
    
    panzer(int ps, int baujahr, std::string typ, std::string fahrzeugName, int kaliberMM);
    void losfahren();
	void bremsen();
    void schießen();
    void anvisieren();
	
	void activateRadar();
	void deactivateRadar();
	void activateAutoShot();
	void deactivateAutoShot();

	/**
	 * getter und setter in panzerGetSet.cpp definiert
	*/

    int getPs();
    int getBaujahr();
    int getKaliberMM();
	std::string getTyp();
	std::string getFahrezeugName();
	
	bool getAutoShotStatus();
	bool getRadarStatus();
	void getStatus();

	void setPs(int ps);
    void setBaujahr(int baujahr);
    void setKaliberMM(int kaliber);
	void setTyp(std::string typ);
	void setFahrezeugName(std::string fahrzeugName);
	

};

#endif // PANZER_H
