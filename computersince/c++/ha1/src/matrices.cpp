#include "matrices.h"

matrices::matrices(size_t x,size_t y):
    x(x),y(y)
{
    data.resize(x*y);
}

matrices::matrices(char* file_name)
{
    freopen(file_name,"r",stdin);
    int b1,b2;
    scanf("%d %d",&b1,&b2);
    float t;
    data.resize(x*y);
    for(size_t i=0;i<x*y;++i)
    {
        scanf("%f",&t);
        data[i] = (double) t;
    }
    fclose(stdin);
}

void matrices::print()
{
    printf("%d %d",(int) x,(int) y);
    float t;
    for(size_t i=0;i<x*y;++i)
    {
        if(i%x==0)
        {
            printf("\n");
            t +=
        }
        std::cout << data[i] << " ";
    }
}


matrices operator+(const matrices &a, const matrices &b)
{
    if((a.x!=b.x)||(a.y!=b.y))
    {
        throw;
    }
    matrices result(a.x,a.y);
    for(size_t i=0;i<a.x*a.y;++i)
    {
        result.data[i]=a.data[i]+b.data[i];
    }
    return matrices(0,0);
}

matrices operator*(const matrices &a, const matrices &b)
{
    if((a.x!=b.y))
    {
        throw;
    }
    matrices result(b.x,a.y);
    for(size_t i=0;i<a.y;++i)
    {
        for(size_t t=0;t<b.x;++t)
        {
            double sum= 0;
            for(size_t k=0;k<a.y;++k)
            {
                sum += a.data[a.x*i+k]*b.data[b.x*t+k];
            }
            result.data[result.x*i+t];
        }
	}
	return result;
}
