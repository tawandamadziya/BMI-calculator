#include<iostream>
using namespace std;
int main()
{
    /*int temp, min,max;
    int list_num[6]={1,2,3,4,5,6};
    for(int i=0;i<=5;i++)
       temp=list_num[1];
       if (temp<list_num[i])
       {
           min= temp;
           temp=list_num[i];
       }
       else if (temp>list_num[i])
       {
           max
       }*/
/*    int temp_val;
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
    //for(int i=0;i<=5;i++)
    //    cout<<list_num[i];
    int min=list_num[0];
    int max=list_num[5];
    cout<<"The max is: "<<max<<" min is: "<<min;   

    return 0;  */
    /*string status;
    int counter=0;
    int da_list[6]={60,50,50,50,60,32};
    //getMarks(da_list)
    for(int i=0; i<5; i++)
        if (da_list[i]>=50)
        {
            counter=counter+1;
        }
     if (counter>=4 and da_list[0]>=50)   
        status="True";
     else if (counter<4 or da_list[0]<50)
         status="False";   

    cout<<status<<endl;     */
    int number=0;
    int list_num[6];
    string listed[6]={"English","Mathematics", "Life Orientation", "History", "Computer Literacy", "Art"};
    for(int i=0 ; i<=5 ; i++)
    {
        cout<<"please enter mark for "<<listed[i]<<": ";
        cin>>number;
        if (number<0 or number>100)
        {
            cout<<"invalid marks"<<endl;  
            cout<<"please re-enter mark for "<<listed[i]<<": ";
            cin>>number; 
        }   
        list_num[i]=number;
    }       
    return 0; 
        
}