#include "Sort.h"

using namespace std;

void CSort::merge(std::vector<int>& list, int start, int mid, int end)
{
    int i = start;		// First arr idx
    int j = mid + 1;	// Second arr idx
    int k = 0;			// Sorted arr idx

    vector<int> sorted(end-start+1);

    while (i <= mid && j <= end)
    {
        if ( list[i] <= list[j] )
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if ( i > mid )
    {
        while (j <= end) 
            sorted[k++] = list[j++];
    }
    else
    {
        while (i <= mid) 
            sorted[k++] = list[i++];
    }
        

    for (i = start, k = 0; i <= end; i++, k++) 
        list[i] = sorted[k];
}

void CSort::merge_sort(std::vector<int>& list, int start, int end)
{
    // 원소 1개 까지 분할(logN)
    // merge하면서 정렬(N)

    if ( start < end )
    {
        const int mid = (start+end) / 2;
        merge_sort(list, start, mid);
        merge_sort(list, mid+1, end);

        merge(list, start, mid, end);
    }
}
