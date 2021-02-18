#define S_SIZE 186
#define C_SIZE 1
#define A_SIZE 115

void computeRates(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC);

void initConsts(double* CONSTANTS, double *STATES);

void computeVariables(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC);