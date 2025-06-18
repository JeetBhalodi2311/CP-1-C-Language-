#include <stdio.h>
#include <math.h>

void main() {
    int n, i;
    float sum = 0, product = 1, harmonic_sum = 0, avg, geo_mean, harm_mean;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
        harmonic_sum += 1.0 / arr[i];
    }

    avg = sum / n;
    geo_mean = pow(product, 1.0 / n);
    harm_mean = n / harmonic_sum;

    printf("Average: %.2f\nGeometric Mean: %.2f\nHarmonic Mean: %.2f\n", avg, geo_mean, harm_mean);
}