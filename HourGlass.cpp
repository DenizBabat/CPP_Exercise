#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector< vector<int> > arr) {

    int size = arr.size();
    int max = 0;
    int total = 0;

    for(int i=0; i<size-2; ++i){
        for(int j=0; j<size-2; ++j){
            int sum1 = arr[i][j]+arr[i][j+1]+arr[i][j+2];
            int sum3 = arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            int sum2 = arr[i+1][j+1];
            total = sum1+sum2+sum3;

            max = total>max?total:max;
            std::cout<<"total: " << total <<" max: " << max << std::endl;
        }
    }
    return max;
}

int main()
{
    int _arr[6][6] = {
{-1, -1, 0 ,-9 ,-2 ,-2	},
{-2, -1, -6, -8, -2, -5 },
{-1, -1, -1, -2, -3, -4 },
{-1, -9, -2, -4, -4, -5 },
{-7, -3, -3, -2, -9, -9 },
{-1, -3, -1, -2, -4, -5 }
};
    ofstream fout(getenv("OUTPUT_PATH"));

    vector< vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            arr[i][j] = _arr[i][j];
        }

    }


    int result = hourglassSum(arr);

    std::cout << result << "\n";

    fout.close();

    return 0;
}
