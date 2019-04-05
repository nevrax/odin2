#pragma once

#define SUBTABLES_PER_WAVETABLE 40 //there are 40 tables for one "sound"
#define NUMBER_OF_WAVETABLES 15  //number of different 1D WTs
#define NUMBER_OF_CHIPDRAW_TABLES 3 //number of chipdraw tables (one per osc slot)
#define CHIPDRAW_LENGTH 32 //how many samples we draw in the chipdraw window
#define NUMBER_OF_HARMONICS 801 //maximum harmonics used
#define WAVETABLE_LENGTH 512 //how long the actual wavetable is
#define MAX_EXPECTED_SAMPLE_RATE 192000 //use this for calculation of Delaylength
#define MAX_DELAY_TIME 4//max delay time at max samplerate in seconds

#define SIN_AND_COS 2 //just here to avoid magic Numbers
#define NUMBER_OF_WAVETABLES_2D 1
#define TABLES_PER_2D_WT 4
#define PI 3.1415926535897932384626433832795