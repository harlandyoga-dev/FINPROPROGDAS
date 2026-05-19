#include <stdio.h>

void hitungAlokasi(float* pendapatan, Alokasi* alokasi, int bulan, int dewasa, int anak){
    for(int i = 0; i < bulan; i++){
        alokasi[i].utama = pendapatan[i] * 1 / (1 + 0.5 * (dewasa - 1) + 0.3 * anak);
        alokasi[i].dewasa = pendapatan[i] * 0.5 / (1 + 0.5 * (dewasa - 1) + 0.3 * anak);
        alokasi[i].anak = pendapatan[i] * 0.3 / (1 + 0.5 * (dewasa - 1) + 0.3 * anak);
    }
}