#include <vector>
#ifndef LILSTATS
#define LILSTATS

double median                 (std::vector <double> x, int y          );
double mean                   (std::vector <double> x, int y          );
double avgdev                 (std::vector <double> x, int y, double b);
double stdev                  (std::vector <double> x, int y, double b);
double mdev                   (std::vector <double> x, int y, double b);
double percentile_nearest_rank(std::vector <double> x, int y, double b);

#endif
