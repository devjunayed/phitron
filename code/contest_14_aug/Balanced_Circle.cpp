#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> players;
        queue<int> q;

        for (int i = 0; i < n; i++)
        {
            int skill_level;
            cin >> skill_level;

            players.push_back(skill_level);
            q.push(skill_level);
        }



        bool flag = false;
        int q_index = 0;
        while(!q.empty()){

            int tmp = q.front();
            q.pop();


            for(int i = 0; i < n; i++){
                if(q_index == i){
                    continue;
                }
                q_index++;

                if(tmp >= players[i]){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}