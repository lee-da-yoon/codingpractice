# include <stdio.h>
# include <math.h>

int main() {
    int n;
    float sum = 0, avg = 0, std = 0, c = 0;
    float a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    avg = sum / n;
    printf("%f\n", avg);
    for (int i = 0; i < n; i++)
    {
        c = c + ((a[i] - avg) * (a[i] - avg));
    }
    std = sqrt(c / n);
    printf("%.3f", std);
    return 0;
}