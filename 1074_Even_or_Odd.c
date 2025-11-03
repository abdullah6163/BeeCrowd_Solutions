 #include<stdio.h>
int main()
{
    int i,N,t;
    scanf("%d",&N);
    for(i=0;i<N;i++){
       scanf("%d",&t);
    if(t == 0)
        printf("NULL\n");
          if(t >0 && t%2==0)
          printf("EVEN POSITIVE\n");
       if(t >0 && t%2!=0)
          printf("ODD POSITIVE\n");
          if(t <0 && t%2==0)
          printf("EVEN NEGATIVE\n");
       if(t <0 && t%2!=0)
          printf("ODD NEGATIVE\n");
}
return 0;
}