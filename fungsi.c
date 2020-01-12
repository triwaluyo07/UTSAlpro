#include"header.h"

void pembayaran(int jumlah_barang,int harga_barang)
{
    int total;
    int diskon;
    total=jumlah_barang*harga_barang;

    if(total>1000000)
    {
        diskon=total*0.2;
        printf("Diskon : %d \n",diskon);
        total=total-diskon;
        printf("Total Pembayaran : %d\n",total);
    }
    else if(total>500000)
        {
            diskon=total*0.1;
            printf("Diskon : %d \n",diskon);
            total=total-diskon;
            printf("Total Pembayaran : %d\n",total);
        }
        else if(total>250000)
            {
                diskon=total*0.05;
                printf("Diskon : %d \n",diskon);
                total=total-diskon;
                printf("Total Pembayaran : %d\n",total);
            }
    printf("\n");
}

void inputArr(int data[],int jml_data)
{
    int x;
    for(x=0;x<jml_data;x++)
    {
        printf("Masukkan nilai array ke %d : ",x);
        scanf("%d",&data[x]);
    }
    printf("\n");
}

void selection_sort(int data[],int jml_data)
{
    int x,y,z;
    int idx,wadah;

    for(x=0;x<jml_data-1;x++)
    {
        for(y=x;y<jml_data;y++)
        {
            if(data[x]>data[y])
            {
                wadah=data[x];
                data[x]=data[y];
                data[y]=wadah;
            }
        }
    }
    printf("\n");
    for(x=0;x<jml_data;x++)
    {
        printf("[%d] ",data[x]);
    }
    printf("\n");
}

void cetakArr(int data[],int jml_data)
{
    int x;
    for(x=0;x<jml_data;x++)
    {
        if(data[x]%2==1)
        {
            data[x]=100;
        }
        else if(data[x]%2==0)
        {
            data[x]=data[x]*2;
        }
        printf("[%d] ",data[x]);
    }
    printf("\n");
}

int binary_search(int data[],int jml_data,int cari)
{
    int x,y;
    int low=0;
    int mid;
    int high=jml_data-1;

    x=0;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(cari==data[mid])
        {

            return data[mid]; ///bisa pakai cari/indeks
        }

        else if (cari>data[mid])
        {

            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }

    printf("\n");
    return 0;

}

int sikuensearch (int arr[],int n,int cari)
{

    int x,count=0,jumlah;
    for(x=0;x<n;x++)
    {
        if(arr[x]==cari)
        {
            arr[cari]++;
            count=count+1;
        }
    }
    printf("angka %d berjumlah %d\n",cari,count);
    if(count==1)
    {
        cari=cari*cari;
    }
    else if((count>=2)&&(count<=4))
         {
             cari=cari;
         }
        else if(count>4)
        {
            cari=cari-1;
        }
    printf("Angka nya menjadi %d",cari);

}

