#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

void randomnr(double* p , const int N)
	{
	 for(int i=0; i<N; i++)
	     p[i]=(double)rand() / RAND_MAX;
	}

void statistics(double* p, const int N, double& mean, double& var)
	{
	 double sum = 0.0;
	 double sumvar = 0.0;
	 	for(int i=0; i<N; i++)
			 sum += p[i];
	 mean = sum/N;
	 	for(int i=0; i<N; i++)
			 sumvar += pow((p[i]-mean),2);
	 var = sumvar/N;	
	}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   srand(time(NULL));
   // Some lines here....
   randomnr(p,N);
   for(int j=0; j<N;j++)
	cout << p[j] << endl;
   statistics(p,N,mean,var);
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
