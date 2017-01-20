#ifndef MCC_ABSTRACT
	#define MCC_ABSTRACT
	#include "configuration_abs.h"
#endif

class MonteCarloConfiguration1D: public MonteCarloConfiguration {
		bool* configuration;

	
		short int read_spin(SpinIndex index);
		void load_energy();
		short int flip_energy(SpinIndex index);

		void try_flip(SpinIndex index);
	
	public:
		MonteCarloConfiguration1D(int configuration_size);
		~MonteCarloConfiguration1D() {};
		
		void markov_step();
		float by_size(float value); 
	
		void test();
		
}; 