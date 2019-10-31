/*
Particle Swarm Optimization of Ackley Function
Jeff Stevens
Dr. Sevkli
CS 401
10/21/19
*/

// Preprocessor Directives //
#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<ctime>

#define PI 3.14159265359
#define e 2.71828
/***************************/


// Function/Class Prototypes //
float ackleyFunction(int n);
class particleSwarmPopulation;
class population;
void psoAlgorithm();
int main();
/*****************************/

/*/*//*/*/ Functions and Classes /*/*//*/*
float ackleyFunction(int n, vector<float> particle)
{
	float firstSummation = 0;
	float secondSummation = 0;
	for(int i = 0; i < n; i++)
	{
		firstSummation += pow(particle[i],2);
		secondSummation += (2*PI*particle[i])
	}
	return 20 + e - (20*pow(e,(-.2*sqrt((1/n)*firstSummation))) - pow(e,(1/n)*secondSummation);
}


class particle
//An array object  of particle objects will be used to represent our population in this implementation
{
        public:
		int dimensions = 32;
                vector<float> position; //tracks the position of the particle. The size of this vector is the amount of dimensions in this problem (here we have 32)
                vector<float> velocity; //updates the position of a particle during each iteration. paralell to the position vector!
		float fitness; //the strength of a particular solution (smaller is better in this problem. Best is 0!
		vector<float> personalBestPosition; //the position vector of a particle that created the best fitness value 
       		vector<float> personalBestFitness; //the best fitness value ever held by this particle

		for (int i = 0; i < dimensions; i++)
		{
			position[i] = (-32) + static_cast <float> (rand() /( static_cast <float> (RAND_MAX/(32-(-32))));
			velocity[i] = (-4) + static_cast <float> (rand() / (static_cast<float> (RAND_MAX/(4-(-4)))); 
		}

		personalBestPosition = position;


		void calcFitness()
		//update fitness value function
		{
			fitness = ackleyFunction(dimensions, position)
		}
        private:

};



class particleSwarmPopulation
{
	public:
		int popSize;
		float populationFitness;
		particle population[];
		particle globalBestParticle;
		particle personalBestParticle;


		particleSwarmPopulation()
		//public constructor
		{
			popSize = 30; //for this particular problem, each dimension of the ackley function has its own particle
			population[popSize];
			for(int i = 0; i < popSize; i++)
			{
				newParticle = particle();
				population[i] = newParticle;
			}
			d
		}
		
	private:
		
};


double main()
{
	srand(time(NULL))
	psoAlgorithm();
	return 1.2345;
}



