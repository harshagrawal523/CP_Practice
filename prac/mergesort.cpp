#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    long long int roll_no;
    int course_hss;

} data;

int charToInt(char c){
	int num = 0;

	num = c - '0';

	return num;
}

void merge(int arr[],int l , int mid, int r){

    int n1 = mid - l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i = 0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i = 0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }

    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
    

}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        

        merge(arr,l,mid,r);
    }
}

int main()
{

    FILE *fp;
    int cl = 0;
    char ch;
    fp = fopen("week15-AL2-input.txt", "r");

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            cl++;
        }
    }

    data *ptr = (data *)calloc(cl, sizeof(data));

    fseek(fp, 0L, SEEK_SET);

    int i = 0;
    int arr[cl];

    while (i <= cl)
    {
        fscanf(fp, "%lld", &ptr[i].roll_no);
        getc(fp);
       getc(fp);
       getc(fp);
        fscanf(fp, "%d", &ptr[i].course_hss);
        arr[i] = ptr[i].course_hss;
        getc(fp);



        i++;
    }

    int x = 0;

    int y;

    // while(x<=cl){
        
    //     int hun,ten,one;
    //     hun = charToInt(ptr[x].course_hss[2]);
    //     ten = charToInt(ptr[x].course_hss[3]);
    //     one = charToInt(ptr[x].course_hss[4]);
    //     arr[x] = hun*100 + ten*10 + one;
    //     x++;

    // }

    mergeSort(arr,0,cl);
    

    for(int i = 0;i<cl+1;i++){
        y = ptr[i].roll_no%100000;
        y=y/1000;
        if(y==1){
            printf("HS%d  %lld  CSE \n",ptr[i].course_hss,ptr[i].roll_no);
        }
        else if(y==2){
            printf("HS%d  %lld  ECE \n",arr[i],ptr[i].roll_no);
        }
        else if(y==3){
            printf("HS%d  %lld  ME \n",arr[i],ptr[i].roll_no);
        }
        else if(y==4){
            printf("HS%d  %lld  CE \n",arr[i],ptr[i].roll_no);
        }
        else if(y==5){
            printf("HS%d  %lld  DD \n",arr[i],ptr[i].roll_no);
        }
        else if(y==6){
            printf("HS%d  %lld  BSBE \n",arr[i],ptr[i].roll_no);
        }
        else if(y==7){
            printf("HS%d  %lld  CL \n",arr[i],ptr[i].roll_no);
        }
        else if(y==8){
            printf("HS%d  %lld  EEE \n",arr[i],ptr[i].roll_no);
        }
        else if(y==21){
            printf("HS%d  %lld  CST \n",arr[i],ptr[i].roll_no);
        }
        else if(y==22){
            printf("HS%d  %lld  EP \n",arr[i],ptr[i].roll_no);
        }
        else if(y==23){
            printf("HS%d  %lld  M&C \n",arr[i],ptr[i].roll_no);
        }
    }
    

    
   


    


    
    return 0;
}
