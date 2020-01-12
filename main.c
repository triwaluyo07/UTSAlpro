#include"header.h"

/// by ; tri waluyo
int main()
{
    printf("=================================\n");
    printf("\t\tLatihan UTS no 1 \n");
    printf("=================================\n");

    printf("Nama Pembeli : ");
    gets(name);
    printf("Nama Barang : ");
    gets(barang);
    printf("Jumlah Barang : ");
    scanf("%d",&jumlah_barang);
    printf("Harga Barang : ");
    scanf("%d",&harga_barang);
    puts("\n");

    printf("Nama Pembeli : %s\n",name);
    printf("Nama Barang : %s\n",barang);
    printf("Jumlah Barang : %d\n",jumlah_barang);
    printf("Harga Barang : %d\n",harga_barang);

    pembayaran(jumlah_barang,harga_barang);

    printf("=================================\n");
    printf("\t\tLatihan UTS no 2 \n");
    printf("=================================\n");

    printf("Masukkan batasan array : ");
    scanf("%d",&n);

    int arr[n];

    inputArr(arr,n);
    selection_sort(arr,n);
    cetakArr(arr,n);

    printf("=================================\n");
    printf("\t\tLatihan UTS no 3 \n");
    printf("=================================\n");

    printf("Masukkan batasan array : ");
    scanf("%d",&a);

    int arr2[a];
    inputArr(arr2,a);

    printf("Masukkan angka yg dicari : ");
    scanf("%d",&cari);
    selection_sort(arr2,a);
    sikuensearch(arr2,a,cari);

    return 0;
}
