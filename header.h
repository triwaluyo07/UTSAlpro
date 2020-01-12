#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void pembayaran(int jumlah_barang,int harga_barang);
void inputArr(int data[],int jml_data);
void cetakArr(int data[],int jml_data);
void selection_sort(int data[],int jml_data);
int binary_search(int data[],int jml_data,int cari);
int sikuensearch (int arr[],int n,int cari);

char name[20],barang[20];
int jumlah_barang,harga_barang,hasil_akhir;
int n,cari,a;
#endif // HEADER_H_INCLUDED
