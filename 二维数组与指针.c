# include<stdio.h>

int main()
{
    int i, j;
    double score[5][3] = {
        {55, 66, 77},
        {52, 62, 72},
        {15, 26, 37},
        {54, 65, 76},
        {55, 66 ,77},
    };
    double (*ptr_score)[3] = score;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            //printf("%.2lf\t", score[i][j]);
            //printf("%.2lf\t", *(score[i] + j));
            printf("%.2lf\t", *(*(ptr_score + i) + j));
        }
        printf("\n");
    }
    // for(i = 0; i < 5; i++)
    // {
    //     for(j = 0; j < 3; j++)
    //     {
    //         //printf("%.2lf\t", score[i][j]);
    //         //printf("%.2lf\t", *(score[i] + j));
    //         printf("%.2lf\t", *(*(score + i) + j));
    //     }
    //     printf("\n");
    // }
}