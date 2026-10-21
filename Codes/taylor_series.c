#include <stdio.h>
#include <math.h>
#include <stdio.h>

#define SAMPLE_COUNT 181

double artanh1(double x, double delta)
{
	double sum = 0.0;
	double term = x;

	for (unsigned long n = 0;; ++n) {
		sum += term;
		if (fabs(term) < delta) {
			break;
		}
		
		term *= x * x * (2.0 * n + 1.0) / (2.0 * n + 3.0);
	}

	return sum;
}

double artanh2(double x)
{
	return 0.5 * (log(1.0 + x) - log(1.0 - x));
}

int main(void)
{
	double delta;
	double taylor_results[SAMPLE_COUNT];
	double logarithm_results[SAMPLE_COUNT];

	printf("Enter a positive precision delta: ");
	if (scanf("%lf", &delta) != 1 || !isfinite(delta) || delta <= 0.0) {
		fprintf(stderr, "Delta must be a positive finite real number.\n");
		return 1;
	}

	for (int i = 0; i < SAMPLE_COUNT; ++i) {
		double x = -0.9 + 0.01 * i;
		taylor_results[i] = artanh1(x, delta);
		logarithm_results[i] = artanh2(x);
	}

	printf("x          Taylor (10 significant figures)  Logarithm (10 significant figures)  Absolute difference\n");
	for (int i = 0; i < SAMPLE_COUNT; ++i) {
		double x = -0.9 + 0.01 * i;
		printf("% .2f  % .10g                         % .10g                         %.10g\n",
			   x, taylor_results[i], logarithm_results[i],
			   fabs(taylor_results[i] - logarithm_results[i]));
	}

	return 0;
}