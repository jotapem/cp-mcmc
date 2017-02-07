#include <iostream>
#include "generator.h"
#include "configuration_2d.h"
#include "configuration_1d.h"

int main() {
	int N = 5 * pow(10, 1);
	int N_samples = 1 * pow(10, 3);

	MonteCarloConfiguration* config = new MonteCarloConfiguration1D(N);
	MonteCarloSampleGenerator* mc = new MonteCarloSampleGenerator(config, N_samples);
	mc->test();
	
	
	config = new MonteCarloConfiguration2D(N);
	mc = new MonteCarloSampleGenerator(config, N_samples);
	mc->test();
	
	
	return 0;
}