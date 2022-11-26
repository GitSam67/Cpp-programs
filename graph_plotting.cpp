#include <iostream>
#include "pbPlots.hpp"
#include "supportLib.hpp"
#include <chrono>
#include <fstream>
#include <vector>
using namespace std;
using namespace std::chrono;

int main()
{
    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();
    vector<double> x;
    vector<double> y;
    int t;
    cout << "Enter the number of test cases" << endl;
    cin >> t;
    while (t--)
    {
        int n, swap, k,min,ty;
        cout << "Enter n \n";
        cin >> n;
        int a[n];
        x.push_back(n);

        cout << "Elements of array..\n";
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            a[i] = 1 + (rand() % 500);
            cout << a[i] << " ";
        }

        auto start = high_resolution_clock::now();

        cout << "]\nSorting array using selection sort..\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Pass " << i + 1 << ":"
                 << " ";
            cout << "[";
                for (int j = i + 1; j < n; j++)
                {
                    if (min > a[j])
                    {
                        min = a[j];
                        ty = j;
                    }
                }
                swap = a[i];
                a[i] = a[ty];
                a[ty] = swap;

                for (k = 0; k < n; k++)
                {
                    if (k == n - 1)
                    {
                        cout << a[k] << "";
                    }
                    else
                    {
                        cout << a[k] << ",";
                    }
                }
                cout << "]" << endl;
            }
            auto stop = high_resolution_clock::now();

            auto duration = duration_cast<microseconds>(stop - start);

            cout << "\nTime taken by function: "
                 << duration.count() << " microseconds" << endl;
            y.push_back(duration.count());
            cout << endl;
        }
        DrawScatterPlot(imageRef, 600, 400, &x, &y, NULL);
        vector<double> *pngData = ConvertToPNG(imageRef->image);
        WriteToFile(pngData, "wplot.png");
        DeleteImage(imageRef->image);
        return 0;
    }
