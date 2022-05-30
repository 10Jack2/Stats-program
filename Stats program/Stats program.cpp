#include <iostream>
#include <string>
#include <fstream>

using namespace::std;


int const Num_of_trials = 1000;

ofstream results_csv("results.csv");


int main()
{
	results_csv << "trial num,Urban or Rural,Call topic,Animals,CF,Probability" << endl;
	int CF = 0;
	for (int i = 0; i < Num_of_trials; i += 1) {
		int random_num_1 = rand() % 10 + 1;

		int random_num_2 = rand() % 100 + 1;

		results_csv << i + 1 << ",";
		if (random_num_1 == 1) {
			results_csv << "Rural,";
			if (random_num_2 < 21) {
				results_csv << "Music , False";
			}
			else if (random_num_2 < 26) {
				results_csv << "Loud Talking , False";
			}
			else if (random_num_2 < 51) {
				results_csv << "Animals , True";
				CF += 1;
			}
			else {
				results_csv << "machinery , False";
			}
		}
		else {
			results_csv << "Urban,";
			if (random_num_2 < 61) {
				results_csv << "Music , False";
			}
			else if (random_num_2 < 71) {
				results_csv << "Loud Talking , False";
			}
			else if (random_num_2 < 86) {
				results_csv << "Animals , True";
				CF += 1;
			}
			else {
				results_csv << "machinery , False";
			}
		}
		results_csv << "," << CF << endl;
	}
   
}

