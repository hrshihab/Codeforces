#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n,size;
    cin >> x;
    set<int> st;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        st.insert(n);
    }
    size = st.count(1);

    if (size == 0)
        cout << "EASY" << endl;

    else
        cout << "HARD" << endl;

    return 0;
}
