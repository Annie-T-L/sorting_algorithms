#include "bubble_sort.h"

Bubble_sort::Bubble_sort()
{}

void Bubble_sort::b_sort() // bubble_sort + .... yeap ...
//almost understood .... a?lmost ...
{
    int i1,i2,k1=0, si1;
    std::array<int,4>ar1 = {10,11,13,4};
    si1 = ar1.size();
    cout << "unsorted:\n";
    for(int i1=0;i1<si1;i1++)
    {   cout << ar1[i1] << "\t";    }
    cout << "\n";

    for(int i1=0;i1<si1;i1++)
    {
        for(i2=i1+1;i2<si1;i2++)
        {
            if(ar1[i2] < ar1[i1])
            {
            k1 = ar1[i1];
            ar1[i1] = ar1[i2];
            ar1[i2] = k1;}
        }
    }
    cout << "sorted (bubble_sort) array....\n";
    for(i1=0;i1<si1;i1++)
    {   cout << ar1[i1] << "\t";    }
    cout << "\n";
}

void Bubble_sort::s_sort() //selection_sort done +
//now need to know why? and how?
{
    int i1, i2, si1, p1, min1,k1=0 ;
    std::array <int,5>ar1 ;
    si1 = ar1.size();
//    cout << si1;
    cout << "enter arry, ar1[i1] for "<< si1 << " elements\n";
    for(int i1=0; i1<si1; i1++)
    {   cin >> ar1[i1]; }
    cout << "unsorted array of " << si1 << "elem's\n";
    for(int i1=0;i1<si1;i1++)
    {   cout << ar1[i1] << "\t";    }
    cout << "\n";

    for(i1=0;i1<si1-1;i1++)
    {
        min1 = ar1[i1]; p1 = i1;  // ?
        for(i2=i1+1;i2<si1;i2++) // ?
        {
            if (min1 > ar1[i2])
            {   min1 = ar1[i2]; p1 = i2;    } // ?
        }
        // swap elem's ? why?
        k1=ar1[i1];
        ar1[i1]=ar1[p1];
        ar1[p1]=k1;
    }
    cout << "sorted (selection_sort) arr of " << si1 << " elems\n";
    for(int i1=0;i1<si1;i1++)
    {   cout << ar1[i1] << "\t";    }
    cout << "\n";
}
