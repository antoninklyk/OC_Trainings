#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> notes(2,7);

    notes.push_back(19);
    notes.push_back(12);

    double moyenne = 0;

    for(int i = 0; i<notes.size(); i++)
    {
        moyenne += notes[i];
    }

    moyenne /= notes.size();
    
    cout << " la moyenne est : " << moyenne << endl;

    return 0;
}