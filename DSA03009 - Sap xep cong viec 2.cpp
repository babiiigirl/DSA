#include <bits/stdc++.h>
using namespace std;

struct Job{
	int id, dl, profit;
}; 

bool cmp(Job a, Job b)
{
	return a.dl > b.dl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		Job a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i].id >> a[i].dl >> a[i].profit;
		sort(a, a + n, cmp);
		int cur_date = a[0].dl, sum = 0, idx = 0, cnt = 0;
		priority_queue<int> pq;
		while (cur_date >= 1)
		{
			while (idx < n && a[idx].dl >= cur_date)
			{
				pq.push(a[idx].profit);
				++idx;
			}
			if (!pq.empty())
			{
				++cnt;
				sum += pq.top();
				pq.pop();
			}
			--cur_date;
		}
		cout << cnt << " " << sum << endl;
	}
}

