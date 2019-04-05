#pragma once
#include "Oscillator.h"
#include "../OdinConstants.h"
#include "WavetableContainer.h"
#include <fstream>//todo

class WavetableOsc1D :
	public Oscillator
{
public:

	WavetableOsc1D();
	virtual ~WavetableOsc1D();

	void setVoldB(float dB);
	void selectWavetable(int p_wavetable_index);

	//overrides
	virtual void reset() override;
	virtual float doOscillate() override;
	virtual void update() override;
	
	//used to load wavetables can be overwritten by child classes
	virtual void loadWavetables();


protected:
	virtual int getTableIndex();
	
	void setWavetablePointer(int p_wavetable_index, float* p_wavetable_pointers[SUBTABLES_PER_WAVETABLE]);
	
	inline float linearInterpolation(float p_low, float p_high, float p_distance){
		return (1.f - p_distance) * p_low + p_distance * p_high;
	}

	inline void checkWrapIndex(double &p_index){
		while(p_index < 0){
			p_index += WAVETABLE_LENGTH;
		}
		while(p_index >= WAVETABLE_LENGTH){
			p_index -= WAVETABLE_LENGTH;
		}
	}

	float doWavetable();

	float m_volume_factor = 1.f;

	double m_read_index = 0.f;
	double m_wavetable_inc = 0.f;

	//tables
	float* m_wavetable_pointers[NUMBER_OF_WAVETABLES][SUBTABLES_PER_WAVETABLE];
	float* m_current_table;
	int m_wavetable_index = 0;
	int m_sub_table_index = 0;
	
	int m_nr_of_wavetables = NUMBER_OF_WAVETABLES;//can be overwritten in child classes 

	//std::ofstream debug_stream; //todo

};
