#include <iostream>
#include <vector>

using namespace std;

void func1()
{
    vector<vector<int>> vubirka;
    vector<int> xi = { 3, 5, 7, 10, 12 };
    vector<int> ni = { 2, 5, 7, 3, 2 };
    vubirka.push_back(xi);
    vubirka.push_back(ni);

    cout << "================================= " << endl;
    for (int i = 0; i < vubirka.size(); i++)
    {
        for (int j = 0; j < vubirka[i].size(); j++)
        {
            cout << vubirka[i][j] << " ";
        }
        cout << endl;
    }

    int n = 0;

    for (int i = 0; i < vubirka[1].size(); i++)
    {
        n += vubirka[1][i];
    }

    float x = 0;
    for (int i = 0; i < vubirka[0].size(); i++)
    {
        x += vubirka[0][i] * vubirka[1][i];
    }
    x = x / n;
    cout << "x: " << x << endl;

    float D = 0;
    for (int i = 0; i < vubirka[1].size(); i++)
    {
        D += pow(vubirka[0][i] - x, 2) * vubirka[1][i];
    }
    D = D / n;
    cout << "D: " << D << endl;

    float G = sqrt(D);
    cout << "G: " << G << endl;

    float S = (n - 1);
    S = n / S;
    S = S * D;
    S = sqrt(S);
    cout << "S: " << S << endl;

    float t = 2.88;

    float a1 = x - ((S * t) / (sqrt(n)));
    float a2 = x + ((S * t) / (sqrt(n)));

    cout << a1 << " < a < " << a2 << endl;
}

void func2()
{
    vector<vector<int>> vubirka_interval;
    vector<int> xi1 = { 1, 5, 5, 9, 9, 13, 13, 17, 17, 21, 21, 25, 25, 29 };
    vector<int> ni1 = { 8, 12, 14, 18, 22, 16, 10 };
    vubirka_interval.push_back(xi1);
    vubirka_interval.push_back(ni1);

    vector<int> xi;
    vector<int> ni;

    for (int i = 0; i < vubirka_interval[0].size(); i+=2)
    {
        float step = vubirka_interval[0][i + 1] - vubirka_interval[0][i];
        float  x = vubirka_interval[0][i] + (step / 2);
        xi.push_back(x);
        ni.push_back(vubirka_interval[1][i / 2]);
    }
    vector<vector<int>> vubirka;
    vubirka.push_back(xi);
    vubirka.push_back(ni);

    cout << "================================= " << endl;
    for (int i = 0; i < vubirka.size(); i++)
    {
        for (int j = 0; j < vubirka[i].size(); j++)
        {
            cout << vubirka[i][j] << " ";
        }
        cout << endl;
    }

    int n = 0;

    for (int i = 0; i < vubirka[1].size(); i++)
    {
        n += vubirka[1][i];
    }
    cout << "n: " << n << endl;

    float x = 0;
    for (int i = 0; i < vubirka[0].size(); i++)
    {
        x += vubirka[0][i] * vubirka[1][i];
    }
    x = x / n;
    cout << "x: " << x << endl;


    float G = 8;
    cout << "G: " << G << endl;

    float t = 2.62;

    float a1 = x - ((G * t) / (sqrt(n)));
    float a2 = x + ((G * t) / (sqrt(n)));

    cout << a1 << " < a < " << a2 << endl;
}

void func3()
{
    vector<vector<int>> vubirka;
    vector<int> xi = { 2, 4, 6, 8, 10 };
    vector<int> ni = { 2, 3, 6, 4, 2 };
    vubirka.push_back(xi);
    vubirka.push_back(ni);

    cout << "================================= " << endl;
    for (int i = 0; i < vubirka.size(); i++)
    {
        for (int j = 0; j < vubirka[i].size(); j++)
        {
            cout << vubirka[i][j] << " ";
        }
        cout << endl;
    }

    int n = 0;

    for (int i = 0; i < vubirka[1].size(); i++)
    {
        n += vubirka[1][i];
    }

    float x = 0;
    for (int i = 0; i < vubirka[0].size(); i++)
    {
        x += vubirka[0][i] * vubirka[1][i];
    }
    x = x / n;
    cout << "x: " << x << endl;

    float D = 0;
    for (int i = 0; i < vubirka[1].size(); i++)
    {
        D += pow(vubirka[0][i] - x, 2) * vubirka[1][i];
    }
    D = D / n;
    cout << "D: " << D << endl;

    float G = sqrt(D);
    cout << "G: " << G << endl;

    float S = (n - 1);
    S = n / S;
    S = S * D;
    S = sqrt(S);
    cout << "S: " << S << endl;

    float q = 1.01;

    float a1 = 0;
    float a2 = 0;

    if (q > 1)
    {
        a1 = 0;
        a2 =  S * (1 + q);
    }
    else
    {
        a1 = S * (1 - q);
        a2 = S * (1 + q);
    }


    cout << a1 << " < G < " << a2 << endl;
}

int main()
{
    func1();
    cout << endl << endl;
    func2();
    cout << endl << endl;
    func3();
}
