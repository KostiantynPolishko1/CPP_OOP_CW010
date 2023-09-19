#pragma once
#include <iostream>

using std::cout;

class Key
{
private:
	int _numTeeth;
	float _weight;
	char _material;
	std::string _color;

public:
	Key(){
		_numTeeth = 5;
		_weight = 2.23f;
		_material = 's';
		_color = "grey";
	}

	Key(int numTeeth, float weight, char material[10], std::string color = "grey") {
		_numTeeth = numTeeth;
		_weight = weight;
		_material = 'p';
		_color = color;
	}

	int getNumTeeth() {
		return _numTeeth;
	}
	float getWeight() {
		return _weight;
	}	
	char getMaterial() {
		return _material;
	}
	std::string getFlag() {
		return _color;
	}

	void printDataKey(const Key &data) {
		
		cout << "\nNum. Teeth:\t" << data._numTeeth;
		cout << "\nWeight kg:\t" << data._weight;
		cout << "\nMaterial:\t" << data._material;
		cout << "\nColor:\t" << data._color;
		cout << "\n";
	}

	~Key(){

	}
}
;
