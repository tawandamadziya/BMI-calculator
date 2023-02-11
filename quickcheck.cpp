#include <iostream>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int temp_val;
    int list_num[6]={5, 2, 3, 6, 1, 4};
    for (int i=0; i<=5; i++)
    {
        for(int y=i+1; y<=6;y++)  
        {
            if(list_num[i] > list_num[y])
            {
                temp_val=list_num[i];
                list_num[i]=list_num[y];
                list_num[y]=temp_val;
            }

        }
    }
    for(int i=0;i<=5;i++)
        cout<<list_num[i];

    return 0;
}
