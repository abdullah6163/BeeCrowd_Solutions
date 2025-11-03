#include <stdio.h>

int main()
{
    double N;
    scanf("%lf", &N);
    int h;
    h = N / 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", h);
    int i;
    i = (N - (h * 100)) / 50;
    printf("%d nota(s) de R$ 50.00\n", i);
    int j;
    j = (N - (100 * h) - (50 * i)) / 20;
    printf("%d nota(s) de R$ 20.00\n", j);
    int w;
    w = (N - (100 * h) - (50 * i) - (20 * j)) / 10;
    printf("%d nota(s) de R$ 10.00\n", w);
    int k;
    k = (N - (100 * h) - (50 * i) - (20 * j) - (w * 10)) / 5;
    printf("%d nota(s) de R$ 5.00\n", k);
    int l;

    l = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (w * 10)) / 2;
    printf("%d nota(s) de R$ 2.00\n", l);
    printf("MOEDAS:\n");

    int m;
    m = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (w * 10)) / 1;
    printf("%d moeda(s) de R$ 1.00\n", m);
    int n;
    n = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (m * 1) - (w * 10)) / 0.50;
    printf("%d moeda(s) de R$ 0.50\n", n);
    int o;
    o = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (m * 1) - (n * 0.50) - (w * 10)) / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", o);
    int p;
    p = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (m * 1) - (n * 0.50) - (o * 0.25) - (w * 10)) / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", p);
    int q;
    q = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (m * 1) - (n * 0.50) - (o * 0.25) - (p * 0.10) - (w * 10)) / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", q);
    int r;
    r = (N - (100 * h) - (50 * i) - (20 * j) - (5 * k) - (2 * l) - (m * 1) - (n * 0.50) - (o * 0.25) - (p * 0.10) - (w * 10) - (q * 0.05)) / 0.01;
    
    printf("%d moeda(s) de R$ 0.01\n", r);
    return 0;
}
