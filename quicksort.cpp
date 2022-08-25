#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void swap(vector<int>& v, int x, int y);
void quicksort(vector<int> &arr, int L, int R) {
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = arr[mid];

    while (i<R || j>L) {
        while (arr[i] < piv)
            i++;
        while (arr[j] > piv)
            j--;

        if (i <= j) {
            swap(arr, i, j);
                i++;
                j--;
        }
        else {
            if (i < R)
                quicksort(arr, i, R);
            if (j > L)
                quicksort(arr, L, j);
            return;
        }
    }
}

void swap(vector<int> &v, int x, int y) {
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;

}

int main()
{
vector<int> vect;
vect.push_back(10);
    vect.push_back(20);
    vect.push_back(56);
     vect.push_back(57);
      vect.push_back(2);
       vect.push_back(1);
quicksort(vect,0,5);
for (int i = 0; i < vect.size(); i++)
      cout << vect[i] << " ";
    return 0;
}
